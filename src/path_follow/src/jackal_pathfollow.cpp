#include <ros/ros.h>
#include "pathfollow.h"

int main(int argc, char **argv)
{
  ros::init(argc, argv, "jackal_pathfollow");
  ros::NodeHandle n;
  jackal::pathfollow pathplan_class = jackal::pathfollow();
  ros::spin();
  return 0;
}
