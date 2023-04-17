#include <rclcpp/rclcpp.hpp>
#include "my_sub.hpp"

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<MySub>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}