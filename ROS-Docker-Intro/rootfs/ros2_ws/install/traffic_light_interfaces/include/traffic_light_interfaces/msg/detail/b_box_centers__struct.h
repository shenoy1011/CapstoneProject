// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from traffic_light_interfaces:msg/BBoxCenters.idl
// generated code does not contain a copyright notice

#ifndef TRAFFIC_LIGHT_INTERFACES__MSG__DETAIL__B_BOX_CENTERS__STRUCT_H_
#define TRAFFIC_LIGHT_INTERFACES__MSG__DETAIL__B_BOX_CENTERS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
// Member 'image_header'
#include "traffic_light_interfaces/msg/detail/header__struct.h"
// Member 'bbox_centers'
#include "traffic_light_interfaces/msg/detail/b_box_center__struct.h"

// Struct defined in msg/BBoxCenters in the package traffic_light_interfaces.
typedef struct traffic_light_interfaces__msg__BBoxCenters
{
  traffic_light_interfaces__msg__Header header;
  traffic_light_interfaces__msg__Header image_header;
  traffic_light_interfaces__msg__BBoxCenter__Sequence bbox_centers;
} traffic_light_interfaces__msg__BBoxCenters;

// Struct for a sequence of traffic_light_interfaces__msg__BBoxCenters.
typedef struct traffic_light_interfaces__msg__BBoxCenters__Sequence
{
  traffic_light_interfaces__msg__BBoxCenters * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} traffic_light_interfaces__msg__BBoxCenters__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TRAFFIC_LIGHT_INTERFACES__MSG__DETAIL__B_BOX_CENTERS__STRUCT_H_
