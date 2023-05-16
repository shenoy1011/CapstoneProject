// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from traffic_light_interfaces:msg/BoundingBox.idl
// generated code does not contain a copyright notice
#include "traffic_light_interfaces/msg/detail/bounding_box__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `signaltype`
#include "rosidl_runtime_c/string_functions.h"

bool
traffic_light_interfaces__msg__BoundingBox__init(traffic_light_interfaces__msg__BoundingBox * msg)
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
  // signaltype
  if (!rosidl_runtime_c__String__init(&msg->signaltype)) {
    traffic_light_interfaces__msg__BoundingBox__fini(msg);
    return false;
  }
  return true;
}

void
traffic_light_interfaces__msg__BoundingBox__fini(traffic_light_interfaces__msg__BoundingBox * msg)
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
  // signaltype
  rosidl_runtime_c__String__fini(&msg->signaltype);
}

bool
traffic_light_interfaces__msg__BoundingBox__are_equal(const traffic_light_interfaces__msg__BoundingBox * lhs, const traffic_light_interfaces__msg__BoundingBox * rhs)
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
  // signaltype
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->signaltype), &(rhs->signaltype)))
  {
    return false;
  }
  return true;
}

bool
traffic_light_interfaces__msg__BoundingBox__copy(
  const traffic_light_interfaces__msg__BoundingBox * input,
  traffic_light_interfaces__msg__BoundingBox * output)
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
  // signaltype
  if (!rosidl_runtime_c__String__copy(
      &(input->signaltype), &(output->signaltype)))
  {
    return false;
  }
  return true;
}

traffic_light_interfaces__msg__BoundingBox *
traffic_light_interfaces__msg__BoundingBox__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  traffic_light_interfaces__msg__BoundingBox * msg = (traffic_light_interfaces__msg__BoundingBox *)allocator.allocate(sizeof(traffic_light_interfaces__msg__BoundingBox), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(traffic_light_interfaces__msg__BoundingBox));
  bool success = traffic_light_interfaces__msg__BoundingBox__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
traffic_light_interfaces__msg__BoundingBox__destroy(traffic_light_interfaces__msg__BoundingBox * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    traffic_light_interfaces__msg__BoundingBox__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
traffic_light_interfaces__msg__BoundingBox__Sequence__init(traffic_light_interfaces__msg__BoundingBox__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  traffic_light_interfaces__msg__BoundingBox * data = NULL;

  if (size) {
    data = (traffic_light_interfaces__msg__BoundingBox *)allocator.zero_allocate(size, sizeof(traffic_light_interfaces__msg__BoundingBox), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = traffic_light_interfaces__msg__BoundingBox__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        traffic_light_interfaces__msg__BoundingBox__fini(&data[i - 1]);
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
traffic_light_interfaces__msg__BoundingBox__Sequence__fini(traffic_light_interfaces__msg__BoundingBox__Sequence * array)
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
      traffic_light_interfaces__msg__BoundingBox__fini(&array->data[i]);
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

traffic_light_interfaces__msg__BoundingBox__Sequence *
traffic_light_interfaces__msg__BoundingBox__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  traffic_light_interfaces__msg__BoundingBox__Sequence * array = (traffic_light_interfaces__msg__BoundingBox__Sequence *)allocator.allocate(sizeof(traffic_light_interfaces__msg__BoundingBox__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = traffic_light_interfaces__msg__BoundingBox__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
traffic_light_interfaces__msg__BoundingBox__Sequence__destroy(traffic_light_interfaces__msg__BoundingBox__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    traffic_light_interfaces__msg__BoundingBox__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
traffic_light_interfaces__msg__BoundingBox__Sequence__are_equal(const traffic_light_interfaces__msg__BoundingBox__Sequence * lhs, const traffic_light_interfaces__msg__BoundingBox__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!traffic_light_interfaces__msg__BoundingBox__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
traffic_light_interfaces__msg__BoundingBox__Sequence__copy(
  const traffic_light_interfaces__msg__BoundingBox__Sequence * input,
  traffic_light_interfaces__msg__BoundingBox__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(traffic_light_interfaces__msg__BoundingBox);
    traffic_light_interfaces__msg__BoundingBox * data =
      (traffic_light_interfaces__msg__BoundingBox *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!traffic_light_interfaces__msg__BoundingBox__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          traffic_light_interfaces__msg__BoundingBox__fini(&data[i]);
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
    if (!traffic_light_interfaces__msg__BoundingBox__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
