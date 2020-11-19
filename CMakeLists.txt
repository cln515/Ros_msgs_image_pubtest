cmake_minimum_required(VERSION 2.8.3)
project(test_imagepub)

find_package(catkin REQUIRED COMPONENTS
  roscpp
  std_msgs
  message_generation
)

catkin_package(
#  INCLUDE_DIRS include
#  LIBRARIES test_imagepub
#  CATKIN_DEPENDS other_catkin_pkg
#  DEPENDS system_lib
)

include_directories(
# include
 ${catkin_INCLUDE_DIRS}
)

add_executable(${PROJECT_NAME}_node
  src/main.cpp
)

target_link_libraries(${PROJECT_NAME}_node
   ${catkin_LIBRARIES}
)