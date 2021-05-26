# generated from catkin/cmake/template/pkg.context.pc.in
CATKIN_PACKAGE_PREFIX = ""
PROJECT_PKG_CONFIG_INCLUDE_DIRS = "${prefix}/include".split(';') if "${prefix}/include" != "" else []
PROJECT_CATKIN_DEPENDS = "trajectory_msgs;mav_msgs;planner_msgs;planner_control_interface".replace(';', ' ')
PKG_CONFIG_LIBRARIES_WITH_PREFIX = "-lpci_mav".split(';') if "-lpci_mav" != "" else []
PROJECT_NAME = "pci_mav"
PROJECT_SPACE_DIR = "/home/donguk/ros_workspace/gbplanner_ws/install"
PROJECT_VERSION = "0.0.0"
