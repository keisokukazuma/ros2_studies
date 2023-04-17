#include <rclcpp/rclcpp.hpp>
#include "my_messages/msg/two_ints.hpp"

class MySub : public rclcpp::Node
{
    public:
        MySub(const std::string& name_space = "", const rclcpp::NodeOptions& options = rclcpp::NodeOptions());

    private:
        rclcpp::Subscription<my_messages::msg::TwoInts>::SharedPtr sub_;
};