// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from traffic_light_interfaces:msg/BBoxCenter.idl
// generated code does not contain a copyright notice

#ifndef TRAFFIC_LIGHT_INTERFACES__MSG__DETAIL__B_BOX_CENTER__FUNCTIONS_H_
#define TRAFFIC_LIGHT_INTERFACES__MSG__DETAIL__B_BOX_CENTER__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "traffic_light_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "traffic_light_interfaces/msg/detail/b_box_center__struct.h"

/// Initialize msg/BBoxCenter message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * traffic_light_interfaces__msg__BBoxCenter
 * )) before or use
 * traffic_light_interfaces__msg__BBoxCenter__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_traffic_light_interfaces
bool
traffic_light_interfaces__msg__BBoxCenter__init(traffic_light_interfaces__msg__BBoxCenter * msg);

/// Finalize msg/BBoxCenter message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_traffic_light_interfaces
void
traffic_light_interfaces__msg__BBoxCenter__fini(traffic_light_interfaces__msg__BBoxCenter * msg);

/// Create msg/BBoxCenter message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * traffic_light_interfaces__msg__BBoxCenter__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_traffic_light_interfaces
traffic_light_interfaces__msg__BBoxCenter *
traffic_light_interfaces__msg__BBoxCenter__create();

/// Destroy msg/BBoxCenter message.
/**
 * It calls
 * traffic_light_interfaces__msg__BBoxCenter__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_traffic_light_interfaces
void
traffic_light_interfaces__msg__BBoxCenter__destroy(traffic_light_interfaces__msg__BBoxCenter * msg);

/// Check for msg/BBoxCenter message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_traffic_light_interfaces
bool
traffic_light_interfaces__msg__BBoxCenter__are_equal(const traffic_light_interfaces__msg__BBoxCenter * lhs, const traffic_light_interfaces__msg__BBoxCenter * rhs);

/// Copy a msg/BBoxCenter message.
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
traffic_light_interfaces__msg__BBoxCenter__copy(
  const traffic_light_interfaces__msg__BBoxCenter * input,
  traffic_light_interfaces__msg__BBoxCenter * output);

/// Initialize array of msg/BBoxCenter messages.
/**
 * It allocates the memory for the number of elements and calls
 * traffic_light_interfaces__msg__BBoxCenter__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_traffic_light_interfaces
bool
traffic_light_interfaces__msg__BBoxCenter__Sequence__init(traffic_light_interfaces__msg__BBoxCenter__Sequence * array, size_t size);

/// Finalize array of msg/BBoxCenter messages.
/**
 * It calls
 * traffic_light_interfaces__msg__BBoxCenter__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_traffic_light_interfaces
void
traffic_light_interfaces__msg__BBoxCenter__Sequence__fini(traffic_light_interfaces__msg__BBoxCenter__Sequence * array);

/// Create array of msg/BBoxCenter messages.
/**
 * It allocates the memory for the array and calls
 * traffic_light_interfaces__msg__BBoxCenter__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_traffic_light_interfaces
traffic_light_interfaces__msg__BBoxCenter__Sequence *
traffic_light_interfaces__msg__BBoxCenter__Sequence__create(size_t size);

/// Destroy array of msg/BBoxCenter messages.
/**
 * It calls
 * traffic_light_interfaces__msg__BBoxCenter__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_traffic_light_interfaces
void
traffic_light_interfaces__msg__BBoxCenter__Sequence__destroy(traffic_light_interfaces__msg__BBoxCenter__Sequence * array);

/// Check for msg/BBoxCenter message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_traffic_light_interfaces
bool
traffic_light_interfaces__msg__BBoxCenter__Sequence__are_equal(const traffic_light_interfaces__msg__BBoxCenter__Sequence * lhs, const traffic_light_interfaces__msg__BBoxCenter__Sequence * rhs);

/// Copy an array of msg/BBoxCenter messages.
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
traffic_light_interfaces__msg__BBoxCenter__Sequence__copy(
  const traffic_light_interfaces__msg__BBoxCenter__Sequence * input,
  traffic_light_interfaces__msg__BBoxCenter__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // TRAFFIC_LIGHT_INTERFACES__MSG__DETAIL__B_BOX_CENTER__FUNCTIONS_H_
