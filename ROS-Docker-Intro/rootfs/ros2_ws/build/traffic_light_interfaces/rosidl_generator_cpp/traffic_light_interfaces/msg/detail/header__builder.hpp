// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from traffic_light_interfaces:msg/Header.idl
// generated code does not contain a copyright notice

#ifndef TRAFFIC_LIGHT_INTERFACES__MSG__DETAIL__HEADER__BUILDER_HPP_
#define TRAFFIC_LIGHT_INTERFACES__MSG__DETAIL__HEADER__BUILDER_HPP_

#include "traffic_light_interfaces/msg/detail/header__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace traffic_light_interfaces
{

namespace msg
{

namespace builder
{

class Init_Header_frame_id
{
public:
  explicit Init_Header_frame_id(::traffic_light_interfaces::msg::Header & msg)
  : msg_(msg)
  {}
  ::traffic_light_interfaces::msg::Header frame_id(::traffic_light_interfaces::msg::Header::_frame_id_type arg)
  {
    msg_.frame_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::traffic_light_interfaces::msg::Header msg_;
};

class Init_Header_stamp
{
public:
  Init_Header_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Header_frame_id stamp(::traffic_light_interfaces::msg::Header::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_Header_frame_id(msg_);
  }

private:
  ::traffic_light_interfaces::msg::Header msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::traffic_light_interfaces::msg::Header>()
{
  return traffic_light_interfaces::msg::builder::Init_Header_stamp();
}

}  // namespace traffic_light_interfaces

#endif  // TRAFFIC_LIGHT_INTERFACES__MSG__DETAIL__HEADER__BUILDER_HPP_
