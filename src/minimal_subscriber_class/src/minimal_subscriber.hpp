#include <rclcpp/rclcpp.hpp>
#include <example_interfaces/msg/string.hpp>

class MinimalSubscriber : public rclcpp::Node
{
    public:
        MinimalSubscriber(const rclcpp::NodeOptions& options=rclcpp::NodeOptions());
        MinimalSubscriber(const std::string& name_space, const rclcpp::NodeOptions& options=rclcpp::NodeOptions());
    
    private:
        rclcpp::Subscription<example_interfaces::msg::String>::SharedPtr _subscription;
        void _topic_callback(const example_interfaces::msg::String::SharedPtr msg);
};