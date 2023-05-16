// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from traffic_light_interfaces:msg/BBoxCenter.idl
// generated code does not contain a copyright notice

#ifndef TRAFFIC_LIGHT_INTERFACES__MSG__DETAIL__B_BOX_CENTER__BUILDER_HPP_
#define TRAFFIC_LIGHT_INTERFACES__MSG__DETAIL__B_BOX_CENTER__BUILDER_HPP_

#include "traffic_light_interfaces/msg/detail/b_box_center__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace traffic_light_interfaces
{

namespace msg
{

namespace builder
{

class Init_BBoxCenter_type
{
public:
  explicit Init_BBoxCenter_type(::traffic_light_interfaces::msg::BBoxCenter & msg)
  : msg_(msg)
  {}
  ::traffic_light_interfaces::msg::BBoxCenter type(::traffic_light_interfaces::msg::BBoxCenter::_type_type arg)
  {
    msg_.type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::traffic_light_interfaces::msg::BBoxCenter msg_;
};

class Init_BBoxCenter_id
{
public:
  explicit Init_BBoxCenter_id(::traffic_light_interfaces::msg::BBoxCenter & msg)
  : msg_(msg)
  {}
  Init_BBoxCenter_type id(::traffic_light_interfaces::msg::BBoxCenter::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_BBoxCenter_type(msg_);
  }

private:
  ::traffic_light_interfaces::msg::BBoxCenter msg_;
};

class Init_BBoxCenter_center_z
{
public:
  explicit Init_BBoxCenter_center_z(::traffic_light_interfaces::msg::BBoxCenter & msg)
  : msg_(msg)
  {}
  Init_BBoxCenter_id center_z(::traffic_light_interfaces::msg::BBoxCenter::_center_z_type arg)
  {
    msg_.center_z = std::move(arg);
    return Init_BBoxCenter_id(msg_);
  }

private:
  ::traffic_light_interfaces::msg::BBoxCenter msg_;
};

class Init_BBoxCenter_center_y
{
public:
  explicit Init_BBoxCenter_center_y(::traffic_light_interfaces::msg::BBoxCenter & msg)
  : msg_(msg)
  {}
  Init_BBoxCenter_center_z center_y(::traffic_light_interfaces::msg::BBoxCenter::_center_y_type arg)
  {
    msg_.center_y = std::move(arg);
    return Init_BBoxCenter_center_z(msg_);
  }

private:
  ::traffic_light_interfaces::msg::BBoxCenter msg_;
};

class Init_BBoxCenter_center_x
{
public:
  explicit Init_BBoxCenter_center_x(::traffic_light_interfaces::msg::BBoxCenter & msg)
  : msg_(msg)
  {}
  Init_BBoxCenter_center_y center_x(::traffic_light_interfaces::msg::BBoxCenter::_center_x_type arg)
  {
    msg_.center_x = std::move(arg);
    return Init_BBoxCenter_center_y(msg_);
  }

private:
  ::traffic_light_interfaces::msg::BBoxCenter msg_;
};

class Init_BBoxCenter_ymax
{
public:
  explicit Init_BBoxCenter_ymax(::traffic_light_interfaces::msg::BBoxCenter & msg)
  : msg_(msg)
  {}
  Init_BBoxCenter_center_x ymax(::traffic_light_interfaces::msg::BBoxCenter::_ymax_type arg)
  {
    msg_.ymax = std::move(arg);
    return Init_BBoxCenter_center_x(msg_);
  }

private:
  ::traffic_light_interfaces::msg::BBoxCenter msg_;
};

class Init_BBoxCenter_xmax
{
public:
  explicit Init_BBoxCenter_xmax(::traffic_light_interfaces::msg::BBoxCenter & msg)
  : msg_(msg)
  {}
  Init_BBoxCenter_ymax xmax(::traffic_light_interfaces::msg::BBoxCenter::_xmax_type arg)
  {
    msg_.xmax = std::move(arg);
    return Init_BBoxCenter_ymax(msg_);
  }

private:
  ::traffic_light_interfaces::msg::BBoxCenter msg_;
};

class Init_BBoxCenter_ymin
{
public:
  explicit Init_BBoxCenter_ymin(::traffic_light_interfaces::msg::BBoxCenter & msg)
  : msg_(msg)
  {}
  Init_BBoxCenter_xmax ymin(::traffic_light_interfaces::msg::BBoxCenter::_ymin_type arg)
  {
    msg_.ymin = std::move(arg);
    return Init_BBoxCenter_xmax(msg_);
  }

private:
  ::traffic_light_interfaces::msg::BBoxCenter msg_;
};

class Init_BBoxCenter_xmin
{
public:
  explicit Init_BBoxCenter_xmin(::traffic_light_interfaces::msg::BBoxCenter & msg)
  : msg_(msg)
  {}
  Init_BBoxCenter_ymin xmin(::traffic_light_interfaces::msg::BBoxCenter::_xmin_type arg)
  {
    msg_.xmin = std::move(arg);
    return Init_BBoxCenter_ymin(msg_);
  }

private:
  ::traffic_light_interfaces::msg::BBoxCenter msg_;
};

class Init_BBoxCenter_probability
{
public:
  Init_BBoxCenter_probability()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BBoxCenter_xmin probability(::traffic_light_interfaces::msg::BBoxCenter::_probability_type arg)
  {
    msg_.probability = std::move(arg);
    return Init_BBoxCenter_xmin(msg_);
  }

private:
  ::traffic_light_interfaces::msg::BBoxCenter msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::traffic_light_interfaces::msg::BBoxCenter>()
{
  return traffic_light_interfaces::msg::builder::Init_BBoxCenter_probability();
}

}  // namespace traffic_light_interfaces

#endif  // TRAFFIC_LIGHT_INTERFACES__MSG__DETAIL__B_BOX_CENTER__BUILDER_HPP_
