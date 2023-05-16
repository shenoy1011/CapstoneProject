// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from traffic_light_interfaces:msg/Bboxcenters.idl
// generated code does not contain a copyright notice
#include "traffic_light_interfaces/msg/detail/bboxcenters__rosidl_typesupport_fastrtps_cpp.hpp"
#include "traffic_light_interfaces/msg/detail/bboxcenters__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace traffic_light_interfaces
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const traffic_light_interfaces::msg::Header &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  traffic_light_interfaces::msg::Header &);
size_t get_serialized_size(
  const traffic_light_interfaces::msg::Header &,
  size_t current_alignment);
size_t
max_serialized_size_Header(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace traffic_light_interfaces

namespace traffic_light_interfaces
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const traffic_light_interfaces::msg::Header &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  traffic_light_interfaces::msg::Header &);
size_t get_serialized_size(
  const traffic_light_interfaces::msg::Header &,
  size_t current_alignment);
size_t
max_serialized_size_Header(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace traffic_light_interfaces

namespace traffic_light_interfaces
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const traffic_light_interfaces::msg::BBoxCenter &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  traffic_light_interfaces::msg::BBoxCenter &);
size_t get_serialized_size(
  const traffic_light_interfaces::msg::BBoxCenter &,
  size_t current_alignment);
size_t
max_serialized_size_BBoxCenter(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace traffic_light_interfaces


namespace traffic_light_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_traffic_light_interfaces
cdr_serialize(
  const traffic_light_interfaces::msg::Bboxcenters & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  traffic_light_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: image_header
  traffic_light_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.image_header,
    cdr);
  // Member: bbox_centers
  {
    size_t size = ros_message.bbox_centers.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      traffic_light_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.bbox_centers[i],
        cdr);
    }
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_traffic_light_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  traffic_light_interfaces::msg::Bboxcenters & ros_message)
{
  // Member: header
  traffic_light_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: image_header
  traffic_light_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.image_header);

  // Member: bbox_centers
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.bbox_centers.resize(size);
    for (size_t i = 0; i < size; i++) {
      traffic_light_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.bbox_centers[i]);
    }
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_traffic_light_interfaces
get_serialized_size(
  const traffic_light_interfaces::msg::Bboxcenters & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: header

  current_alignment +=
    traffic_light_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.header, current_alignment);
  // Member: image_header

  current_alignment +=
    traffic_light_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.image_header, current_alignment);
  // Member: bbox_centers
  {
    size_t array_size = ros_message.bbox_centers.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        traffic_light_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.bbox_centers[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_traffic_light_interfaces
max_serialized_size_Bboxcenters(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: header
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        traffic_light_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_Header(
        full_bounded, current_alignment);
    }
  }

  // Member: image_header
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        traffic_light_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_Header(
        full_bounded, current_alignment);
    }
  }

  // Member: bbox_centers
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        traffic_light_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_BBoxCenter(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _Bboxcenters__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const traffic_light_interfaces::msg::Bboxcenters *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Bboxcenters__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<traffic_light_interfaces::msg::Bboxcenters *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Bboxcenters__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const traffic_light_interfaces::msg::Bboxcenters *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Bboxcenters__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_Bboxcenters(full_bounded, 0);
}

static message_type_support_callbacks_t _Bboxcenters__callbacks = {
  "traffic_light_interfaces::msg",
  "Bboxcenters",
  _Bboxcenters__cdr_serialize,
  _Bboxcenters__cdr_deserialize,
  _Bboxcenters__get_serialized_size,
  _Bboxcenters__max_serialized_size
};

static rosidl_message_type_support_t _Bboxcenters__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Bboxcenters__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace traffic_light_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_traffic_light_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<traffic_light_interfaces::msg::Bboxcenters>()
{
  return &traffic_light_interfaces::msg::typesupport_fastrtps_cpp::_Bboxcenters__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, traffic_light_interfaces, msg, Bboxcenters)() {
  return &traffic_light_interfaces::msg::typesupport_fastrtps_cpp::_Bboxcenters__handle;
}

#ifdef __cplusplus
}
#endif