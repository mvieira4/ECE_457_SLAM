# generated from catkin/cmake/template/pkg.context.pc.in
CATKIN_PACKAGE_PREFIX = ""
PROJECT_PKG_CONFIG_INCLUDE_DIRS = "${prefix}/include".split(';') if "${prefix}/include" != "" else []
PROJECT_CATKIN_DEPENDS = "grid_map_ros;grid_map_core;grid_map_msgs;filters".replace(';', ' ')
PKG_CONFIG_LIBRARIES_WITH_PREFIX = "-lgrid_map_filters".split(';') if "-lgrid_map_filters" != "" else []
PROJECT_NAME = "grid_map_filters"
PROJECT_SPACE_DIR = "/home/ros/ECE_457_SLAM/navigation/ros_workspace/install"
PROJECT_VERSION = "1.6.0"
