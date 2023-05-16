// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from traffic_light_interfaces:msg/BBoxCenter.idl
// generated code does not contain a copyright notice

#ifndef TRAFFIC_LIGHT_INTERFACES__MSG__DETAIL__B_BOX_CENTER__TRAITS_HPP_
#define TRAFFIC_LIGHT_INTERFACES__MSG__DETAIL__B_BOX_CENTER__TRAITS_HPP_

#include "traffic_light_interfaces/msg/detail/b_box_center__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<traffic_light_interfaces::msg::BBoxCenter>()
{
  return "traffic_light_interfaces::msg::BBoxCenter";
}

template<>
inline const char * name<traffic_light_interfaces::msg::BBoxCenter>()
{
  return "traffic_light_interfaces/msg/BBoxCenter";
}

template<>
struct has_fixed_size<traffic_light_interfaces::msg::BBoxCenter>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<traffic_light_interfaces::msg::BBoxCenter>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<traffic_light_interfaces::msg::BBoxCenter>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TRAFFIC_LIGHT_INTERFACES__MSG__DETAIL__B_BOX_CENTER__TRAITS_HPP_
