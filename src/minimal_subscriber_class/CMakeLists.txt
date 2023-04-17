cmake_minimum_required(VERSION 3.8)
project(minimal_subscriber_class)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(example_interfaces REQUIRED)

add_executable(callback_subscriber_test
  src/minimal_subscriber_main.cpp
  src/minimal_subscriber.cpp
)
ament_target_dependencies(callback_subscriber_test
  rclcpp
  example_interfaces
)
install(TARGETS
  callback_subscriber_test
  DESTINATION lib/${PROJECT_NAME}
)

ament_package()
