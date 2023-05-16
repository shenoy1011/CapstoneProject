// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from traffic_light_interfaces:msg/Boundingboxes.idl
// generated code does not contain a copyright notice

#ifndef TRAFFIC_LIGHT_INTERFACES__MSG__DETAIL__BOUNDINGBOXES__STRUCT_H_
#define TRAFFIC_LIGHT_INTERFACES__MSG__DETAIL__BOUNDINGBOXES__STRUCT_H_

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
// Member 'bounding_boxes'
#include "traffic_light_interfaces/msg/detail/bounding_box__struct.h"

// Struct defined in msg/Boundingboxes in the package traffic_light_interfaces.
typedef struct traffic_light_interfaces__msg__Boundingboxes
{
  traffic_light_interfaces__msg__Header header;
  traffic_light_interfaces__msg__Header image_header;
  traffic_light_interfaces__msg__BoundingBox__Sequence bounding_boxes;
} traffic_light_interfaces__msg__Boundingboxes;

// Struct for a sequence of traffic_light_interfaces__msg__Boundingboxes.
typedef struct traffic_light_interfaces__msg__Boundingboxes__Sequence
{
  traffic_light_interfaces__msg__Boundingboxes * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} traffic_light_interfaces__msg__Boundingboxes__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TRAFFIC_LIGHT_INTERFACES__MSG__DETAIL__BOUNDINGBOXES__STRUCT_H_
