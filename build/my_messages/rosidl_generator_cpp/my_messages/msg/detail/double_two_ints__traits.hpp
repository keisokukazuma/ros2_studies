// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from my_messages:msg/DoubleTwoInts.idl
// generated code does not contain a copyright notice

#ifndef MY_MESSAGES__MSG__DETAIL__DOUBLE_TWO_INTS__TRAITS_HPP_
#define MY_MESSAGES__MSG__DETAIL__DOUBLE_TWO_INTS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "my_messages/msg/detail/double_two_ints__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'a'
// Member 'b'
#include "my_messages/msg/detail/two_ints__traits.hpp"

namespace my_messages
{

namespace msg
{

inline void to_flow_style_yaml(
  const DoubleTwoInts & msg,
  std::ostream & out)
{
  out << "{";
  // member: a
  {
    out << "a: ";
    to_flow_style_yaml(msg.a, out);
    out << ", ";
  }

  // member: b
  {
    out << "b: ";
    to_flow_style_yaml(msg.b, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DoubleTwoInts & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: a
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "a:\n";
    to_block_style_yaml(msg.a, out, indentation + 2);
  }

  // member: b
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "b:\n";
    to_block_style_yaml(msg.b, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DoubleTwoInts & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace my_messages

namespace rosidl_generator_traits
{

[[deprecated("use my_messages::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const my_messages::msg::DoubleTwoInts & msg,
  std::ostream & out, size_t indentation = 0)
{
  my_messages::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use my_messages::msg::to_yaml() instead")]]
inline std::string to_yaml(const my_messages::msg::DoubleTwoInts & msg)
{
  return my_messages::msg::to_yaml(msg);
}

template<>
inline const char * data_type<my_messages::msg::DoubleTwoInts>()
{
  return "my_messages::msg::DoubleTwoInts";
}

template<>
inline const char * name<my_messages::msg::DoubleTwoInts>()
{
  return "my_messages/msg/DoubleTwoInts";
}

template<>
struct has_fixed_size<my_messages::msg::DoubleTwoInts>
  : std::integral_constant<bool, has_fixed_size<my_messages::msg::TwoInts>::value> {};

template<>
struct has_bounded_size<my_messages::msg::DoubleTwoInts>
  : std::integral_constant<bool, has_bounded_size<my_messages::msg::TwoInts>::value> {};

template<>
struct is_message<my_messages::msg::DoubleTwoInts>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MY_MESSAGES__MSG__DETAIL__DOUBLE_TWO_INTS__TRAITS_HPP_
