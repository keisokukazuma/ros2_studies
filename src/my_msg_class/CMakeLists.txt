cmake_minimum_required(VERSION 3.8)
project(my_msg_class)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(my_messages REQUIRED)

add_executable(my_pub_test
  src/my_pub_main.cpp
  src/my_pub.cpp
)
ament_target_dependencies(my_pub_test
  rclcpp
  my_messages
)

add_executable(my_sub_test
  src/my_sub_main.cpp
  src/my_sub.cpp
)
ament_target_dependencies(my_sub_test
  rclcpp
  my_messages
)

install(TARGETS
  my_pub_test
  my_sub_test
  DESTINATION lib/${PROJECT_NAME}
)

ament_package()
