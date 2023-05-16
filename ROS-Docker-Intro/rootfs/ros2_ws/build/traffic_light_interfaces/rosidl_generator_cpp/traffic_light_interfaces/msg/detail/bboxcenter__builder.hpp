// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from traffic_light_interfaces:msg/Bboxcenter.idl
// generated code does not contain a copyright notice

#ifndef TRAFFIC_LIGHT_INTERFACES__MSG__DETAIL__BBOXCENTER__BUILDER_HPP_
#define TRAFFIC_LIGHT_INTERFACES__MSG__DETAIL__BBOXCENTER__BUILDER_HPP_

#include "traffic_light_interfaces/msg/detail/bboxcenter__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace traffic_light_interfaces
{

namespace msg
{

namespace builder
{

class Init_Bboxcenter_type
{
public:
  explicit Init_Bboxcenter_type(::traffic_light_interfaces::msg::Bboxcenter & msg)
  : msg_(msg)
  {}
  ::traffic_light_interfaces::msg::Bboxcenter type(::traffic_light_interfaces::msg::Bboxcenter::_type_type arg)
  {
    msg_.type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::traffic_light_interfaces::msg::Bboxcenter msg_;
};

class Init_Bboxcenter_id
{
public:
  explicit Init_Bboxcenter_id(::traffic_light_interfaces::msg::Bboxcenter & msg)
  : msg_(msg)
  {}
  Init_Bboxcenter_type id(::traffic_light_interfaces::msg::Bboxcenter::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_Bboxcenter_type(msg_);
  }

private:
  ::traffic_light_interfaces::msg::Bboxcenter msg_;
};

class Init_Bboxcenter_center_z
{
public:
  explicit Init_Bboxcenter_center_z(::traffic_light_interfaces::msg::Bboxcenter & msg)
  : msg_(msg)
  {}
  Init_Bboxcenter_id center_z(::traffic_light_interfaces::msg::Bboxcenter::_center_z_type arg)
  {
    msg_.center_z = std::move(arg);
    return Init_Bboxcenter_id(msg_);
  }

private:
  ::traffic_light_interfaces::msg::Bboxcenter msg_;
};

class Init_Bboxcenter_center_y
{
public:
  explicit Init_Bboxcenter_center_y(::traffic_light_interfaces::msg::Bboxcenter & msg)
  : msg_(msg)
  {}
  Init_Bboxcenter_center_z center_y(::traffic_light_interfaces::msg::Bboxcenter::_center_y_type arg)
  {
    msg_.center_y = std::move(arg);
    return Init_Bboxcenter_center_z(msg_);
  }

private:
  ::traffic_light_interfaces::msg::Bboxcenter msg_;
};

class Init_Bboxcenter_center_x
{
public:
  explicit Init_Bboxcenter_center_x(::traffic_light_interfaces::msg::Bboxcenter & msg)
  : msg_(msg)
  {}
  Init_Bboxcenter_center_y center_x(::traffic_light_interfaces::msg::Bboxcenter::_center_x_type arg)
  {
    msg_.center_x = std::move(arg);
    return Init_Bboxcenter_center_y(msg_);
  }

private:
  ::traffic_light_interfaces::msg::Bboxcenter msg_;
};

class Init_Bboxcenter_ymax
{
public:
  explicit Init_Bboxcenter_ymax(::traffic_light_interfaces::msg::Bboxcenter & msg)
  : msg_(msg)
  {}
  Init_Bboxcenter_center_x ymax(::traffic_light_interfaces::msg::Bboxcenter::_ymax_type arg)
  {
    msg_.ymax = std::move(arg);
    return Init_Bboxcenter_center_x(msg_);
  }

private:
  ::traffic_light_interfaces::msg::Bboxcenter msg_;
};

class Init_Bboxcenter_xmax
{
public:
  explicit Init_Bboxcenter_xmax(::traffic_light_interfaces::msg::Bboxcenter & msg)
  : msg_(msg)
  {}
  Init_Bboxcenter_ymax xmax(::traffic_light_interfaces::msg::Bboxcenter::_xmax_type arg)
  {
    msg_.xmax = std::move(arg);
    return Init_Bboxcenter_ymax(msg_);
  }

private:
  ::traffic_light_interfaces::msg::Bboxcenter msg_;
};

class Init_Bboxcenter_ymin
{
public:
  explicit Init_Bboxcenter_ymin(::traffic_light_interfaces::msg::Bboxcenter & msg)
  : msg_(msg)
  {}
  Init_Bboxcenter_xmax ymin(::traffic_light_interfaces::msg::Bboxcenter::_ymin_type arg)
  {
    msg_.ymin = std::move(arg);
    return Init_Bboxcenter_xmax(msg_);
  }

private:
  ::traffic_light_interfaces::msg::Bboxcenter msg_;
};

class Init_Bboxcenter_xmin
{
public:
  explicit Init_Bboxcenter_xmin(::traffic_light_interfaces::msg::Bboxcenter & msg)
  : msg_(msg)
  {}
  Init_Bboxcenter_ymin xmin(::traffic_light_interfaces::msg::Bboxcenter::_xmin_type arg)
  {
    msg_.xmin = std::move(arg);
    return Init_Bboxcenter_ymin(msg_);
  }

private:
  ::traffic_light_interfaces::msg::Bboxcenter msg_;
};

class Init_Bboxcenter_probability
{
public:
  Init_Bboxcenter_probability()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Bboxcenter_xmin probability(::traffic_light_interfaces::msg::Bboxcenter::_probability_type arg)
  {
    msg_.probability = std::move(arg);
    return Init_Bboxcenter_xmin(msg_);
  }

private:
  ::traffic_light_interfaces::msg::Bboxcenter msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::traffic_light_interfaces::msg::Bboxcenter>()
{
  return traffic_light_interfaces::msg::builder::Init_Bboxcenter_probability();
}

}  // namespace traffic_light_interfaces

#endif  // TRAFFIC_LIGHT_INTERFACES__MSG__DETAIL__BBOXCENTER__BUILDER_HPP_
