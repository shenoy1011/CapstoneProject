// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from traffic_light_interfaces:msg/BBoxCenters.idl
// generated code does not contain a copyright notice

#ifndef TRAFFIC_LIGHT_INTERFACES__MSG__DETAIL__B_BOX_CENTERS__STRUCT_HPP_
#define TRAFFIC_LIGHT_INTERFACES__MSG__DETAIL__B_BOX_CENTERS__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'header'
// Member 'image_header'
#include "traffic_light_interfaces/msg/detail/header__struct.hpp"
// Member 'bbox_centers'
#include "traffic_light_interfaces/msg/detail/b_box_center__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__traffic_light_interfaces__msg__BBoxCenters __attribute__((deprecated))
#else
# define DEPRECATED__traffic_light_interfaces__msg__BBoxCenters __declspec(deprecated)
#endif

namespace traffic_light_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BBoxCenters_
{
  using Type = BBoxCenters_<ContainerAllocator>;

  explicit BBoxCenters_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    image_header(_init)
  {
    (void)_init;
  }

  explicit BBoxCenters_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    image_header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    traffic_light_interfaces::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _image_header_type =
    traffic_light_interfaces::msg::Header_<ContainerAllocator>;
  _image_header_type image_header;
  using _bbox_centers_type =
    std::vector<traffic_light_interfaces::msg::BBoxCenter_<ContainerAllocator>, typename ContainerAllocator::template rebind<traffic_light_interfaces::msg::BBoxCenter_<ContainerAllocator>>::other>;
  _bbox_centers_type bbox_centers;

  // setters for named parameter idiom
  Type & set__header(
    const traffic_light_interfaces::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__image_header(
    const traffic_light_interfaces::msg::Header_<ContainerAllocator> & _arg)
  {
    this->image_header = _arg;
    return *this;
  }
  Type & set__bbox_centers(
    const std::vector<traffic_light_interfaces::msg::BBoxCenter_<ContainerAllocator>, typename ContainerAllocator::template rebind<traffic_light_interfaces::msg::BBoxCenter_<ContainerAllocator>>::other> & _arg)
  {
    this->bbox_centers = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    traffic_light_interfaces::msg::BBoxCenters_<ContainerAllocator> *;
  using ConstRawPtr =
    const traffic_light_interfaces::msg::BBoxCenters_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<traffic_light_interfaces::msg::BBoxCenters_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<traffic_light_interfaces::msg::BBoxCenters_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      traffic_light_interfaces::msg::BBoxCenters_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<traffic_light_interfaces::msg::BBoxCenters_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      traffic_light_interfaces::msg::BBoxCenters_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<traffic_light_interfaces::msg::BBoxCenters_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<traffic_light_interfaces::msg::BBoxCenters_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<traffic_light_interfaces::msg::BBoxCenters_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__traffic_light_interfaces__msg__BBoxCenters
    std::shared_ptr<traffic_light_interfaces::msg::BBoxCenters_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__traffic_light_interfaces__msg__BBoxCenters
    std::shared_ptr<traffic_light_interfaces::msg::BBoxCenters_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BBoxCenters_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->image_header != other.image_header) {
      return false;
    }
    if (this->bbox_centers != other.bbox_centers) {
      return false;
    }
    return true;
  }
  bool operator!=(const BBoxCenters_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BBoxCenters_

// alias to use template instance with default allocator
using BBoxCenters =
  traffic_light_interfaces::msg::BBoxCenters_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace traffic_light_interfaces

#endif  // TRAFFIC_LIGHT_INTERFACES__MSG__DETAIL__B_BOX_CENTERS__STRUCT_HPP_
