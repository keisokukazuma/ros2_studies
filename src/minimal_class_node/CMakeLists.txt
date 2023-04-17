cmake_minimum_required(VERSION 3.8)
project(minimal_class_node)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)

add_executable(minimal_node_test
  src/main.cpp
  src/minimal_node.cpp
)
ament_target_dependencies(minimal_node_test
  rclcpp
)
install(TARGETS
  minimal_node_test
  DESTINATION lib/${PROJECT_NAME}
)

ament_package()
