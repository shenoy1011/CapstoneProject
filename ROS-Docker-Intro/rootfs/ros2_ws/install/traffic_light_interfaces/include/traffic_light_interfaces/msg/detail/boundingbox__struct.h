// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from traffic_light_interfaces:msg/Boundingbox.idl
// generated code does not contain a copyright notice

#ifndef TRAFFIC_LIGHT_INTERFACES__MSG__DETAIL__BOUNDINGBOX__STRUCT_H_
#define TRAFFIC_LIGHT_INTERFACES__MSG__DETAIL__BOUNDINGBOX__STRUCT_H_

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

// Struct defined in msg/Boundingbox in the package traffic_light_interfaces.
typedef struct traffic_light_interfaces__msg__Boundingbox
{
  double probability;
  int64_t xmin;
  int64_t ymin;
  int64_t xmax;
  int64_t ymax;
  int16_t id;
  rosidl_runtime_c__int16__Sequence type;
} traffic_light_interfaces__msg__Boundingbox;

// Struct for a sequence of traffic_light_interfaces__msg__Boundingbox.
typedef struct traffic_light_interfaces__msg__Boundingbox__Sequence
{
  traffic_light_interfaces__msg__Boundingbox * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} traffic_light_interfaces__msg__Boundingbox__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TRAFFIC_LIGHT_INTERFACES__MSG__DETAIL__BOUNDINGBOX__STRUCT_H_
