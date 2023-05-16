// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from traffic_light_interfaces:msg/Bboxcenter.idl
// generated code does not contain a copyright notice
#include "traffic_light_interfaces/msg/detail/bboxcenter__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `type`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
traffic_light_interfaces__msg__Bboxcenter__init(traffic_light_interfaces__msg__Bboxcenter * msg)
{
  if (!msg) {
    return false;
  }
  // probability
  // xmin
  // ymin
  // xmax
  // ymax
  // center_x
  // center_y
  // center_z
  // id
  // type
  if (!rosidl_runtime_c__int16__Sequence__init(&msg->type, 0)) {
    traffic_light_interfaces__msg__Bboxcenter__fini(msg);
    return false;
  }
  return true;
}

void
traffic_light_interfaces__msg__Bboxcenter__fini(traffic_light_interfaces__msg__Bboxcenter * msg)
{
  if (!msg) {
    return;
  }
  // probability
  // xmin
  // ymin
  // xmax
  // ymax
  // center_x
  // center_y
  // center_z
  // id
  // type
  rosidl_runtime_c__int16__Sequence__fini(&msg->type);
}

bool
traffic_light_interfaces__msg__Bboxcenter__are_equal(const traffic_light_interfaces__msg__Bboxcenter * lhs, const traffic_light_interfaces__msg__Bboxcenter * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // probability
  if (lhs->probability != rhs->probability) {
    return false;
  }
  // xmin
  if (lhs->xmin != rhs->xmin) {
    return false;
  }
  // ymin
  if (lhs->ymin != rhs->ymin) {
    return false;
  }
  // xmax
  if (lhs->xmax != rhs->xmax) {
    return false;
  }
  // ymax
  if (lhs->ymax != rhs->ymax) {
    return false;
  }
  // center_x
  if (lhs->center_x != rhs->center_x) {
    return false;
  }
  // center_y
  if (lhs->center_y != rhs->center_y) {
    return false;
  }
  // center_z
  if (lhs->center_z != rhs->center_z) {
    return false;
  }
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  // type
  if (!rosidl_runtime_c__int16__Sequence__are_equal(
      &(lhs->type), &(rhs->type)))
  {
    return false;
  }
  return true;
}

bool
traffic_light_interfaces__msg__Bboxcenter__copy(
  const traffic_light_interfaces__msg__Bboxcenter * input,
  traffic_light_interfaces__msg__Bboxcenter * output)
{
  if (!input || !output) {
    return false;
  }
  // probability
  output->probability = input->probability;
  // xmin
  output->xmin = input->xmin;
  // ymin
  output->ymin = input->ymin;
  // xmax
  output->xmax = input->xmax;
  // ymax
  output->ymax = input->ymax;
  // center_x
  output->center_x = input->center_x;
  // center_y
  output->center_y = input->center_y;
  // center_z
  output->center_z = input->center_z;
  // id
  output->id = input->id;
  // type
  if (!rosidl_runtime_c__int16__Sequence__copy(
      &(input->type), &(output->type)))
  {
    return false;
  }
  return true;
}

traffic_light_interfaces__msg__Bboxcenter *
traffic_light_interfaces__msg__Bboxcenter__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  traffic_light_interfaces__msg__Bboxcenter * msg = (traffic_light_interfaces__msg__Bboxcenter *)allocator.allocate(sizeof(traffic_light_interfaces__msg__Bboxcenter), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(traffic_light_interfaces__msg__Bboxcenter));
  bool success = traffic_light_interfaces__msg__Bboxcenter__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
traffic_light_interfaces__msg__Bboxcenter__destroy(traffic_light_interfaces__msg__Bboxcenter * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    traffic_light_interfaces__msg__Bboxcenter__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
traffic_light_interfaces__msg__Bboxcenter__Sequence__init(traffic_light_interfaces__msg__Bboxcenter__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  traffic_light_interfaces__msg__Bboxcenter * data = NULL;

  if (size) {
    data = (traffic_light_interfaces__msg__Bboxcenter *)allocator.zero_allocate(size, sizeof(traffic_light_interfaces__msg__Bboxcenter), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = traffic_light_interfaces__msg__Bboxcenter__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        traffic_light_interfaces__msg__Bboxcenter__fini(&data[i - 1]);
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
traffic_light_interfaces__msg__Bboxcenter__Sequence__fini(traffic_light_interfaces__msg__Bboxcenter__Sequence * array)
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
      traffic_light_interfaces__msg__Bboxcenter__fini(&array->data[i]);
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

traffic_light_interfaces__msg__Bboxcenter__Sequence *
traffic_light_interfaces__msg__Bboxcenter__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  traffic_light_interfaces__msg__Bboxcenter__Sequence * array = (traffic_light_interfaces__msg__Bboxcenter__Sequence *)allocator.allocate(sizeof(traffic_light_interfaces__msg__Bboxcenter__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = traffic_light_interfaces__msg__Bboxcenter__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
traffic_light_interfaces__msg__Bboxcenter__Sequence__destroy(traffic_light_interfaces__msg__Bboxcenter__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    traffic_light_interfaces__msg__Bboxcenter__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
traffic_light_interfaces__msg__Bboxcenter__Sequence__are_equal(const traffic_light_interfaces__msg__Bboxcenter__Sequence * lhs, const traffic_light_interfaces__msg__Bboxcenter__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!traffic_light_interfaces__msg__Bboxcenter__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
traffic_light_interfaces__msg__Bboxcenter__Sequence__copy(
  const traffic_light_interfaces__msg__Bboxcenter__Sequence * input,
  traffic_light_interfaces__msg__Bboxcenter__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(traffic_light_interfaces__msg__Bboxcenter);
    traffic_light_interfaces__msg__Bboxcenter * data =
      (traffic_light_interfaces__msg__Bboxcenter *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!traffic_light_interfaces__msg__Bboxcenter__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          traffic_light_interfaces__msg__Bboxcenter__fini(&data[i]);
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
    if (!traffic_light_interfaces__msg__Bboxcenter__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
