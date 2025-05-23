// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from btcpp_ros2_interfaces:action/ExecuteTree.idl
// generated code does not contain a copyright notice

#ifndef BTCPP_ROS2_INTERFACES__ACTION__DETAIL__EXECUTE_TREE__FUNCTIONS_H_
#define BTCPP_ROS2_INTERFACES__ACTION__DETAIL__EXECUTE_TREE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "btcpp_ros2_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "btcpp_ros2_interfaces/action/detail/execute_tree__struct.h"

/// Initialize action/ExecuteTree message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * btcpp_ros2_interfaces__action__ExecuteTree_Goal
 * )) before or use
 * btcpp_ros2_interfaces__action__ExecuteTree_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_btcpp_ros2_interfaces
bool
btcpp_ros2_interfaces__action__ExecuteTree_Goal__init(btcpp_ros2_interfaces__action__ExecuteTree_Goal * msg);

/// Finalize action/ExecuteTree message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_btcpp_ros2_interfaces
void
btcpp_ros2_interfaces__action__ExecuteTree_Goal__fini(btcpp_ros2_interfaces__action__ExecuteTree_Goal * msg);

/// Create action/ExecuteTree message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * btcpp_ros2_interfaces__action__ExecuteTree_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_btcpp_ros2_interfaces
btcpp_ros2_interfaces__action__ExecuteTree_Goal *
btcpp_ros2_interfaces__action__ExecuteTree_Goal__create();

/// Destroy action/ExecuteTree message.
/**
 * It calls
 * btcpp_ros2_interfaces__action__ExecuteTree_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_btcpp_ros2_interfaces
void
btcpp_ros2_interfaces__action__ExecuteTree_Goal__destroy(btcpp_ros2_interfaces__action__ExecuteTree_Goal * msg);

/// Check for action/ExecuteTree message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_btcpp_ros2_interfaces
bool
btcpp_ros2_interfaces__action__ExecuteTree_Goal__are_equal(const btcpp_ros2_interfaces__action__ExecuteTree_Goal * lhs, const btcpp_ros2_interfaces__action__ExecuteTree_Goal * rhs);

/// Copy a action/ExecuteTree message.
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
ROSIDL_GENERATOR_C_PUBLIC_btcpp_ros2_interfaces
bool
btcpp_ros2_interfaces__action__ExecuteTree_Goal__copy(
  const btcpp_ros2_interfaces__action__ExecuteTree_Goal * input,
  btcpp_ros2_interfaces__action__ExecuteTree_Goal * output);

/// Initialize array of action/ExecuteTree messages.
/**
 * It allocates the memory for the number of elements and calls
 * btcpp_ros2_interfaces__action__ExecuteTree_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_btcpp_ros2_interfaces
bool
btcpp_ros2_interfaces__action__ExecuteTree_Goal__Sequence__init(btcpp_ros2_interfaces__action__ExecuteTree_Goal__Sequence * array, size_t size);

/// Finalize array of action/ExecuteTree messages.
/**
 * It calls
 * btcpp_ros2_interfaces__action__ExecuteTree_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_btcpp_ros2_interfaces
void
btcpp_ros2_interfaces__action__ExecuteTree_Goal__Sequence__fini(btcpp_ros2_interfaces__action__ExecuteTree_Goal__Sequence * array);

/// Create array of action/ExecuteTree messages.
/**
 * It allocates the memory for the array and calls
 * btcpp_ros2_interfaces__action__ExecuteTree_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_btcpp_ros2_interfaces
btcpp_ros2_interfaces__action__ExecuteTree_Goal__Sequence *
btcpp_ros2_interfaces__action__ExecuteTree_Goal__Sequence__create(size_t size);

/// Destroy array of action/ExecuteTree messages.
/**
 * It calls
 * btcpp_ros2_interfaces__action__ExecuteTree_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_btcpp_ros2_interfaces
void
btcpp_ros2_interfaces__action__ExecuteTree_Goal__Sequence__destroy(btcpp_ros2_interfaces__action__ExecuteTree_Goal__Sequence * array);

/// Check for action/ExecuteTree message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_btcpp_ros2_interfaces
bool
btcpp_ros2_interfaces__action__ExecuteTree_Goal__Sequence__are_equal(const btcpp_ros2_interfaces__action__ExecuteTree_Goal__Sequence * lhs, const btcpp_ros2_interfaces__action__ExecuteTree_Goal__Sequence * rhs);

/// Copy an array of action/ExecuteTree messages.
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
ROSIDL_GENERATOR_C_PUBLIC_btcpp_ros2_interfaces
bool
btcpp_ros2_interfaces__action__ExecuteTree_Goal__Sequence__copy(
  const btcpp_ros2_interfaces__action__ExecuteTree_Goal__Sequence * input,
  btcpp_ros2_interfaces__action__ExecuteTree_Goal__Sequence * output);

/// Initialize action/ExecuteTree message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * btcpp_ros2_interfaces__action__ExecuteTree_Result
 * )) before or use
 * btcpp_ros2_interfaces__action__ExecuteTree_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_btcpp_ros2_interfaces
bool
btcpp_ros2_interfaces__action__ExecuteTree_Result__init(btcpp_ros2_interfaces__action__ExecuteTree_Result * msg);

/// Finalize action/ExecuteTree message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_btcpp_ros2_interfaces
void
btcpp_ros2_interfaces__action__ExecuteTree_Result__fini(btcpp_ros2_interfaces__action__ExecuteTree_Result * msg);

/// Create action/ExecuteTree message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * btcpp_ros2_interfaces__action__ExecuteTree_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_btcpp_ros2_interfaces
btcpp_ros2_interfaces__action__ExecuteTree_Result *
btcpp_ros2_interfaces__action__ExecuteTree_Result__create();

/// Destroy action/ExecuteTree message.
/**
 * It calls
 * btcpp_ros2_interfaces__action__ExecuteTree_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_btcpp_ros2_interfaces
void
btcpp_ros2_interfaces__action__ExecuteTree_Result__destroy(btcpp_ros2_interfaces__action__ExecuteTree_Result * msg);

/// Check for action/ExecuteTree message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_btcpp_ros2_interfaces
bool
btcpp_ros2_interfaces__action__ExecuteTree_Result__are_equal(const btcpp_ros2_interfaces__action__ExecuteTree_Result * lhs, const btcpp_ros2_interfaces__action__ExecuteTree_Result * rhs);

/// Copy a action/ExecuteTree message.
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
ROSIDL_GENERATOR_C_PUBLIC_btcpp_ros2_interfaces
bool
btcpp_ros2_interfaces__action__ExecuteTree_Result__copy(
  const btcpp_ros2_interfaces__action__ExecuteTree_Result * input,
  btcpp_ros2_interfaces__action__ExecuteTree_Result * output);

/// Initialize array of action/ExecuteTree messages.
/**
 * It allocates the memory for the number of elements and calls
 * btcpp_ros2_interfaces__action__ExecuteTree_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_btcpp_ros2_interfaces
bool
btcpp_ros2_interfaces__action__ExecuteTree_Result__Sequence__init(btcpp_ros2_interfaces__action__ExecuteTree_Result__Sequence * array, size_t size);

/// Finalize array of action/ExecuteTree messages.
/**
 * It calls
 * btcpp_ros2_interfaces__action__ExecuteTree_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_btcpp_ros2_interfaces
void
btcpp_ros2_interfaces__action__ExecuteTree_Result__Sequence__fini(btcpp_ros2_interfaces__action__ExecuteTree_Result__Sequence * array);

/// Create array of action/ExecuteTree messages.
/**
 * It allocates the memory for the array and calls
 * btcpp_ros2_interfaces__action__ExecuteTree_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_btcpp_ros2_interfaces
btcpp_ros2_interfaces__action__ExecuteTree_Result__Sequence *
btcpp_ros2_interfaces__action__ExecuteTree_Result__Sequence__create(size_t size);

/// Destroy array of action/ExecuteTree messages.
/**
 * It calls
 * btcpp_ros2_interfaces__action__ExecuteTree_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_btcpp_ros2_interfaces
void
btcpp_ros2_interfaces__action__ExecuteTree_Result__Sequence__destroy(btcpp_ros2_interfaces__action__ExecuteTree_Result__Sequence * array);

/// Check for action/ExecuteTree message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_btcpp_ros2_interfaces
bool
btcpp_ros2_interfaces__action__ExecuteTree_Result__Sequence__are_equal(const btcpp_ros2_interfaces__action__ExecuteTree_Result__Sequence * lhs, const btcpp_ros2_interfaces__action__ExecuteTree_Result__Sequence * rhs);

/// Copy an array of action/ExecuteTree messages.
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
ROSIDL_GENERATOR_C_PUBLIC_btcpp_ros2_interfaces
bool
btcpp_ros2_interfaces__action__ExecuteTree_Result__Sequence__copy(
  const btcpp_ros2_interfaces__action__ExecuteTree_Result__Sequence * input,
  btcpp_ros2_interfaces__action__ExecuteTree_Result__Sequence * output);

/// Initialize action/ExecuteTree message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * btcpp_ros2_interfaces__action__ExecuteTree_Feedback
 * )) before or use
 * btcpp_ros2_interfaces__action__ExecuteTree_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_btcpp_ros2_interfaces
bool
btcpp_ros2_interfaces__action__ExecuteTree_Feedback__init(btcpp_ros2_interfaces__action__ExecuteTree_Feedback * msg);

/// Finalize action/ExecuteTree message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_btcpp_ros2_interfaces
void
btcpp_ros2_interfaces__action__ExecuteTree_Feedback__fini(btcpp_ros2_interfaces__action__ExecuteTree_Feedback * msg);

/// Create action/ExecuteTree message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * btcpp_ros2_interfaces__action__ExecuteTree_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_btcpp_ros2_interfaces
btcpp_ros2_interfaces__action__ExecuteTree_Feedback *
btcpp_ros2_interfaces__action__ExecuteTree_Feedback__create();

/// Destroy action/ExecuteTree message.
/**
 * It calls
 * btcpp_ros2_interfaces__action__ExecuteTree_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_btcpp_ros2_interfaces
void
btcpp_ros2_interfaces__action__ExecuteTree_Feedback__destroy(btcpp_ros2_interfaces__action__ExecuteTree_Feedback * msg);

/// Check for action/ExecuteTree message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_btcpp_ros2_interfaces
bool
btcpp_ros2_interfaces__action__ExecuteTree_Feedback__are_equal(const btcpp_ros2_interfaces__action__ExecuteTree_Feedback * lhs, const btcpp_ros2_interfaces__action__ExecuteTree_Feedback * rhs);

/// Copy a action/ExecuteTree message.
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
ROSIDL_GENERATOR_C_PUBLIC_btcpp_ros2_interfaces
bool
btcpp_ros2_interfaces__action__ExecuteTree_Feedback__copy(
  const btcpp_ros2_interfaces__action__ExecuteTree_Feedback * input,
  btcpp_ros2_interfaces__action__ExecuteTree_Feedback * output);

/// Initialize array of action/ExecuteTree messages.
/**
 * It allocates the memory for the number of elements and calls
 * btcpp_ros2_interfaces__action__ExecuteTree_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_btcpp_ros2_interfaces
bool
btcpp_ros2_interfaces__action__ExecuteTree_Feedback__Sequence__init(btcpp_ros2_interfaces__action__ExecuteTree_Feedback__Sequence * array, size_t size);

/// Finalize array of action/ExecuteTree messages.
/**
 * It calls
 * btcpp_ros2_interfaces__action__ExecuteTree_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_btcpp_ros2_interfaces
void
btcpp_ros2_interfaces__action__ExecuteTree_Feedback__Sequence__fini(btcpp_ros2_interfaces__action__ExecuteTree_Feedback__Sequence * array);

/// Create array of action/ExecuteTree messages.
/**
 * It allocates the memory for the array and calls
 * btcpp_ros2_interfaces__action__ExecuteTree_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_btcpp_ros2_interfaces
btcpp_ros2_interfaces__action__ExecuteTree_Feedback__Sequence *
btcpp_ros2_interfaces__action__ExecuteTree_Feedback__Sequence__create(size_t size);

/// Destroy array of action/ExecuteTree messages.
/**
 * It calls
 * btcpp_ros2_interfaces__action__ExecuteTree_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_btcpp_ros2_interfaces
void
btcpp_ros2_interfaces__action__ExecuteTree_Feedback__Sequence__destroy(btcpp_ros2_interfaces__action__ExecuteTree_Feedback__Sequence * array);

/// Check for action/ExecuteTree message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_btcpp_ros2_interfaces
bool
btcpp_ros2_interfaces__action__ExecuteTree_Feedback__Sequence__are_equal(const btcpp_ros2_interfaces__action__ExecuteTree_Feedback__Sequence * lhs, const btcpp_ros2_interfaces__action__ExecuteTree_Feedback__Sequence * rhs);

/// Copy an array of action/ExecuteTree messages.
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
ROSIDL_GENERATOR_C_PUBLIC_btcpp_ros2_interfaces
bool
btcpp_ros2_interfaces__action__ExecuteTree_Feedback__Sequence__copy(
  const btcpp_ros2_interfaces__action__ExecuteTree_Feedback__Sequence * input,
  btcpp_ros2_interfaces__action__ExecuteTree_Feedback__Sequence * output);

/// Initialize action/ExecuteTree message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Request
 * )) before or use
 * btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_btcpp_ros2_interfaces
bool
btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Request__init(btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Request * msg);

/// Finalize action/ExecuteTree message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_btcpp_ros2_interfaces
void
btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Request__fini(btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Request * msg);

/// Create action/ExecuteTree message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_btcpp_ros2_interfaces
btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Request *
btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Request__create();

/// Destroy action/ExecuteTree message.
/**
 * It calls
 * btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_btcpp_ros2_interfaces
void
btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Request__destroy(btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Request * msg);

/// Check for action/ExecuteTree message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_btcpp_ros2_interfaces
bool
btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Request__are_equal(const btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Request * lhs, const btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Request * rhs);

/// Copy a action/ExecuteTree message.
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
ROSIDL_GENERATOR_C_PUBLIC_btcpp_ros2_interfaces
bool
btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Request__copy(
  const btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Request * input,
  btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Request * output);

/// Initialize array of action/ExecuteTree messages.
/**
 * It allocates the memory for the number of elements and calls
 * btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_btcpp_ros2_interfaces
bool
btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Request__Sequence__init(btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/ExecuteTree messages.
/**
 * It calls
 * btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_btcpp_ros2_interfaces
void
btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Request__Sequence__fini(btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Request__Sequence * array);

/// Create array of action/ExecuteTree messages.
/**
 * It allocates the memory for the array and calls
 * btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_btcpp_ros2_interfaces
btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Request__Sequence *
btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/ExecuteTree messages.
/**
 * It calls
 * btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_btcpp_ros2_interfaces
void
btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Request__Sequence__destroy(btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Request__Sequence * array);

/// Check for action/ExecuteTree message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_btcpp_ros2_interfaces
bool
btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Request__Sequence__are_equal(const btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Request__Sequence * lhs, const btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Request__Sequence * rhs);

/// Copy an array of action/ExecuteTree messages.
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
ROSIDL_GENERATOR_C_PUBLIC_btcpp_ros2_interfaces
bool
btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Request__Sequence__copy(
  const btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Request__Sequence * input,
  btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Request__Sequence * output);

/// Initialize action/ExecuteTree message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Response
 * )) before or use
 * btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_btcpp_ros2_interfaces
bool
btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Response__init(btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Response * msg);

/// Finalize action/ExecuteTree message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_btcpp_ros2_interfaces
void
btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Response__fini(btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Response * msg);

/// Create action/ExecuteTree message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_btcpp_ros2_interfaces
btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Response *
btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Response__create();

/// Destroy action/ExecuteTree message.
/**
 * It calls
 * btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_btcpp_ros2_interfaces
void
btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Response__destroy(btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Response * msg);

/// Check for action/ExecuteTree message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_btcpp_ros2_interfaces
bool
btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Response__are_equal(const btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Response * lhs, const btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Response * rhs);

/// Copy a action/ExecuteTree message.
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
ROSIDL_GENERATOR_C_PUBLIC_btcpp_ros2_interfaces
bool
btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Response__copy(
  const btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Response * input,
  btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Response * output);

/// Initialize array of action/ExecuteTree messages.
/**
 * It allocates the memory for the number of elements and calls
 * btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_btcpp_ros2_interfaces
bool
btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Response__Sequence__init(btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/ExecuteTree messages.
/**
 * It calls
 * btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_btcpp_ros2_interfaces
void
btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Response__Sequence__fini(btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Response__Sequence * array);

/// Create array of action/ExecuteTree messages.
/**
 * It allocates the memory for the array and calls
 * btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_btcpp_ros2_interfaces
btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Response__Sequence *
btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/ExecuteTree messages.
/**
 * It calls
 * btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_btcpp_ros2_interfaces
void
btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Response__Sequence__destroy(btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Response__Sequence * array);

/// Check for action/ExecuteTree message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_btcpp_ros2_interfaces
bool
btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Response__Sequence__are_equal(const btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Response__Sequence * lhs, const btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Response__Sequence * rhs);

/// Copy an array of action/ExecuteTree messages.
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
ROSIDL_GENERATOR_C_PUBLIC_btcpp_ros2_interfaces
bool
btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Response__Sequence__copy(
  const btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Response__Sequence * input,
  btcpp_ros2_interfaces__action__ExecuteTree_SendGoal_Response__Sequence * output);

/// Initialize action/ExecuteTree message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Request
 * )) before or use
 * btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_btcpp_ros2_interfaces
bool
btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Request__init(btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Request * msg);

/// Finalize action/ExecuteTree message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_btcpp_ros2_interfaces
void
btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Request__fini(btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Request * msg);

/// Create action/ExecuteTree message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_btcpp_ros2_interfaces
btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Request *
btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Request__create();

/// Destroy action/ExecuteTree message.
/**
 * It calls
 * btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_btcpp_ros2_interfaces
void
btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Request__destroy(btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Request * msg);

/// Check for action/ExecuteTree message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_btcpp_ros2_interfaces
bool
btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Request__are_equal(const btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Request * lhs, const btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Request * rhs);

/// Copy a action/ExecuteTree message.
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
ROSIDL_GENERATOR_C_PUBLIC_btcpp_ros2_interfaces
bool
btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Request__copy(
  const btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Request * input,
  btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Request * output);

/// Initialize array of action/ExecuteTree messages.
/**
 * It allocates the memory for the number of elements and calls
 * btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_btcpp_ros2_interfaces
bool
btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Request__Sequence__init(btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/ExecuteTree messages.
/**
 * It calls
 * btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_btcpp_ros2_interfaces
void
btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Request__Sequence__fini(btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Request__Sequence * array);

/// Create array of action/ExecuteTree messages.
/**
 * It allocates the memory for the array and calls
 * btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_btcpp_ros2_interfaces
btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Request__Sequence *
btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/ExecuteTree messages.
/**
 * It calls
 * btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_btcpp_ros2_interfaces
void
btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Request__Sequence__destroy(btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Request__Sequence * array);

/// Check for action/ExecuteTree message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_btcpp_ros2_interfaces
bool
btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Request__Sequence__are_equal(const btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Request__Sequence * lhs, const btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Request__Sequence * rhs);

/// Copy an array of action/ExecuteTree messages.
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
ROSIDL_GENERATOR_C_PUBLIC_btcpp_ros2_interfaces
bool
btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Request__Sequence__copy(
  const btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Request__Sequence * input,
  btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Request__Sequence * output);

/// Initialize action/ExecuteTree message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Response
 * )) before or use
 * btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_btcpp_ros2_interfaces
bool
btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Response__init(btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Response * msg);

/// Finalize action/ExecuteTree message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_btcpp_ros2_interfaces
void
btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Response__fini(btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Response * msg);

/// Create action/ExecuteTree message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_btcpp_ros2_interfaces
btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Response *
btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Response__create();

/// Destroy action/ExecuteTree message.
/**
 * It calls
 * btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_btcpp_ros2_interfaces
void
btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Response__destroy(btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Response * msg);

/// Check for action/ExecuteTree message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_btcpp_ros2_interfaces
bool
btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Response__are_equal(const btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Response * lhs, const btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Response * rhs);

/// Copy a action/ExecuteTree message.
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
ROSIDL_GENERATOR_C_PUBLIC_btcpp_ros2_interfaces
bool
btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Response__copy(
  const btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Response * input,
  btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Response * output);

/// Initialize array of action/ExecuteTree messages.
/**
 * It allocates the memory for the number of elements and calls
 * btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_btcpp_ros2_interfaces
bool
btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Response__Sequence__init(btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/ExecuteTree messages.
/**
 * It calls
 * btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_btcpp_ros2_interfaces
void
btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Response__Sequence__fini(btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Response__Sequence * array);

/// Create array of action/ExecuteTree messages.
/**
 * It allocates the memory for the array and calls
 * btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_btcpp_ros2_interfaces
btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Response__Sequence *
btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/ExecuteTree messages.
/**
 * It calls
 * btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_btcpp_ros2_interfaces
void
btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Response__Sequence__destroy(btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Response__Sequence * array);

/// Check for action/ExecuteTree message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_btcpp_ros2_interfaces
bool
btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Response__Sequence__are_equal(const btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Response__Sequence * lhs, const btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Response__Sequence * rhs);

/// Copy an array of action/ExecuteTree messages.
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
ROSIDL_GENERATOR_C_PUBLIC_btcpp_ros2_interfaces
bool
btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Response__Sequence__copy(
  const btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Response__Sequence * input,
  btcpp_ros2_interfaces__action__ExecuteTree_GetResult_Response__Sequence * output);

/// Initialize action/ExecuteTree message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * btcpp_ros2_interfaces__action__ExecuteTree_FeedbackMessage
 * )) before or use
 * btcpp_ros2_interfaces__action__ExecuteTree_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_btcpp_ros2_interfaces
bool
btcpp_ros2_interfaces__action__ExecuteTree_FeedbackMessage__init(btcpp_ros2_interfaces__action__ExecuteTree_FeedbackMessage * msg);

/// Finalize action/ExecuteTree message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_btcpp_ros2_interfaces
void
btcpp_ros2_interfaces__action__ExecuteTree_FeedbackMessage__fini(btcpp_ros2_interfaces__action__ExecuteTree_FeedbackMessage * msg);

/// Create action/ExecuteTree message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * btcpp_ros2_interfaces__action__ExecuteTree_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_btcpp_ros2_interfaces
btcpp_ros2_interfaces__action__ExecuteTree_FeedbackMessage *
btcpp_ros2_interfaces__action__ExecuteTree_FeedbackMessage__create();

/// Destroy action/ExecuteTree message.
/**
 * It calls
 * btcpp_ros2_interfaces__action__ExecuteTree_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_btcpp_ros2_interfaces
void
btcpp_ros2_interfaces__action__ExecuteTree_FeedbackMessage__destroy(btcpp_ros2_interfaces__action__ExecuteTree_FeedbackMessage * msg);

/// Check for action/ExecuteTree message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_btcpp_ros2_interfaces
bool
btcpp_ros2_interfaces__action__ExecuteTree_FeedbackMessage__are_equal(const btcpp_ros2_interfaces__action__ExecuteTree_FeedbackMessage * lhs, const btcpp_ros2_interfaces__action__ExecuteTree_FeedbackMessage * rhs);

/// Copy a action/ExecuteTree message.
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
ROSIDL_GENERATOR_C_PUBLIC_btcpp_ros2_interfaces
bool
btcpp_ros2_interfaces__action__ExecuteTree_FeedbackMessage__copy(
  const btcpp_ros2_interfaces__action__ExecuteTree_FeedbackMessage * input,
  btcpp_ros2_interfaces__action__ExecuteTree_FeedbackMessage * output);

/// Initialize array of action/ExecuteTree messages.
/**
 * It allocates the memory for the number of elements and calls
 * btcpp_ros2_interfaces__action__ExecuteTree_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_btcpp_ros2_interfaces
bool
btcpp_ros2_interfaces__action__ExecuteTree_FeedbackMessage__Sequence__init(btcpp_ros2_interfaces__action__ExecuteTree_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/ExecuteTree messages.
/**
 * It calls
 * btcpp_ros2_interfaces__action__ExecuteTree_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_btcpp_ros2_interfaces
void
btcpp_ros2_interfaces__action__ExecuteTree_FeedbackMessage__Sequence__fini(btcpp_ros2_interfaces__action__ExecuteTree_FeedbackMessage__Sequence * array);

/// Create array of action/ExecuteTree messages.
/**
 * It allocates the memory for the array and calls
 * btcpp_ros2_interfaces__action__ExecuteTree_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_btcpp_ros2_interfaces
btcpp_ros2_interfaces__action__ExecuteTree_FeedbackMessage__Sequence *
btcpp_ros2_interfaces__action__ExecuteTree_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/ExecuteTree messages.
/**
 * It calls
 * btcpp_ros2_interfaces__action__ExecuteTree_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_btcpp_ros2_interfaces
void
btcpp_ros2_interfaces__action__ExecuteTree_FeedbackMessage__Sequence__destroy(btcpp_ros2_interfaces__action__ExecuteTree_FeedbackMessage__Sequence * array);

/// Check for action/ExecuteTree message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_btcpp_ros2_interfaces
bool
btcpp_ros2_interfaces__action__ExecuteTree_FeedbackMessage__Sequence__are_equal(const btcpp_ros2_interfaces__action__ExecuteTree_FeedbackMessage__Sequence * lhs, const btcpp_ros2_interfaces__action__ExecuteTree_FeedbackMessage__Sequence * rhs);

/// Copy an array of action/ExecuteTree messages.
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
ROSIDL_GENERATOR_C_PUBLIC_btcpp_ros2_interfaces
bool
btcpp_ros2_interfaces__action__ExecuteTree_FeedbackMessage__Sequence__copy(
  const btcpp_ros2_interfaces__action__ExecuteTree_FeedbackMessage__Sequence * input,
  btcpp_ros2_interfaces__action__ExecuteTree_FeedbackMessage__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // BTCPP_ROS2_INTERFACES__ACTION__DETAIL__EXECUTE_TREE__FUNCTIONS_H_
