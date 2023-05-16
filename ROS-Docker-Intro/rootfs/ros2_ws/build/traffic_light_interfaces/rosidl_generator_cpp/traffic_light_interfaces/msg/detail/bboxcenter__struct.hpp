// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from traffic_light_interfaces:msg/Bboxcenter.idl
// generated code does not contain a copyright notice

#ifndef TRAFFIC_LIGHT_INTERFACES__MSG__DETAIL__BBOXCENTER__STRUCT_HPP_
#define TRAFFIC_LIGHT_INTERFACES__MSG__DETAIL__BBOXCENTER__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__traffic_light_interfaces__msg__Bboxcenter __attribute__((deprecated))
#else
# define DEPRECATED__traffic_light_interfaces__msg__Bboxcenter __declspec(deprecated)
#endif

namespace traffic_light_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Bboxcenter_
{
  using Type = Bboxcenter_<ContainerAllocator>;

  explicit Bboxcenter_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->probability = 0.0;
      this->xmin = 0ll;
      this->ymin = 0ll;
      this->xmax = 0ll;
      this->ymax = 0ll;
      this->center_x = 0.0;
      this->center_y = 0.0;
      this->center_z = 0.0;
      this->id = 0;
    }
  }

  explicit Bboxcenter_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->probability = 0.0;
      this->xmin = 0ll;
      this->ymin = 0ll;
      this->xmax = 0ll;
      this->ymax = 0ll;
      this->center_x = 0.0;
      this->center_y = 0.0;
      this->center_z = 0.0;
      this->id = 0;
    }
  }

  // field types and members
  using _probability_type =
    double;
  _probability_type probability;
  using _xmin_type =
    int64_t;
  _xmin_type xmin;
  using _ymin_type =
    int64_t;
  _ymin_type ymin;
  using _xmax_type =
    int64_t;
  _xmax_type xmax;
  using _ymax_type =
    int64_t;
  _ymax_type ymax;
  using _center_x_type =
    double;
  _center_x_type center_x;
  using _center_y_type =
    double;
  _center_y_type center_y;
  using _center_z_type =
    double;
  _center_z_type center_z;
  using _id_type =
    int16_t;
  _id_type id;
  using _type_type =
    std::vector<int16_t, typename ContainerAllocator::template rebind<int16_t>::other>;
  _type_type type;

  // setters for named parameter idiom
  Type & set__probability(
    const double & _arg)
  {
    this->probability = _arg;
    return *this;
  }
  Type & set__xmin(
    const int64_t & _arg)
  {
    this->xmin = _arg;
    return *this;
  }
  Type & set__ymin(
    const int64_t & _arg)
  {
    this->ymin = _arg;
    return *this;
  }
  Type & set__xmax(
    const int64_t & _arg)
  {
    this->xmax = _arg;
    return *this;
  }
  Type & set__ymax(
    const int64_t & _arg)
  {
    this->ymax = _arg;
    return *this;
  }
  Type & set__center_x(
    const double & _arg)
  {
    this->center_x = _arg;
    return *this;
  }
  Type & set__center_y(
    const double & _arg)
  {
    this->center_y = _arg;
    return *this;
  }
  Type & set__center_z(
    const double & _arg)
  {
    this->center_z = _arg;
    return *this;
  }
  Type & set__id(
    const int16_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__type(
    const std::vector<int16_t, typename ContainerAllocator::template rebind<int16_t>::other> & _arg)
  {
    this->type = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    traffic_light_interfaces::msg::Bboxcenter_<ContainerAllocator> *;
  using ConstRawPtr =
    const traffic_light_interfaces::msg::Bboxcenter_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<traffic_light_interfaces::msg::Bboxcenter_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<traffic_light_interfaces::msg::Bboxcenter_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      traffic_light_interfaces::msg::Bboxcenter_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<traffic_light_interfaces::msg::Bboxcenter_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      traffic_light_interfaces::msg::Bboxcenter_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<traffic_light_interfaces::msg::Bboxcenter_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<traffic_light_interfaces::msg::Bboxcenter_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<traffic_light_interfaces::msg::Bboxcenter_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__traffic_light_interfaces__msg__Bboxcenter
    std::shared_ptr<traffic_light_interfaces::msg::Bboxcenter_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__traffic_light_interfaces__msg__Bboxcenter
    std::shared_ptr<traffic_light_interfaces::msg::Bboxcenter_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Bboxcenter_ & other) const
  {
    if (this->probability != other.probability) {
      return false;
    }
    if (this->xmin != other.xmin) {
      return false;
    }
    if (this->ymin != other.ymin) {
      return false;
    }
    if (this->xmax != other.xmax) {
      return false;
    }
    if (this->ymax != other.ymax) {
      return false;
    }
    if (this->center_x != other.center_x) {
      return false;
    }
    if (this->center_y != other.center_y) {
      return false;
    }
    if (this->center_z != other.center_z) {
      return false;
    }
    if (this->id != other.id) {
      return false;
    }
    if (this->type != other.type) {
      return false;
    }
    return true;
  }
  bool operator!=(const Bboxcenter_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Bboxcenter_

// alias to use template instance with default allocator
using Bboxcenter =
  traffic_light_interfaces::msg::Bboxcenter_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace traffic_light_interfaces

#endif  // TRAFFIC_LIGHT_INTERFACES__MSG__DETAIL__BBOXCENTER__STRUCT_HPP_
