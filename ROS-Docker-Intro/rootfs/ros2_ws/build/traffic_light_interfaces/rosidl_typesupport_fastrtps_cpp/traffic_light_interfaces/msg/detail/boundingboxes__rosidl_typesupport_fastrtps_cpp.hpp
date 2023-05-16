// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from traffic_light_interfaces:msg/Boundingboxes.idl
// generated code does not contain a copyright notice

#ifndef TRAFFIC_LIGHT_INTERFACES__MSG__DETAIL__BOUNDINGBOXES__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define TRAFFIC_LIGHT_INTERFACES__MSG__DETAIL__BOUNDINGBOXES__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "traffic_light_interfaces/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "traffic_light_interfaces/msg/detail/boundingboxes__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace traffic_light_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_traffic_light_interfaces
cdr_serialize(
  const traffic_light_interfaces::msg::Boundingboxes & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_traffic_light_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  traffic_light_interfaces::msg::Boundingboxes & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_traffic_light_interfaces
get_serialized_size(
  const traffic_light_interfaces::msg::Boundingboxes & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_traffic_light_interfaces
max_serialized_size_Boundingboxes(
  bool & full_bounded,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace traffic_light_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_traffic_light_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, traffic_light_interfaces, msg, Boundingboxes)();

#ifdef __cplusplus
}
#endif

#endif  // TRAFFIC_LIGHT_INTERFACES__MSG__DETAIL__BOUNDINGBOXES__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
