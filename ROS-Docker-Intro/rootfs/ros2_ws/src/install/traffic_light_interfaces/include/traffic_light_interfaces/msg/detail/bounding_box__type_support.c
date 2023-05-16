// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from traffic_light_interfaces:msg/BoundingBox.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "traffic_light_interfaces/msg/detail/bounding_box__rosidl_typesupport_introspection_c.h"
#include "traffic_light_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "traffic_light_interfaces/msg/detail/bounding_box__functions.h"
#include "traffic_light_interfaces/msg/detail/bounding_box__struct.h"


// Include directives for member types
// Member `signaltype`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void BoundingBox__rosidl_typesupport_introspection_c__BoundingBox_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  traffic_light_interfaces__msg__BoundingBox__init(message_memory);
}

void BoundingBox__rosidl_typesupport_introspection_c__BoundingBox_fini_function(void * message_memory)
{
  traffic_light_interfaces__msg__BoundingBox__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember BoundingBox__rosidl_typesupport_introspection_c__BoundingBox_message_member_array[7] = {
  {
    "probability",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(traffic_light_interfaces__msg__BoundingBox, probability),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "xmin",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(traffic_light_interfaces__msg__BoundingBox, xmin),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ymin",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(traffic_light_interfaces__msg__BoundingBox, ymin),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "xmax",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(traffic_light_interfaces__msg__BoundingBox, xmax),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ymax",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(traffic_light_interfaces__msg__BoundingBox, ymax),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(traffic_light_interfaces__msg__BoundingBox, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "signaltype",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(traffic_light_interfaces__msg__BoundingBox, signaltype),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers BoundingBox__rosidl_typesupport_introspection_c__BoundingBox_message_members = {
  "traffic_light_interfaces__msg",  // message namespace
  "BoundingBox",  // message name
  7,  // number of fields
  sizeof(traffic_light_interfaces__msg__BoundingBox),
  BoundingBox__rosidl_typesupport_introspection_c__BoundingBox_message_member_array,  // message members
  BoundingBox__rosidl_typesupport_introspection_c__BoundingBox_init_function,  // function to initialize message memory (memory has to be allocated)
  BoundingBox__rosidl_typesupport_introspection_c__BoundingBox_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t BoundingBox__rosidl_typesupport_introspection_c__BoundingBox_message_type_support_handle = {
  0,
  &BoundingBox__rosidl_typesupport_introspection_c__BoundingBox_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_traffic_light_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, traffic_light_interfaces, msg, BoundingBox)() {
  if (!BoundingBox__rosidl_typesupport_introspection_c__BoundingBox_message_type_support_handle.typesupport_identifier) {
    BoundingBox__rosidl_typesupport_introspection_c__BoundingBox_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &BoundingBox__rosidl_typesupport_introspection_c__BoundingBox_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
