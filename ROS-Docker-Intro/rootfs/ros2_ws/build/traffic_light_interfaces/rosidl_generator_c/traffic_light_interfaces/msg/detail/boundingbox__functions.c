// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from traffic_light_interfaces:msg/Boundingbox.idl
// generated code does not contain a copyright notice
#include "traffic_light_interfaces/msg/detail/boundingbox__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `type`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
traffic_light_interfaces__msg__Boundingbox__init(traffic_light_interfaces__msg__Boundingbox * msg)
{
  if (!msg) {
    return false;
  }
  // probability
  // xmin
  // ymin
  // xmax
  // ymax
  // id
  // type
  if (!rosidl_runtime_c__int16__Sequence__init(&msg->type, 0)) {
    traffic_light_interfaces__msg__Boundingbox__fini(msg);
    return false;
  }
  return true;
}

void
traffic_light_interfaces__msg__Boundingbox__fini(traffic_light_interfaces__msg__Boundingbox * msg)
{
  if (!msg) {
    return;
  }
  // probability
  // xmin
  // ymin
  // xmax
  // ymax
  // id
  // type
  rosidl_runtime_c__int16__Sequence__fini(&msg->type);
}

bool
traffic_light_interfaces__msg__Boundingbox__are_equal(const traffic_light_interfaces__msg__Boundingbox * lhs, const traffic_light_interfaces__msg__Boundingbox * rhs)
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
traffic_light_interfaces__msg__Boundingbox__copy(
  const traffic_light_interfaces__msg__Boundingbox * input,
  traffic_light_interfaces__msg__Boundingbox * output)
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

traffic_light_interfaces__msg__Boundingbox *
traffic_light_interfaces__msg__Boundingbox__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  traffic_light_interfaces__msg__Boundingbox * msg = (traffic_light_interfaces__msg__Boundingbox *)allocator.allocate(sizeof(traffic_light_interfaces__msg__Boundingbox), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(traffic_light_interfaces__msg__Boundingbox));
  bool success = traffic_light_interfaces__msg__Boundingbox__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
traffic_light_interfaces__msg__Boundingbox__destroy(traffic_light_interfaces__msg__Boundingbox * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    traffic_light_interfaces__msg__Boundingbox__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
traffic_light_interfaces__msg__Boundingbox__Sequence__init(traffic_light_interfaces__msg__Boundingbox__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  traffic_light_interfaces__msg__Boundingbox * data = NULL;

  if (size) {
    data = (traffic_light_interfaces__msg__Boundingbox *)allocator.zero_allocate(size, sizeof(traffic_light_interfaces__msg__Boundingbox), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = traffic_light_interfaces__msg__Boundingbox__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        traffic_light_interfaces__msg__Boundingbox__fini(&data[i - 1]);
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
traffic_light_interfaces__msg__Boundingbox__Sequence__fini(traffic_light_interfaces__msg__Boundingbox__Sequence * array)
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
      traffic_light_interfaces__msg__Boundingbox__fini(&array->data[i]);
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

traffic_light_interfaces__msg__Boundingbox__Sequence *
traffic_light_interfaces__msg__Boundingbox__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  traffic_light_interfaces__msg__Boundingbox__Sequence * array = (traffic_light_interfaces__msg__Boundingbox__Sequence *)allocator.allocate(sizeof(traffic_light_interfaces__msg__Boundingbox__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = traffic_light_interfaces__msg__Boundingbox__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
traffic_light_interfaces__msg__Boundingbox__Sequence__destroy(traffic_light_interfaces__msg__Boundingbox__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    traffic_light_interfaces__msg__Boundingbox__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
traffic_light_interfaces__msg__Boundingbox__Sequence__are_equal(const traffic_light_interfaces__msg__Boundingbox__Sequence * lhs, const traffic_light_interfaces__msg__Boundingbox__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!traffic_light_interfaces__msg__Boundingbox__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
traffic_light_interfaces__msg__Boundingbox__Sequence__copy(
  const traffic_light_interfaces__msg__Boundingbox__Sequence * input,
  traffic_light_interfaces__msg__Boundingbox__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(traffic_light_interfaces__msg__Boundingbox);
    traffic_light_interfaces__msg__Boundingbox * data =
      (traffic_light_interfaces__msg__Boundingbox *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!traffic_light_interfaces__msg__Boundingbox__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          traffic_light_interfaces__msg__Boundingbox__fini(&data[i]);
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
    if (!traffic_light_interfaces__msg__Boundingbox__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
