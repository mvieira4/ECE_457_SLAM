execute_process(COMMAND "/home/ros/ECE_457_SLAM/navigation/ros_workspace/build/image_pipeline-kinetic/camera_calibration/catkin_generated/python_distutils_install.sh" RESULT_VARIABLE res)

if(NOT res EQUAL 0)
  message(FATAL_ERROR "execute_process(/home/ros/ECE_457_SLAM/navigation/ros_workspace/build/image_pipeline-kinetic/camera_calibration/catkin_generated/python_distutils_install.sh) returned error code ")
endif()
