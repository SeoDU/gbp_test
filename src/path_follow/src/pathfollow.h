#ifndef PATHPLAN_H
#define PATHPLAN_H
#include <ros/ros.h>
#include <math.h>
#include <geometry_msgs/Point.h>
#include <geometry_msgs/PoseStamped.h>
#include <geometry_msgs/Twist.h>
#include <nav_msgs/Odometry.h>
#include <unavlib/convt.h>

namespace jackal
{
class pathfollow
{
private:
  ros::NodeHandle m_nh;
  ros::NodeHandle m_nh_priv;

  double m_velPublishTime;
  double m_turnRadius;
  double m_maxTurnSpeed;
  double m_maxSpeed;
  geometry_msgs::Twist m_velMsg;
  nav_msgs::Odometry r_pose;
  nav_msgs::Odometry::ConstPtr first_pose;

  Eigen::Matrix4f tf_robot2world;
  Eigen::Matrix4f m_waypt;
  Eigen::VectorXf xyzrpy;

  bool isArrived;

  void getParam();

  ros::Publisher m_pub_ctrl; //For pathfollowing
  void callback_robotpose(const nav_msgs::Odometry& rpose);
  void callback_waypt(const geometry_msgs::PoseStamped& waypt);
  void vel_Timer(const ros::TimerEvent&);
  void initialize();

public:
  pathfollow();
  ~pathfollow();
};
}

#endif

