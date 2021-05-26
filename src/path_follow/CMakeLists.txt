cmake_minimum_required(VERSION 3.0.2)
project(path_follow)

find_package(catkin REQUIRED COMPONENTS
  roscpp
  std_msgs
  geometry_msgs
  nav_msgs
  cv_bridge
  pcl_conversions
  pcl_ros
  unavlib
)


catkin_package(

)

find_package(PCL 1.7 REQUIRED)

find_package(OpenCV)
include_directories(${OpenCV_INCLUDE_DIRS})

include_directories(
# include
  ${catkin_INCLUDE_DIRS}
)

add_executable(jackal_ptf src/jackal_pathfollow.cpp src/pathfollow.cpp)
target_link_libraries(jackal_ptf ${catkin_LIBRARIES} ${OpenCV_LIBRARIES})
