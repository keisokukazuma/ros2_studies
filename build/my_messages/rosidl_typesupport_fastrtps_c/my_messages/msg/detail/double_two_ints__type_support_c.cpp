// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from my_messages:msg/DoubleTwoInts.idl
// generated code does not contain a copyright notice
#include "my_messages/msg/detail/double_two_ints__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "my_messages/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "my_messages/msg/detail/double_two_ints__struct.h"
#include "my_messages/msg/detail/double_two_ints__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "my_messages/msg/detail/two_ints__functions.h"  // a, b

// forward declare type support functions
size_t get_serialized_size_my_messages__msg__TwoInts(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_my_messages__msg__TwoInts(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, my_messages, msg, TwoInts)();


using _DoubleTwoInts__ros_msg_type = my_messages__msg__DoubleTwoInts;

static bool _DoubleTwoInts__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _DoubleTwoInts__ros_msg_type * ros_message = static_cast<const _DoubleTwoInts__ros_msg_type *>(untyped_ros_message);
  // Field name: a
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, my_messages, msg, TwoInts
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->a, cdr))
    {
      return false;
    }
  }

  // Field name: b
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, my_messages, msg, TwoInts
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->b, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _DoubleTwoInts__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _DoubleTwoInts__ros_msg_type * ros_message = static_cast<_DoubleTwoInts__ros_msg_type *>(untyped_ros_message);
  // Field name: a
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, my_messages, msg, TwoInts
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->a))
    {
      return false;
    }
  }

  // Field name: b
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, my_messages, msg, TwoInts
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->b))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_my_messages
size_t get_serialized_size_my_messages__msg__DoubleTwoInts(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _DoubleTwoInts__ros_msg_type * ros_message = static_cast<const _DoubleTwoInts__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name a

  current_alignment += get_serialized_size_my_messages__msg__TwoInts(
    &(ros_message->a), current_alignment);
  // field.name b

  current_alignment += get_serialized_size_my_messages__msg__TwoInts(
    &(ros_message->b), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _DoubleTwoInts__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_my_messages__msg__DoubleTwoInts(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_my_messages
size_t max_serialized_size_my_messages__msg__DoubleTwoInts(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: a
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_my_messages__msg__TwoInts(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: b
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_my_messages__msg__TwoInts(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _DoubleTwoInts__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_my_messages__msg__DoubleTwoInts(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_DoubleTwoInts = {
  "my_messages::msg",
  "DoubleTwoInts",
  _DoubleTwoInts__cdr_serialize,
  _DoubleTwoInts__cdr_deserialize,
  _DoubleTwoInts__get_serialized_size,
  _DoubleTwoInts__max_serialized_size
};

static rosidl_message_type_support_t _DoubleTwoInts__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_DoubleTwoInts,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, my_messages, msg, DoubleTwoInts)() {
  return &_DoubleTwoInts__type_support;
}

#if defined(__cplusplus)
}
#endif
