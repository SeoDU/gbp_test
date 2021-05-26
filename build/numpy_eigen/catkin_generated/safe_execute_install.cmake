execute_process(COMMAND "/home/donguk/ros_workspace/gbplanner_ws/build/numpy_eigen/catkin_generated/python_distutils_install.sh" RESULT_VARIABLE res)

if(NOT res EQUAL 0)
  message(FATAL_ERROR "execute_process(/home/donguk/ros_workspace/gbplanner_ws/build/numpy_eigen/catkin_generated/python_distutils_install.sh) returned error code ")
endif()
