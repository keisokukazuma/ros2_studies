// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from my_messages:msg/DoubleTwoInts.idl
// generated code does not contain a copyright notice

#ifndef MY_MESSAGES__MSG__DETAIL__DOUBLE_TWO_INTS__STRUCT_H_
#define MY_MESSAGES__MSG__DETAIL__DOUBLE_TWO_INTS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'a'
// Member 'b'
#include "my_messages/msg/detail/two_ints__struct.h"

/// Struct defined in msg/DoubleTwoInts in the package my_messages.
typedef struct my_messages__msg__DoubleTwoInts
{
  my_messages__msg__TwoInts a;
  my_messages__msg__TwoInts b;
} my_messages__msg__DoubleTwoInts;

// Struct for a sequence of my_messages__msg__DoubleTwoInts.
typedef struct my_messages__msg__DoubleTwoInts__Sequence
{
  my_messages__msg__DoubleTwoInts * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_messages__msg__DoubleTwoInts__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MY_MESSAGES__MSG__DETAIL__DOUBLE_TWO_INTS__STRUCT_H_
