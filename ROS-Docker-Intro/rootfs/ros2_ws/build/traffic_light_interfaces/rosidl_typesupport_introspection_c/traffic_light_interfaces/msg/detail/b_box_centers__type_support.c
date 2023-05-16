// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from traffic_light_interfaces:msg/BBoxCenters.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "traffic_light_interfaces/msg/detail/b_box_centers__rosidl_typesupport_introspection_c.h"
#include "traffic_light_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "traffic_light_interfaces/msg/detail/b_box_centers__functions.h"
#include "traffic_light_interfaces/msg/detail/b_box_centers__struct.h"


// Include directives for member types
// Member `header`
// Member `image_header`
#include "traffic_light_interfaces/msg/header.h"
// Member `header`
// Member `image_header`
#include "traffic_light_interfaces/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `bbox_centers`
#include "traffic_light_interfaces/msg/b_box_center.h"
// Member `bbox_centers`
#include "traffic_light_interfaces/msg/detail/b_box_center__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void BBoxCenters__rosidl_typesupport_introspection_c__BBoxCenters_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  traffic_light_interfaces__msg__BBoxCenters__init(message_memory);
}

void BBoxCenters__rosidl_typesupport_introspection_c__BBoxCenters_fini_function(void * message_memory)
{
  traffic_light_interfaces__msg__BBoxCenters__fini(message_memory);
}

size_t BBoxCenters__rosidl_typesupport_introspection_c__size_function__BBoxCenter__bbox_centers(
  const void * untyped_member)
{
  const traffic_light_interfaces__msg__BBoxCenter__Sequence * member =
    (const traffic_light_interfaces__msg__BBoxCenter__Sequence *)(untyped_member);
  return member->size;
}

const void * BBoxCenters__rosidl_typesupport_introspection_c__get_const_function__BBoxCenter__bbox_centers(
  const void * untyped_member, size_t index)
{
  const traffic_light_interfaces__msg__BBoxCenter__Sequence * member =
    (const traffic_light_interfaces__msg__BBoxCenter__Sequence *)(untyped_member);
  return &member->data[index];
}

void * BBoxCenters__rosidl_typesupport_introspection_c__get_function__BBoxCenter__bbox_centers(
  void * untyped_member, size_t index)
{
  traffic_light_interfaces__msg__BBoxCenter__Sequence * member =
    (traffic_light_interfaces__msg__BBoxCenter__Sequence *)(untyped_member);
  return &member->data[index];
}

bool BBoxCenters__rosidl_typesupport_introspection_c__resize_function__BBoxCenter__bbox_centers(
  void * untyped_member, size_t size)
{
  traffic_light_interfaces__msg__BBoxCenter__Sequence * member =
    (traffic_light_interfaces__msg__BBoxCenter__Sequence *)(untyped_member);
  traffic_light_interfaces__msg__BBoxCenter__Sequence__fini(member);
  return traffic_light_interfaces__msg__BBoxCenter__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember BBoxCenters__rosidl_typesupport_introspection_c__BBoxCenters_message_member_array[3] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(traffic_light_interfaces__msg__BBoxCenters, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "image_header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(traffic_light_interfaces__msg__BBoxCenters, image_header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "bbox_centers",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(traffic_light_interfaces__msg__BBoxCenters, bbox_centers),  // bytes offset in struct
    NULL,  // default value
    BBoxCenters__rosidl_typesupport_introspection_c__size_function__BBoxCenter__bbox_centers,  // size() function pointer
    BBoxCenters__rosidl_typesupport_introspection_c__get_const_function__BBoxCenter__bbox_centers,  // get_const(index) function pointer
    BBoxCenters__rosidl_typesupport_introspection_c__get_function__BBoxCenter__bbox_centers,  // get(index) function pointer
    BBoxCenters__rosidl_typesupport_introspection_c__resize_function__BBoxCenter__bbox_centers  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers BBoxCenters__rosidl_typesupport_introspection_c__BBoxCenters_message_members = {
  "traffic_light_interfaces__msg",  // message namespace
  "BBoxCenters",  // message name
  3,  // number of fields
  sizeof(traffic_light_interfaces__msg__BBoxCenters),
  BBoxCenters__rosidl_typesupport_introspection_c__BBoxCenters_message_member_array,  // message members
  BBoxCenters__rosidl_typesupport_introspection_c__BBoxCenters_init_function,  // function to initialize message memory (memory has to be allocated)
  BBoxCenters__rosidl_typesupport_introspection_c__BBoxCenters_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t BBoxCenters__rosidl_typesupport_introspection_c__BBoxCenters_message_type_support_handle = {
  0,
  &BBoxCenters__rosidl_typesupport_introspection_c__BBoxCenters_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_traffic_light_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, traffic_light_interfaces, msg, BBoxCenters)() {
  BBoxCenters__rosidl_typesupport_introspection_c__BBoxCenters_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, traffic_light_interfaces, msg, Header)();
  BBoxCenters__rosidl_typesupport_introspection_c__BBoxCenters_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, traffic_light_interfaces, msg, Header)();
  BBoxCenters__rosidl_typesupport_introspection_c__BBoxCenters_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, traffic_light_interfaces, msg, BBoxCenter)();
  if (!BBoxCenters__rosidl_typesupport_introspection_c__BBoxCenters_message_type_support_handle.typesupport_identifier) {
    BBoxCenters__rosidl_typesupport_introspection_c__BBoxCenters_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &BBoxCenters__rosidl_typesupport_introspection_c__BBoxCenters_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
