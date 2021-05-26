#include "pathfollow.h"

#define _USE_MATH_DEFINES

using namespace jackal;
using namespace unavlib;

pathfollow::pathfollow()
{
  getParam();
  m_pub_ctrl = m_nh.advertise<geometry_msgs::Twist>("/jackal/pathfollow/ctrl",100);

  static ros::Timer timer1 = m_nh.createTimer(ros::Duration(m_velPublishTime), &pathfollow::vel_Timer,this);
  static ros::Subscriber sub1 = m_nh.subscribe("/jackal/pathfollow/waypoint", 1 ,&pathfollow::callback_waypt,this);
  static ros::Subscriber sub2 = m_nh.subscribe("/jackal/pose", 1 ,&pathfollow::callback_robotpose,this);
  initialize();
}

pathfollow::~pathfollow()
{}

void pathfollow::getParam()
{
  m_nh_priv = ros::NodeHandle("~");
  m_nh_priv.param("/velocity_pubtime",m_velPublishTime,0.05);
  m_nh_priv.param("/turn_radius",m_turnRadius,45.0);
  m_nh_priv.param("/max_turnspeed",m_maxTurnSpeed,60.0);
  m_nh_priv.param("/max_speed",m_maxSpeed,2.5);
}

void pathfollow::vel_Timer(const ros::TimerEvent &)
{
  tf_robot2world = cvt::geoPose2eigen(r_pose.pose.pose);
  Eigen::VectorXf xyzrpy = cvt::eigen2xyzrpy(tf_robot2world.inverse()*m_waypt);
  float dist = sqrt(pow(xyzrpy[0],2) + pow(xyzrpy[1],2));
  float angleDiff, turnSpeed;
  float forwardSpeed = 0;
  if (dist < 0.2)
  {
    forwardSpeed = 0;
    angleDiff = xyzrpy[5] * 180.0 / M_PI;
    if (abs(angleDiff) < 1) angleDiff = 0;
    turnSpeed = angleDiff;
  }
  else
  {
    angleDiff = atan2(xyzrpy[1], xyzrpy[0]) * 180.0 / M_PI;
    forwardSpeed = m_maxSpeed * (1 - abs(angleDiff)/m_turnRadius);
    if(forwardSpeed<0) forwardSpeed = 0;
    turnSpeed = angleDiff / m_turnRadius * m_maxTurnSpeed;
  }
  m_velMsg.linear.x = forwardSpeed;
  m_velMsg.angular.z = turnSpeed / 180.0 * M_PI;
//  std::cout << m_velMsg << std::endl;
  m_pub_ctrl.publish(m_velMsg);
}

void pathfollow::initialize()
{
  first_pose
      = ros::topic::waitForMessage<nav_msgs::Odometry>("/jackal/pose",ros::Duration(10));
  m_waypt = cvt::geoPose2eigen(first_pose->pose.pose);
}

void pathfollow::callback_robotpose(const nav_msgs::Odometry& rpose)
{
  r_pose = rpose;
}

void pathfollow::callback_waypt(const geometry_msgs::PoseStamped& waypt)
{
  m_waypt = cvt::geoPose2eigen(waypt.pose);
  isArrived = false;
}
