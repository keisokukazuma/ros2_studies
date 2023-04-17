#include <rclcpp/rclcpp.hpp>
#include "my_messages/msg/two_ints.hpp"

class MyPub : public rclcpp::Node
{
    public:
        MyPub(const std::string& name_space = "", const rclcpp::NodeOptions& options = rclcpp::NodeOptions());
    
    private:
        rclcpp::Publisher<my_messages::msg::TwoInts>::SharedPtr pub_;
        rclcpp::TimerBase::SharedPtr timer_;
};