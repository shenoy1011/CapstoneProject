// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from traffic_light_interfaces:msg/BoundingBox.idl
// generated code does not contain a copyright notice

#ifndef TRAFFIC_LIGHT_INTERFACES__MSG__DETAIL__BOUNDING_BOX__BUILDER_HPP_
#define TRAFFIC_LIGHT_INTERFACES__MSG__DETAIL__BOUNDING_BOX__BUILDER_HPP_

#include "traffic_light_interfaces/msg/detail/bounding_box__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace traffic_light_interfaces
{

namespace msg
{

namespace builder
{

class Init_BoundingBox_group
{
public:
  explicit Init_BoundingBox_group(::traffic_light_interfaces::msg::BoundingBox & msg)
  : msg_(msg)
  {}
  ::traffic_light_interfaces::msg::BoundingBox group(::traffic_light_interfaces::msg::BoundingBox::_group_type arg)
  {
    msg_.group = std::move(arg);
    return std::move(msg_);
  }

private:
  ::traffic_light_interfaces::msg::BoundingBox msg_;
};

class Init_BoundingBox_id
{
public:
  explicit Init_BoundingBox_id(::traffic_light_interfaces::msg::BoundingBox & msg)
  : msg_(msg)
  {}
  Init_BoundingBox_group id(::traffic_light_interfaces::msg::BoundingBox::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_BoundingBox_group(msg_);
  }

private:
  ::traffic_light_interfaces::msg::BoundingBox msg_;
};

class Init_BoundingBox_ymax
{
public:
  explicit Init_BoundingBox_ymax(::traffic_light_interfaces::msg::BoundingBox & msg)
  : msg_(msg)
  {}
  Init_BoundingBox_id ymax(::traffic_light_interfaces::msg::BoundingBox::_ymax_type arg)
  {
    msg_.ymax = std::move(arg);
    return Init_BoundingBox_id(msg_);
  }

private:
  ::traffic_light_interfaces::msg::BoundingBox msg_;
};

class Init_BoundingBox_xmax
{
public:
  explicit Init_BoundingBox_xmax(::traffic_light_interfaces::msg::BoundingBox & msg)
  : msg_(msg)
  {}
  Init_BoundingBox_ymax xmax(::traffic_light_interfaces::msg::BoundingBox::_xmax_type arg)
  {
    msg_.xmax = std::move(arg);
    return Init_BoundingBox_ymax(msg_);
  }

private:
  ::traffic_light_interfaces::msg::BoundingBox msg_;
};

class Init_BoundingBox_ymin
{
public:
  explicit Init_BoundingBox_ymin(::traffic_light_interfaces::msg::BoundingBox & msg)
  : msg_(msg)
  {}
  Init_BoundingBox_xmax ymin(::traffic_light_interfaces::msg::BoundingBox::_ymin_type arg)
  {
    msg_.ymin = std::move(arg);
    return Init_BoundingBox_xmax(msg_);
  }

private:
  ::traffic_light_interfaces::msg::BoundingBox msg_;
};

class Init_BoundingBox_xmin
{
public:
  explicit Init_BoundingBox_xmin(::traffic_light_interfaces::msg::BoundingBox & msg)
  : msg_(msg)
  {}
  Init_BoundingBox_ymin xmin(::traffic_light_interfaces::msg::BoundingBox::_xmin_type arg)
  {
    msg_.xmin = std::move(arg);
    return Init_BoundingBox_ymin(msg_);
  }

private:
  ::traffic_light_interfaces::msg::BoundingBox msg_;
};

class Init_BoundingBox_probability
{
public:
  Init_BoundingBox_probability()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BoundingBox_xmin probability(::traffic_light_interfaces::msg::BoundingBox::_probability_type arg)
  {
    msg_.probability = std::move(arg);
    return Init_BoundingBox_xmin(msg_);
  }

private:
  ::traffic_light_interfaces::msg::BoundingBox msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::traffic_light_interfaces::msg::BoundingBox>()
{
  return traffic_light_interfaces::msg::builder::Init_BoundingBox_probability();
}

}  // namespace traffic_light_interfaces

#endif  // TRAFFIC_LIGHT_INTERFACES__MSG__DETAIL__BOUNDING_BOX__BUILDER_HPP_
