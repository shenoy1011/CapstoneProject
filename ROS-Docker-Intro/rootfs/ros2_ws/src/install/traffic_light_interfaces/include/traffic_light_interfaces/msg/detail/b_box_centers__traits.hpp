// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from traffic_light_interfaces:msg/BBoxCenters.idl
// generated code does not contain a copyright notice

#ifndef TRAFFIC_LIGHT_INTERFACES__MSG__DETAIL__B_BOX_CENTERS__TRAITS_HPP_
#define TRAFFIC_LIGHT_INTERFACES__MSG__DETAIL__B_BOX_CENTERS__TRAITS_HPP_

#include "traffic_light_interfaces/msg/detail/b_box_centers__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
// Member 'image_header'
#include "traffic_light_interfaces/msg/detail/header__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<traffic_light_interfaces::msg::BBoxCenters>()
{
  return "traffic_light_interfaces::msg::BBoxCenters";
}

template<>
inline const char * name<traffic_light_interfaces::msg::BBoxCenters>()
{
  return "traffic_light_interfaces/msg/BBoxCenters";
}

template<>
struct has_fixed_size<traffic_light_interfaces::msg::BBoxCenters>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<traffic_light_interfaces::msg::BBoxCenters>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<traffic_light_interfaces::msg::BBoxCenters>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TRAFFIC_LIGHT_INTERFACES__MSG__DETAIL__B_BOX_CENTERS__TRAITS_HPP_
