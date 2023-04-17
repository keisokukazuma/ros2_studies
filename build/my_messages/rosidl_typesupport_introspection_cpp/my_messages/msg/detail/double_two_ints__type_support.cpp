// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from my_messages:msg/DoubleTwoInts.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "my_messages/msg/detail/double_two_ints__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace my_messages
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void DoubleTwoInts_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) my_messages::msg::DoubleTwoInts(_init);
}

void DoubleTwoInts_fini_function(void * message_memory)
{
  auto typed_message = static_cast<my_messages::msg::DoubleTwoInts *>(message_memory);
  typed_message->~DoubleTwoInts();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember DoubleTwoInts_message_member_array[2] = {
  {
    "a",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<my_messages::msg::TwoInts>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_messages::msg::DoubleTwoInts, a),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "b",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<my_messages::msg::TwoInts>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_messages::msg::DoubleTwoInts, b),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers DoubleTwoInts_message_members = {
  "my_messages::msg",  // message namespace
  "DoubleTwoInts",  // message name
  2,  // number of fields
  sizeof(my_messages::msg::DoubleTwoInts),
  DoubleTwoInts_message_member_array,  // message members
  DoubleTwoInts_init_function,  // function to initialize message memory (memory has to be allocated)
  DoubleTwoInts_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t DoubleTwoInts_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &DoubleTwoInts_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace my_messages


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<my_messages::msg::DoubleTwoInts>()
{
  return &::my_messages::msg::rosidl_typesupport_introspection_cpp::DoubleTwoInts_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, my_messages, msg, DoubleTwoInts)() {
  return &::my_messages::msg::rosidl_typesupport_introspection_cpp::DoubleTwoInts_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
