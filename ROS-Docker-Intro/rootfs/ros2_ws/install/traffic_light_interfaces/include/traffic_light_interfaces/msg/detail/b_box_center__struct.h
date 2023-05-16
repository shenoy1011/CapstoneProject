// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from traffic_light_interfaces:msg/BBoxCenter.idl
// generated code does not contain a copyright notice

#ifndef TRAFFIC_LIGHT_INTERFACES__MSG__DETAIL__B_BOX_CENTER__STRUCT_H_
#define TRAFFIC_LIGHT_INTERFACES__MSG__DETAIL__B_BOX_CENTER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'type'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in msg/BBoxCenter in the package traffic_light_interfaces.
typedef struct traffic_light_interfaces__msg__BBoxCenter
{
  double probability;
  int64_t xmin;
  int64_t ymin;
  int64_t xmax;
  int64_t ymax;
  double center_x;
  double center_y;
  double center_z;
  int16_t id;
  rosidl_runtime_c__int16__Sequence type;
} traffic_light_interfaces__msg__BBoxCenter;

// Struct for a sequence of traffic_light_interfaces__msg__BBoxCenter.
typedef struct traffic_light_interfaces__msg__BBoxCenter__Sequence
{
  traffic_light_interfaces__msg__BBoxCenter * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} traffic_light_interfaces__msg__BBoxCenter__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TRAFFIC_LIGHT_INTERFACES__MSG__DETAIL__B_BOX_CENTER__STRUCT_H_
