// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from traffic_light_interfaces:msg/BBoxCenters.idl
// generated code does not contain a copyright notice
#include "traffic_light_interfaces/msg/detail/b_box_centers__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
// Member `image_header`
#include "traffic_light_interfaces/msg/detail/header__functions.h"
// Member `bbox_centers`
#include "traffic_light_interfaces/msg/detail/b_box_center__functions.h"

bool
traffic_light_interfaces__msg__BBoxCenters__init(traffic_light_interfaces__msg__BBoxCenters * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!traffic_light_interfaces__msg__Header__init(&msg->header)) {
    traffic_light_interfaces__msg__BBoxCenters__fini(msg);
    return false;
  }
  // image_header
  if (!traffic_light_interfaces__msg__Header__init(&msg->image_header)) {
    traffic_light_interfaces__msg__BBoxCenters__fini(msg);
    return false;
  }
  // bbox_centers
  if (!traffic_light_interfaces__msg__BBoxCenter__Sequence__init(&msg->bbox_centers, 0)) {
    traffic_light_interfaces__msg__BBoxCenters__fini(msg);
    return false;
  }
  return true;
}

void
traffic_light_interfaces__msg__BBoxCenters__fini(traffic_light_interfaces__msg__BBoxCenters * msg)
{
  if (!msg) {
    return;
  }
  // header
  traffic_light_interfaces__msg__Header__fini(&msg->header);
  // image_header
  traffic_light_interfaces__msg__Header__fini(&msg->image_header);
  // bbox_centers
  traffic_light_interfaces__msg__BBoxCenter__Sequence__fini(&msg->bbox_centers);
}

bool
traffic_light_interfaces__msg__BBoxCenters__are_equal(const traffic_light_interfaces__msg__BBoxCenters * lhs, const traffic_light_interfaces__msg__BBoxCenters * rhs)
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
  // bbox_centers
  if (!traffic_light_interfaces__msg__BBoxCenter__Sequence__are_equal(
      &(lhs->bbox_centers), &(rhs->bbox_centers)))
  {
    return false;
  }
  return true;
}

bool
traffic_light_interfaces__msg__BBoxCenters__copy(
  const traffic_light_interfaces__msg__BBoxCenters * input,
  traffic_light_interfaces__msg__BBoxCenters * output)
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
  // bbox_centers
  if (!traffic_light_interfaces__msg__BBoxCenter__Sequence__copy(
      &(input->bbox_centers), &(output->bbox_centers)))
  {
    return false;
  }
  return true;
}

traffic_light_interfaces__msg__BBoxCenters *
traffic_light_interfaces__msg__BBoxCenters__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  traffic_light_interfaces__msg__BBoxCenters * msg = (traffic_light_interfaces__msg__BBoxCenters *)allocator.allocate(sizeof(traffic_light_interfaces__msg__BBoxCenters), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(traffic_light_interfaces__msg__BBoxCenters));
  bool success = traffic_light_interfaces__msg__BBoxCenters__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
traffic_light_interfaces__msg__BBoxCenters__destroy(traffic_light_interfaces__msg__BBoxCenters * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    traffic_light_interfaces__msg__BBoxCenters__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
traffic_light_interfaces__msg__BBoxCenters__Sequence__init(traffic_light_interfaces__msg__BBoxCenters__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  traffic_light_interfaces__msg__BBoxCenters * data = NULL;

  if (size) {
    data = (traffic_light_interfaces__msg__BBoxCenters *)allocator.zero_allocate(size, sizeof(traffic_light_interfaces__msg__BBoxCenters), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = traffic_light_interfaces__msg__BBoxCenters__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        traffic_light_interfaces__msg__BBoxCenters__fini(&data[i - 1]);
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
traffic_light_interfaces__msg__BBoxCenters__Sequence__fini(traffic_light_interfaces__msg__BBoxCenters__Sequence * array)
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
      traffic_light_interfaces__msg__BBoxCenters__fini(&array->data[i]);
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

traffic_light_interfaces__msg__BBoxCenters__Sequence *
traffic_light_interfaces__msg__BBoxCenters__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  traffic_light_interfaces__msg__BBoxCenters__Sequence * array = (traffic_light_interfaces__msg__BBoxCenters__Sequence *)allocator.allocate(sizeof(traffic_light_interfaces__msg__BBoxCenters__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = traffic_light_interfaces__msg__BBoxCenters__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
traffic_light_interfaces__msg__BBoxCenters__Sequence__destroy(traffic_light_interfaces__msg__BBoxCenters__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    traffic_light_interfaces__msg__BBoxCenters__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
traffic_light_interfaces__msg__BBoxCenters__Sequence__are_equal(const traffic_light_interfaces__msg__BBoxCenters__Sequence * lhs, const traffic_light_interfaces__msg__BBoxCenters__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!traffic_light_interfaces__msg__BBoxCenters__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
traffic_light_interfaces__msg__BBoxCenters__Sequence__copy(
  const traffic_light_interfaces__msg__BBoxCenters__Sequence * input,
  traffic_light_interfaces__msg__BBoxCenters__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(traffic_light_interfaces__msg__BBoxCenters);
    traffic_light_interfaces__msg__BBoxCenters * data =
      (traffic_light_interfaces__msg__BBoxCenters *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!traffic_light_interfaces__msg__BBoxCenters__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          traffic_light_interfaces__msg__BBoxCenters__fini(&data[i]);
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
    if (!traffic_light_interfaces__msg__BBoxCenters__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
