#include <rclcpp/rclcpp.hpp>
#include <example_interfaces/msg/string.hpp>

class MinimalPublisher : public rclcpp::Node
{
    public:
        MinimalPublisher(const std::string& name_space="", const rclcpp::NodeOptions& options=rclcpp::NodeOptions());

    private:
        rclcpp::Publisher<example_interfaces::msg::String>::SharedPtr publisher_;
        rclcpp::TimerBase::SharedPtr timer_;
        size_t count_;
};