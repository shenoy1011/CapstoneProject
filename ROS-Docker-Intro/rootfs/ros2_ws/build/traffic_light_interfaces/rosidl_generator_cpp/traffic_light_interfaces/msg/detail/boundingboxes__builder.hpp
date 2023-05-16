// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from traffic_light_interfaces:msg/Boundingboxes.idl
// generated code does not contain a copyright notice

#ifndef TRAFFIC_LIGHT_INTERFACES__MSG__DETAIL__BOUNDINGBOXES__BUILDER_HPP_
#define TRAFFIC_LIGHT_INTERFACES__MSG__DETAIL__BOUNDINGBOXES__BUILDER_HPP_

#include "traffic_light_interfaces/msg/detail/boundingboxes__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace traffic_light_interfaces
{

namespace msg
{

namespace builder
{

class Init_Boundingboxes_bounding_boxes
{
public:
  explicit Init_Boundingboxes_bounding_boxes(::traffic_light_interfaces::msg::Boundingboxes & msg)
  : msg_(msg)
  {}
  ::traffic_light_interfaces::msg::Boundingboxes bounding_boxes(::traffic_light_interfaces::msg::Boundingboxes::_bounding_boxes_type arg)
  {
    msg_.bounding_boxes = std::move(arg);
    return std::move(msg_);
  }

private:
  ::traffic_light_interfaces::msg::Boundingboxes msg_;
};

class Init_Boundingboxes_image_header
{
public:
  explicit Init_Boundingboxes_image_header(::traffic_light_interfaces::msg::Boundingboxes & msg)
  : msg_(msg)
  {}
  Init_Boundingboxes_bounding_boxes image_header(::traffic_light_interfaces::msg::Boundingboxes::_image_header_type arg)
  {
    msg_.image_header = std::move(arg);
    return Init_Boundingboxes_bounding_boxes(msg_);
  }

private:
  ::traffic_light_interfaces::msg::Boundingboxes msg_;
};

class Init_Boundingboxes_header
{
public:
  Init_Boundingboxes_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Boundingboxes_image_header header(::traffic_light_interfaces::msg::Boundingboxes::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Boundingboxes_image_header(msg_);
  }

private:
  ::traffic_light_interfaces::msg::Boundingboxes msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::traffic_light_interfaces::msg::Boundingboxes>()
{
  return traffic_light_interfaces::msg::builder::Init_Boundingboxes_header();
}

}  // namespace traffic_light_interfaces

#endif  // TRAFFIC_LIGHT_INTERFACES__MSG__DETAIL__BOUNDINGBOXES__BUILDER_HPP_
