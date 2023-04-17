cmake_minimum_required(VERSION 3.8)
project(minimal_publisher_class)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(example_interfaces REQUIRED)

add_executable(minimal_publisher_test
  src/minimal_publisher_main.cpp
  src/minimal_publisher.cpp
  )
ament_target_dependencies(minimal_publisher_test
  rclcpp
  example_interfaces
)
install(TARGETS
  minimal_publisher_test
  DESTINATION lib/${PROJECT_NAME}
)

ament_package()
