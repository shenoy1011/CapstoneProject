// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from traffic_light_interfaces:msg/Boundingboxes.idl
// generated code does not contain a copyright notice
#include "traffic_light_interfaces/msg/detail/boundingboxes__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
// Member `image_header`
#include "traffic_light_interfaces/msg/detail/header__functions.h"
// Member `bounding_boxes`
#include "traffic_light_interfaces/msg/detail/bounding_box__functions.h"

bool
traffic_light_interfaces__msg__Boundingboxes__init(traffic_light_interfaces__msg__Boundingboxes * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!traffic_light_interfaces__msg__Header__init(&msg->header)) {
    traffic_light_interfaces__msg__Boundingboxes__fini(msg);
    return false;
  }
  // image_header
  if (!traffic_light_interfaces__msg__Header__init(&msg->image_header)) {
    traffic_light_interfaces__msg__Boundingboxes__fini(msg);
    return false;
  }
  // bounding_boxes
  if (!traffic_light_interfaces__msg__BoundingBox__Sequence__init(&msg->bounding_boxes, 0)) {
    traffic_light_interfaces__msg__Boundingboxes__fini(msg);
    return false;
  }
  return true;
}

void
traffic_light_interfaces__msg__Boundingboxes__fini(traffic_light_interfaces__msg__Boundingboxes * msg)
{
  if (!msg) {
    return;
  }
  // header
  traffic_light_interfaces__msg__Header__fini(&msg->header);
  // image_header
  traffic_light_interfaces__msg__Header__fini(&msg->image_header);
  // bounding_boxes
  traffic_light_interfaces__msg__BoundingBox__Sequence__fini(&msg->bounding_boxes);
}

bool
traffic_light_interfaces__msg__Boundingboxes__are_equal(const traffic_light_interfaces__msg__Boundingboxes * lhs, const traffic_light_interfaces__msg__Boundingboxes * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!traffic_light_interfaces__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // image_header
  if (!traffic_light_interfaces__msg__Header__are_equal(
      &(lhs->image_header), &(rhs->image_header)))
  {
    return false;
  }
  // bounding_boxes
  if (!traffic_light_interfaces__msg__BoundingBox__Sequence__are_equal(
      &(lhs->bounding_boxes), &(rhs->bounding_boxes)))
  {
    return false;
  }
  return true;
}

bool
traffic_light_interfaces__msg__Boundingboxes__copy(
  const traffic_light_interfaces__msg__Boundingboxes * input,
  traffic_light_interfaces__msg__Boundingboxes * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!traffic_light_interfaces__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // image_header
  if (!traffic_light_interfaces__msg__Header__copy(
      &(input->image_header), &(output->image_header)))
  {
    return false;
  }
  // bounding_boxes
  if (!traffic_light_interfaces__msg__BoundingBox__Sequence__copy(
      &(input->bounding_boxes), &(output->bounding_boxes)))
  {
    return false;
  }
  return true;
}

traffic_light_interfaces__msg__Boundingboxes *
traffic_light_interfaces__msg__Boundingboxes__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  traffic_light_interfaces__msg__Boundingboxes * msg = (traffic_light_interfaces__msg__Boundingboxes *)allocator.allocate(sizeof(traffic_light_interfaces__msg__Boundingboxes), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(traffic_light_interfaces__msg__Boundingboxes));
  bool success = traffic_light_interfaces__msg__Boundingboxes__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
traffic_light_interfaces__msg__Boundingboxes__destroy(traffic_light_interfaces__msg__Boundingboxes * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    traffic_light_interfaces__msg__Boundingboxes__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
traffic_light_interfaces__msg__Boundingboxes__Sequence__init(traffic_light_interfaces__msg__Boundingboxes__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  traffic_light_interfaces__msg__Boundingboxes * data = NULL;

  if (size) {
    data = (traffic_light_interfaces__msg__Boundingboxes *)allocator.zero_allocate(size, sizeof(traffic_light_interfaces__msg__Boundingboxes), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = traffic_light_interfaces__msg__Boundingboxes__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        traffic_light_interfaces__msg__Boundingboxes__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
traffic_light_interfaces__msg__Boundingboxes__Sequence__fini(traffic_light_interfaces__msg__Boundingboxes__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      traffic_light_interfaces__msg__Boundingboxes__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

traffic_light_interfaces__msg__Boundingboxes__Sequence *
traffic_light_interfaces__msg__Boundingboxes__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  traffic_light_interfaces__msg__Boundingboxes__Sequence * array = (traffic_light_interfaces__msg__Boundingboxes__Sequence *)allocator.allocate(sizeof(traffic_light_interfaces__msg__Boundingboxes__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = traffic_light_interfaces__msg__Boundingboxes__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
traffic_light_interfaces__msg__Boundingboxes__Sequence__destroy(traffic_light_interfaces__msg__Boundingboxes__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    traffic_light_interfaces__msg__Boundingboxes__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
traffic_light_interfaces__msg__Boundingboxes__Sequence__are_equal(const traffic_light_interfaces__msg__Boundingboxes__Sequence * lhs, const traffic_light_interfaces__msg__Boundingboxes__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!traffic_light_interfaces__msg__Boundingboxes__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
traffic_light_interfaces__msg__Boundingboxes__Sequence__copy(
  const traffic_light_interfaces__msg__Boundingboxes__Sequence * input,
  traffic_light_interfaces__msg__Boundingboxes__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(traffic_light_interfaces__msg__Boundingboxes);
    traffic_light_interfaces__msg__Boundingboxes * data =
      (traffic_light_interfaces__msg__Boundingboxes *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!traffic_light_interfaces__msg__Boundingboxes__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          traffic_light_interfaces__msg__Boundingboxes__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!traffic_light_interfaces__msg__Boundingboxes__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
