// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from my_messages:msg/DoubleTwoInts.idl
// generated code does not contain a copyright notice

#ifndef MY_MESSAGES__MSG__DETAIL__DOUBLE_TWO_INTS__STRUCT_HPP_
#define MY_MESSAGES__MSG__DETAIL__DOUBLE_TWO_INTS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'a'
// Member 'b'
#include "my_messages/msg/detail/two_ints__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__my_messages__msg__DoubleTwoInts __attribute__((deprecated))
#else
# define DEPRECATED__my_messages__msg__DoubleTwoInts __declspec(deprecated)
#endif

namespace my_messages
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DoubleTwoInts_
{
  using Type = DoubleTwoInts_<ContainerAllocator>;

  explicit DoubleTwoInts_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : a(_init),
    b(_init)
  {
    (void)_init;
  }

  explicit DoubleTwoInts_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : a(_alloc, _init),
    b(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _a_type =
    my_messages::msg::TwoInts_<ContainerAllocator>;
  _a_type a;
  using _b_type =
    my_messages::msg::TwoInts_<ContainerAllocator>;
  _b_type b;

  // setters for named parameter idiom
  Type & set__a(
    const my_messages::msg::TwoInts_<ContainerAllocator> & _arg)
  {
    this->a = _arg;
    return *this;
  }
  Type & set__b(
    const my_messages::msg::TwoInts_<ContainerAllocator> & _arg)
  {
    this->b = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_messages::msg::DoubleTwoInts_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_messages::msg::DoubleTwoInts_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_messages::msg::DoubleTwoInts_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_messages::msg::DoubleTwoInts_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_messages::msg::DoubleTwoInts_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_messages::msg::DoubleTwoInts_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_messages::msg::DoubleTwoInts_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_messages::msg::DoubleTwoInts_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_messages::msg::DoubleTwoInts_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_messages::msg::DoubleTwoInts_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_messages__msg__DoubleTwoInts
    std::shared_ptr<my_messages::msg::DoubleTwoInts_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_messages__msg__DoubleTwoInts
    std::shared_ptr<my_messages::msg::DoubleTwoInts_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DoubleTwoInts_ & other) const
  {
    if (this->a != other.a) {
      return false;
    }
    if (this->b != other.b) {
      return false;
    }
    return true;
  }
  bool operator!=(const DoubleTwoInts_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DoubleTwoInts_

// alias to use template instance with default allocator
using DoubleTwoInts =
  my_messages::msg::DoubleTwoInts_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace my_messages

#endif  // MY_MESSAGES__MSG__DETAIL__DOUBLE_TWO_INTS__STRUCT_HPP_
