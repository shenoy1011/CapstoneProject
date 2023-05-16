// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from traffic_light_interfaces:msg/BBoxCenters.idl
// generated code does not contain a copyright notice

#ifndef TRAFFIC_LIGHT_INTERFACES__MSG__DETAIL__B_BOX_CENTERS__BUILDER_HPP_
#define TRAFFIC_LIGHT_INTERFACES__MSG__DETAIL__B_BOX_CENTERS__BUILDER_HPP_

#include "traffic_light_interfaces/msg/detail/b_box_centers__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace traffic_light_interfaces
{

namespace msg
{

namespace builder
{

class Init_BBoxCenters_bbox_centers
{
public:
  explicit Init_BBoxCenters_bbox_centers(::traffic_light_interfaces::msg::BBoxCenters & msg)
  : msg_(msg)
  {}
  ::traffic_light_interfaces::msg::BBoxCenters bbox_centers(::traffic_light_interfaces::msg::BBoxCenters::_bbox_centers_type arg)
  {
    msg_.bbox_centers = std::move(arg);
    return std::move(msg_);
  }

private:
  ::traffic_light_interfaces::msg::BBoxCenters msg_;
};

class Init_BBoxCenters_image_header
{
public:
  explicit Init_BBoxCenters_image_header(::traffic_light_interfaces::msg::BBoxCenters & msg)
  : msg_(msg)
  {}
  Init_BBoxCenters_bbox_centers image_header(::traffic_light_interfaces::msg::BBoxCenters::_image_header_type arg)
  {
    msg_.image_header = std::move(arg);
    return Init_BBoxCenters_bbox_centers(msg_);
  }

private:
  ::traffic_light_interfaces::msg::BBoxCenters msg_;
};

class Init_BBoxCenters_header
{
public:
  Init_BBoxCenters_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BBoxCenters_image_header header(::traffic_light_interfaces::msg::BBoxCenters::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_BBoxCenters_image_header(msg_);
  }

private:
  ::traffic_light_interfaces::msg::BBoxCenters msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::traffic_light_interfaces::msg::BBoxCenters>()
{
  return traffic_light_interfaces::msg::builder::Init_BBoxCenters_header();
}

}  // namespace traffic_light_interfaces

#endif  // TRAFFIC_LIGHT_INTERFACES__MSG__DETAIL__B_BOX_CENTERS__BUILDER_HPP_
