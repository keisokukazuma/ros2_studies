#include <rclcpp/rclcpp.hpp>
#include "my_pub.hpp"

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<MyPub>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}