cmake_minimum_required(VERSION 2.8.3)
project(comp_vis_pkg)

add_compile_options(-std=c++11)

find_package(catkin REQUIRED COMPONENTS
  roscpp
)

catkin_package(
  CATKIN_DEPENDS
)

find_package( 
  OpenCV REQUIRED 
)

include_directories(
    ${catkin_INCLUDE_DIRS}
    ${OpenCV_INCLUDE_DIRS}
)

add_executable(${PROJECT_NAME}_node src/tutorial_pkg_node.cpp)

add_executable(comp_vis_controller_node src/comp_vis_controller.cpp)

target_link_libraries(${PROJECT_NAME}_node
  ${catkin_LIBRARIES}
)

target_link_libraries(comp_vis_controller_node
    ${catkin_LIBRARIES}
    ${OpenCV_LIBRARIES}
)
