#include <rclcpp/rclcpp.hpp>
#include <example_interfaces/msg/string.hpp>
#include <rclcpp/qos.hpp>
#include "minimal_subscriber.hpp"

void MinimalSubscriber::_topic_callback(const example_interfaces::msg::String::SharedPtr msg)
{
    RCLCPP_INFO(this->get_logger(), "I heard: %s", msg->data.c_str());
}

MinimalSubscriber::MinimalSubscriber(const rclcpp::NodeOptions& options) : MinimalSubscriber("", options){}

MinimalSubscriber::MinimalSubscriber(const std::string& name_space, const rclcpp::NodeOptions& options) : Node("minimal_subscriber", name_space, options)
{
    _subscription = this->create_subscription<example_interfaces::msg::String>("topic_test", rclcpp::QoS(10), std::bind(&MinimalSubscriber::_topic_callback, this, std::placeholders::_1));
}

