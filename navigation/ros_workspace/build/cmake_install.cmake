# Install script for directory: /home/ros/ECE_457_SLAM/navigation/ros_workspace/src

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/ros/ECE_457_SLAM/navigation/ros_workspace/install")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  
      if (NOT EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}")
        file(MAKE_DIRECTORY "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}")
      endif()
      if (NOT EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/.catkin")
        file(WRITE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/.catkin" "")
      endif()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/ros/ECE_457_SLAM/navigation/ros_workspace/install/_setup_util.py")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/home/ros/ECE_457_SLAM/navigation/ros_workspace/install" TYPE PROGRAM FILES "/home/ros/ECE_457_SLAM/navigation/ros_workspace/build/catkin_generated/installspace/_setup_util.py")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/ros/ECE_457_SLAM/navigation/ros_workspace/install/env.sh")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/home/ros/ECE_457_SLAM/navigation/ros_workspace/install" TYPE PROGRAM FILES "/home/ros/ECE_457_SLAM/navigation/ros_workspace/build/catkin_generated/installspace/env.sh")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/ros/ECE_457_SLAM/navigation/ros_workspace/install/setup.bash;/home/ros/ECE_457_SLAM/navigation/ros_workspace/install/local_setup.bash")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/home/ros/ECE_457_SLAM/navigation/ros_workspace/install" TYPE FILE FILES
    "/home/ros/ECE_457_SLAM/navigation/ros_workspace/build/catkin_generated/installspace/setup.bash"
    "/home/ros/ECE_457_SLAM/navigation/ros_workspace/build/catkin_generated/installspace/local_setup.bash"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/ros/ECE_457_SLAM/navigation/ros_workspace/install/setup.sh;/home/ros/ECE_457_SLAM/navigation/ros_workspace/install/local_setup.sh")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/home/ros/ECE_457_SLAM/navigation/ros_workspace/install" TYPE FILE FILES
    "/home/ros/ECE_457_SLAM/navigation/ros_workspace/build/catkin_generated/installspace/setup.sh"
    "/home/ros/ECE_457_SLAM/navigation/ros_workspace/build/catkin_generated/installspace/local_setup.sh"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/ros/ECE_457_SLAM/navigation/ros_workspace/install/setup.zsh;/home/ros/ECE_457_SLAM/navigation/ros_workspace/install/local_setup.zsh")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/home/ros/ECE_457_SLAM/navigation/ros_workspace/install" TYPE FILE FILES
    "/home/ros/ECE_457_SLAM/navigation/ros_workspace/build/catkin_generated/installspace/setup.zsh"
    "/home/ros/ECE_457_SLAM/navigation/ros_workspace/build/catkin_generated/installspace/local_setup.zsh"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/ros/ECE_457_SLAM/navigation/ros_workspace/install/.rosinstall")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/home/ros/ECE_457_SLAM/navigation/ros_workspace/install" TYPE FILE FILES "/home/ros/ECE_457_SLAM/navigation/ros_workspace/build/catkin_generated/installspace/.rosinstall")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/ros/ECE_457_SLAM/navigation/ros_workspace/build/gtest/cmake_install.cmake")
  include("/home/ros/ECE_457_SLAM/navigation/ros_workspace/build/ros_astra_launch-master/cmake_install.cmake")
  include("/home/ros/ECE_457_SLAM/navigation/ros_workspace/build/grid_map-1.6.0/grid_map/cmake_install.cmake")
  include("/home/ros/ECE_457_SLAM/navigation/ros_workspace/build/grid_map-1.6.0/grid_map_core/cmake_install.cmake")
  include("/home/ros/ECE_457_SLAM/navigation/ros_workspace/build/image_pipeline-kinetic/image_pipeline/cmake_install.cmake")
  include("/home/ros/ECE_457_SLAM/navigation/ros_workspace/build/navigation-kinetic-devel/navigation/cmake_install.cmake")
  include("/home/ros/ECE_457_SLAM/navigation/ros_workspace/build/grid_map-1.6.0/grid_map_octomap/cmake_install.cmake")
  include("/home/ros/ECE_457_SLAM/navigation/ros_workspace/build/slam_gmapping-melodic-devel/slam_gmapping/cmake_install.cmake")
  include("/home/ros/ECE_457_SLAM/navigation/ros_workspace/build/teleop_twist_keyboard-master/cmake_install.cmake")
  include("/home/ros/ECE_457_SLAM/navigation/ros_workspace/build/grid_map-1.6.0/grid_map_msgs/cmake_install.cmake")
  include("/home/ros/ECE_457_SLAM/navigation/ros_workspace/build/map_navigation_pkg/cmake_install.cmake")
  include("/home/ros/ECE_457_SLAM/navigation/ros_workspace/build/rosbot_ekf-master/cmake_install.cmake")
  include("/home/ros/ECE_457_SLAM/navigation/ros_workspace/build/image_pipeline-kinetic/camera_calibration/cmake_install.cmake")
  include("/home/ros/ECE_457_SLAM/navigation/ros_workspace/build/navigation-kinetic-devel/map_server/cmake_install.cmake")
  include("/home/ros/ECE_457_SLAM/navigation/ros_workspace/build/grid_map-1.6.0/grid_map_cv/cmake_install.cmake")
  include("/home/ros/ECE_457_SLAM/navigation/ros_workspace/build/image_pipeline-kinetic/image_proc/cmake_install.cmake")
  include("/home/ros/ECE_457_SLAM/navigation/ros_workspace/build/image_pipeline-kinetic/image_publisher/cmake_install.cmake")
  include("/home/ros/ECE_457_SLAM/navigation/ros_workspace/build/rplidar_ros-master/cmake_install.cmake")
  include("/home/ros/ECE_457_SLAM/navigation/ros_workspace/build/image_pipeline-kinetic/image_view/cmake_install.cmake")
  include("/home/ros/ECE_457_SLAM/navigation/ros_workspace/build/image_pipeline-kinetic/stereo_image_proc/cmake_install.cmake")
  include("/home/ros/ECE_457_SLAM/navigation/ros_workspace/build/image_pipeline-kinetic/depth_image_proc/cmake_install.cmake")
  include("/home/ros/ECE_457_SLAM/navigation/ros_workspace/build/navigation-kinetic-devel/amcl/cmake_install.cmake")
  include("/home/ros/ECE_457_SLAM/navigation/ros_workspace/build/find-object-kinetic-devel/cmake_install.cmake")
  include("/home/ros/ECE_457_SLAM/navigation/ros_workspace/build/slam_gmapping-melodic-devel/gmapping/cmake_install.cmake")
  include("/home/ros/ECE_457_SLAM/navigation/ros_workspace/build/grid_map-1.6.0/grid_map_ros/cmake_install.cmake")
  include("/home/ros/ECE_457_SLAM/navigation/ros_workspace/build/grid_map-1.6.0/grid_map_filters/cmake_install.cmake")
  include("/home/ros/ECE_457_SLAM/navigation/ros_workspace/build/grid_map-1.6.0/grid_map_loader/cmake_install.cmake")
  include("/home/ros/ECE_457_SLAM/navigation/ros_workspace/build/grid_map-1.6.0/grid_map_visualization/cmake_install.cmake")
  include("/home/ros/ECE_457_SLAM/navigation/ros_workspace/build/grid_map-1.6.0/grid_map_pcl/cmake_install.cmake")
  include("/home/ros/ECE_457_SLAM/navigation/ros_workspace/build/grid_map-1.6.0/grid_map_sdf/cmake_install.cmake")
  include("/home/ros/ECE_457_SLAM/navigation/ros_workspace/build/navigation-kinetic-devel/robot_pose_ekf/cmake_install.cmake")
  include("/home/ros/ECE_457_SLAM/navigation/ros_workspace/build/navigation-kinetic-devel/fake_localization/cmake_install.cmake")
  include("/home/ros/ECE_457_SLAM/navigation/ros_workspace/build/image_pipeline-kinetic/image_rotate/cmake_install.cmake")
  include("/home/ros/ECE_457_SLAM/navigation/ros_workspace/build/m-explore-kinetic-devel/map_merge/cmake_install.cmake")
  include("/home/ros/ECE_457_SLAM/navigation/ros_workspace/build/grid_map-1.6.0/grid_map_rviz_plugin/cmake_install.cmake")
  include("/home/ros/ECE_457_SLAM/navigation/ros_workspace/build/grid_map-1.6.0/grid_map_demos/cmake_install.cmake")
  include("/home/ros/ECE_457_SLAM/navigation/ros_workspace/build/navigation-kinetic-devel/voxel_grid/cmake_install.cmake")
  include("/home/ros/ECE_457_SLAM/navigation/ros_workspace/build/navigation-kinetic-devel/costmap_2d/cmake_install.cmake")
  include("/home/ros/ECE_457_SLAM/navigation/ros_workspace/build/m-explore-kinetic-devel/explore/cmake_install.cmake")
  include("/home/ros/ECE_457_SLAM/navigation/ros_workspace/build/grid_map-1.6.0/grid_map_costmap_2d/cmake_install.cmake")
  include("/home/ros/ECE_457_SLAM/navigation/ros_workspace/build/navigation-kinetic-devel/nav_core/cmake_install.cmake")
  include("/home/ros/ECE_457_SLAM/navigation/ros_workspace/build/navigation-kinetic-devel/base_local_planner/cmake_install.cmake")
  include("/home/ros/ECE_457_SLAM/navigation/ros_workspace/build/navigation-kinetic-devel/carrot_planner/cmake_install.cmake")
  include("/home/ros/ECE_457_SLAM/navigation/ros_workspace/build/navigation-kinetic-devel/clear_costmap_recovery/cmake_install.cmake")
  include("/home/ros/ECE_457_SLAM/navigation/ros_workspace/build/navigation-kinetic-devel/dwa_local_planner/cmake_install.cmake")
  include("/home/ros/ECE_457_SLAM/navigation/ros_workspace/build/navigation-kinetic-devel/move_slow_and_clear/cmake_install.cmake")
  include("/home/ros/ECE_457_SLAM/navigation/ros_workspace/build/navigation-kinetic-devel/navfn/cmake_install.cmake")
  include("/home/ros/ECE_457_SLAM/navigation/ros_workspace/build/navigation-kinetic-devel/global_planner/cmake_install.cmake")
  include("/home/ros/ECE_457_SLAM/navigation/ros_workspace/build/navigation-kinetic-devel/rotate_recovery/cmake_install.cmake")
  include("/home/ros/ECE_457_SLAM/navigation/ros_workspace/build/navigation-kinetic-devel/move_base/cmake_install.cmake")
  include("/home/ros/ECE_457_SLAM/navigation/ros_workspace/build/rosbot_description/src/rosbot_navigation/cmake_install.cmake")
  include("/home/ros/ECE_457_SLAM/navigation/ros_workspace/build/rosbot_description/src/rosbot_description/cmake_install.cmake")
  include("/home/ros/ECE_457_SLAM/navigation/ros_workspace/build/rosbot_description/src/rosbot_gazebo/cmake_install.cmake")
  include("/home/ros/ECE_457_SLAM/navigation/ros_workspace/build/tutorial_pkg/cmake_install.cmake")

endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/ros/ECE_457_SLAM/navigation/ros_workspace/build/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
