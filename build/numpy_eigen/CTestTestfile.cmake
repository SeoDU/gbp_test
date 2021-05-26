# CMake generated Testfile for 
# Source directory: /home/donguk/ros_workspace/gbplanner_ws/src/numpy_eigen
# Build directory: /home/donguk/ros_workspace/gbplanner_ws/build/numpy_eigen
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(_ctest_numpy_eigen_nosetests_test.numpy_eigen_tests.py "/home/donguk/ros_workspace/gbplanner_ws/build/numpy_eigen/catkin_generated/env_cached.sh" "/usr/bin/python2" "/opt/ros/melodic/share/catkin/cmake/test/run_tests.py" "/home/donguk/ros_workspace/gbplanner_ws/build/numpy_eigen/test_results/numpy_eigen/nosetests-test.numpy_eigen_tests.py.xml" "--return-code" "\"/usr/bin/cmake\" -E make_directory /home/donguk/ros_workspace/gbplanner_ws/build/numpy_eigen/test_results/numpy_eigen" "/usr/local/bin/nosetests-2.7 -P --process-timeout=60 /home/donguk/ros_workspace/gbplanner_ws/src/numpy_eigen/test/numpy_eigen_tests.py --with-xunit --xunit-file=/home/donguk/ros_workspace/gbplanner_ws/build/numpy_eigen/test_results/numpy_eigen/nosetests-test.numpy_eigen_tests.py.xml")
subdirs("gtest")
