// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from traffic_light_interfaces:msg/Boundingbox.idl
// generated code does not contain a copyright notice

#ifndef TRAFFIC_LIGHT_INTERFACES__MSG__DETAIL__BOUNDINGBOX__BUILDER_HPP_
#define TRAFFIC_LIGHT_INTERFACES__MSG__DETAIL__BOUNDINGBOX__BUILDER_HPP_

#include "traffic_light_interfaces/msg/detail/boundingbox__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace traffic_light_interfaces
{

namespace msg
{

namespace builder
{

class Init_Boundingbox_type
{
public:
  explicit Init_Boundingbox_type(::traffic_light_interfaces::msg::Boundingbox & msg)
  : msg_(msg)
  {}
  ::traffic_light_interfaces::msg::Boundingbox type(::traffic_light_interfaces::msg::Boundingbox::_type_type arg)
  {
    msg_.type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::traffic_light_interfaces::msg::Boundingbox msg_;
};

class Init_Boundingbox_id
{
public:
  explicit Init_Boundingbox_id(::traffic_light_interfaces::msg::Boundingbox & msg)
  : msg_(msg)
  {}
  Init_Boundingbox_type id(::traffic_light_interfaces::msg::Boundingbox::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_Boundingbox_type(msg_);
  }

private:
  ::traffic_light_interfaces::msg::Boundingbox msg_;
};

class Init_Boundingbox_ymax
{
public:
  explicit Init_Boundingbox_ymax(::traffic_light_interfaces::msg::Boundingbox & msg)
  : msg_(msg)
  {}
  Init_Boundingbox_id ymax(::traffic_light_interfaces::msg::Boundingbox::_ymax_type arg)
  {
    msg_.ymax = std::move(arg);
    return Init_Boundingbox_id(msg_);
  }

private:
  ::traffic_light_interfaces::msg::Boundingbox msg_;
};

class Init_Boundingbox_xmax
{
public:
  explicit Init_Boundingbox_xmax(::traffic_light_interfaces::msg::Boundingbox & msg)
  : msg_(msg)
  {}
  Init_Boundingbox_ymax xmax(::traffic_light_interfaces::msg::Boundingbox::_xmax_type arg)
  {
    msg_.xmax = std::move(arg);
    return Init_Boundingbox_ymax(msg_);
  }

private:
  ::traffic_light_interfaces::msg::Boundingbox msg_;
};

class Init_Boundingbox_ymin
{
public:
  explicit Init_Boundingbox_ymin(::traffic_light_interfaces::msg::Boundingbox & msg)
  : msg_(msg)
  {}
  Init_Boundingbox_xmax ymin(::traffic_light_interfaces::msg::Boundingbox::_ymin_type arg)
  {
    msg_.ymin = std::move(arg);
    return Init_Boundingbox_xmax(msg_);
  }

private:
  ::traffic_light_interfaces::msg::Boundingbox msg_;
};

class Init_Boundingbox_xmin
{
public:
  explicit Init_Boundingbox_xmin(::traffic_light_interfaces::msg::Boundingbox & msg)
  : msg_(msg)
  {}
  Init_Boundingbox_ymin xmin(::traffic_light_interfaces::msg::Boundingbox::_xmin_type arg)
  {
    msg_.xmin = std::move(arg);
    return Init_Boundingbox_ymin(msg_);
  }

private:
  ::traffic_light_interfaces::msg::Boundingbox msg_;
};

class Init_Boundingbox_probability
{
public:
  Init_Boundingbox_probability()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Boundingbox_xmin probability(::traffic_light_interfaces::msg::Boundingbox::_probability_type arg)
  {
    msg_.probability = std::move(arg);
    return Init_Boundingbox_xmin(msg_);
  }

private:
  ::traffic_light_interfaces::msg::Boundingbox msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::traffic_light_interfaces::msg::Boundingbox>()
{
  return traffic_light_interfaces::msg::builder::Init_Boundingbox_probability();
}

}  // namespace traffic_light_interfaces

#endif  // TRAFFIC_LIGHT_INTERFACES__MSG__DETAIL__BOUNDINGBOX__BUILDER_HPP_
