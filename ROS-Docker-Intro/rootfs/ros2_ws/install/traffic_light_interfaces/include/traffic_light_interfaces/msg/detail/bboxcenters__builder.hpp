// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from traffic_light_interfaces:msg/Bboxcenters.idl
// generated code does not contain a copyright notice

#ifndef TRAFFIC_LIGHT_INTERFACES__MSG__DETAIL__BBOXCENTERS__BUILDER_HPP_
#define TRAFFIC_LIGHT_INTERFACES__MSG__DETAIL__BBOXCENTERS__BUILDER_HPP_

#include "traffic_light_interfaces/msg/detail/bboxcenters__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace traffic_light_interfaces
{

namespace msg
{

namespace builder
{

class Init_Bboxcenters_bbox_centers
{
public:
  explicit Init_Bboxcenters_bbox_centers(::traffic_light_interfaces::msg::Bboxcenters & msg)
  : msg_(msg)
  {}
  ::traffic_light_interfaces::msg::Bboxcenters bbox_centers(::traffic_light_interfaces::msg::Bboxcenters::_bbox_centers_type arg)
  {
    msg_.bbox_centers = std::move(arg);
    return std::move(msg_);
  }

private:
  ::traffic_light_interfaces::msg::Bboxcenters msg_;
};

class Init_Bboxcenters_image_header
{
public:
  explicit Init_Bboxcenters_image_header(::traffic_light_interfaces::msg::Bboxcenters & msg)
  : msg_(msg)
  {}
  Init_Bboxcenters_bbox_centers image_header(::traffic_light_interfaces::msg::Bboxcenters::_image_header_type arg)
  {
    msg_.image_header = std::move(arg);
    return Init_Bboxcenters_bbox_centers(msg_);
  }

private:
  ::traffic_light_interfaces::msg::Bboxcenters msg_;
};

class Init_Bboxcenters_header
{
public:
  Init_Bboxcenters_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Bboxcenters_image_header header(::traffic_light_interfaces::msg::Bboxcenters::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Bboxcenters_image_header(msg_);
  }

private:
  ::traffic_light_interfaces::msg::Bboxcenters msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::traffic_light_interfaces::msg::Bboxcenters>()
{
  return traffic_light_interfaces::msg::builder::Init_Bboxcenters_header();
}

}  // namespace traffic_light_interfaces

#endif  // TRAFFIC_LIGHT_INTERFACES__MSG__DETAIL__BBOXCENTERS__BUILDER_HPP_
