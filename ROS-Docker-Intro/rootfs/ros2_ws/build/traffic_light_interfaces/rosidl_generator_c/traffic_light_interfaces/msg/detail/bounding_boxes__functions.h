// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from traffic_light_interfaces:msg/BoundingBoxes.idl
// generated code does not contain a copyright notice

#ifndef TRAFFIC_LIGHT_INTERFACES__MSG__DETAIL__BOUNDING_BOXES__FUNCTIONS_H_
#define TRAFFIC_LIGHT_INTERFACES__MSG__DETAIL__BOUNDING_BOXES__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "traffic_light_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "traffic_light_interfaces/msg/detail/bounding_boxes__struct.h"

/// Initialize msg/BoundingBoxes message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * traffic_light_interfaces__msg__BoundingBoxes
 * )) before or use
 * traffic_light_interfaces__msg__BoundingBoxes__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_traffic_light_interfaces
bool
traffic_light_interfaces__msg__BoundingBoxes__init(traffic_light_interfaces__msg__BoundingBoxes * msg);

/// Finalize msg/BoundingBoxes message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_traffic_light_interfaces
void
traffic_light_interfaces__msg__BoundingBoxes__fini(traffic_light_interfaces__msg__BoundingBoxes * msg);

/// Create msg/BoundingBoxes message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * traffic_light_interfaces__msg__BoundingBoxes__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_traffic_light_interfaces
traffic_light_interfaces__msg__BoundingBoxes *
traffic_light_interfaces__msg__BoundingBoxes__create();

/// Destroy msg/BoundingBoxes message.
/**
 * It calls
 * traffic_light_interfaces__msg__BoundingBoxes__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_traffic_light_interfaces
void
traffic_light_interfaces__msg__BoundingBoxes__destroy(traffic_light_interfaces__msg__BoundingBoxes * msg);

/// Check for msg/BoundingBoxes message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_traffic_light_interfaces
bool
traffic_light_interfaces__msg__BoundingBoxes__are_equal(const traffic_light_interfaces__msg__BoundingBoxes * lhs, const traffic_light_interfaces__msg__BoundingBoxes * rhs);

/// Copy a msg/BoundingBoxes message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_traffic_light_interfaces
bool
traffic_light_interfaces__msg__BoundingBoxes__copy(
  const traffic_light_interfaces__msg__BoundingBoxes * input,
  traffic_light_interfaces__msg__BoundingBoxes * output);

/// Initialize array of msg/BoundingBoxes messages.
/**
 * It allocates the memory for the number of elements and calls
 * traffic_light_interfaces__msg__BoundingBoxes__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_traffic_light_interfaces
bool
traffic_light_interfaces__msg__BoundingBoxes__Sequence__init(traffic_light_interfaces__msg__BoundingBoxes__Sequence * array, size_t size);

/// Finalize array of msg/BoundingBoxes messages.
/**
 * It calls
 * traffic_light_interfaces__msg__BoundingBoxes__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_traffic_light_interfaces
void
traffic_light_interfaces__msg__BoundingBoxes__Sequence__fini(traffic_light_interfaces__msg__BoundingBoxes__Sequence * array);

/// Create array of msg/BoundingBoxes messages.
/**
 * It allocates the memory for the array and calls
 * traffic_light_interfaces__msg__BoundingBoxes__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_traffic_light_interfaces
traffic_light_interfaces__msg__BoundingBoxes__Sequence *
traffic_light_interfaces__msg__BoundingBoxes__Sequence__create(size_t size);

/// Destroy array of msg/BoundingBoxes messages.
/**
 * It calls
 * traffic_light_interfaces__msg__BoundingBoxes__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_traffic_light_interfaces
void
traffic_light_interfaces__msg__BoundingBoxes__Sequence__destroy(traffic_light_interfaces__msg__BoundingBoxes__Sequence * array);

/// Check for msg/BoundingBoxes message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_traffic_light_interfaces
bool
traffic_light_interfaces__msg__BoundingBoxes__Sequence__are_equal(const traffic_light_interfaces__msg__BoundingBoxes__Sequence * lhs, const traffic_light_interfaces__msg__BoundingBoxes__Sequence * rhs);

/// Copy an array of msg/BoundingBoxes messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_traffic_light_interfaces
bool
traffic_light_interfaces__msg__BoundingBoxes__Sequence__copy(
  const traffic_light_interfaces__msg__BoundingBoxes__Sequence * input,
  traffic_light_interfaces__msg__BoundingBoxes__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // TRAFFIC_LIGHT_INTERFACES__MSG__DETAIL__BOUNDING_BOXES__FUNCTIONS_H_
