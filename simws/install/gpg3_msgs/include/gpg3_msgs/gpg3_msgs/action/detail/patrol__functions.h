// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from gpg3_msgs:action/Patrol.idl
// generated code does not contain a copyright notice

#ifndef GPG3_MSGS__ACTION__DETAIL__PATROL__FUNCTIONS_H_
#define GPG3_MSGS__ACTION__DETAIL__PATROL__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "gpg3_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "gpg3_msgs/action/detail/patrol__struct.h"

/// Initialize action/Patrol message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * gpg3_msgs__action__Patrol_Goal
 * )) before or use
 * gpg3_msgs__action__Patrol_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_gpg3_msgs
bool
gpg3_msgs__action__Patrol_Goal__init(gpg3_msgs__action__Patrol_Goal * msg);

/// Finalize action/Patrol message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gpg3_msgs
void
gpg3_msgs__action__Patrol_Goal__fini(gpg3_msgs__action__Patrol_Goal * msg);

/// Create action/Patrol message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * gpg3_msgs__action__Patrol_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_gpg3_msgs
gpg3_msgs__action__Patrol_Goal *
gpg3_msgs__action__Patrol_Goal__create();

/// Destroy action/Patrol message.
/**
 * It calls
 * gpg3_msgs__action__Patrol_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gpg3_msgs
void
gpg3_msgs__action__Patrol_Goal__destroy(gpg3_msgs__action__Patrol_Goal * msg);

/// Check for action/Patrol message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_gpg3_msgs
bool
gpg3_msgs__action__Patrol_Goal__are_equal(const gpg3_msgs__action__Patrol_Goal * lhs, const gpg3_msgs__action__Patrol_Goal * rhs);

/// Copy a action/Patrol message.
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
ROSIDL_GENERATOR_C_PUBLIC_gpg3_msgs
bool
gpg3_msgs__action__Patrol_Goal__copy(
  const gpg3_msgs__action__Patrol_Goal * input,
  gpg3_msgs__action__Patrol_Goal * output);

/// Initialize array of action/Patrol messages.
/**
 * It allocates the memory for the number of elements and calls
 * gpg3_msgs__action__Patrol_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_gpg3_msgs
bool
gpg3_msgs__action__Patrol_Goal__Sequence__init(gpg3_msgs__action__Patrol_Goal__Sequence * array, size_t size);

/// Finalize array of action/Patrol messages.
/**
 * It calls
 * gpg3_msgs__action__Patrol_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gpg3_msgs
void
gpg3_msgs__action__Patrol_Goal__Sequence__fini(gpg3_msgs__action__Patrol_Goal__Sequence * array);

/// Create array of action/Patrol messages.
/**
 * It allocates the memory for the array and calls
 * gpg3_msgs__action__Patrol_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_gpg3_msgs
gpg3_msgs__action__Patrol_Goal__Sequence *
gpg3_msgs__action__Patrol_Goal__Sequence__create(size_t size);

/// Destroy array of action/Patrol messages.
/**
 * It calls
 * gpg3_msgs__action__Patrol_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gpg3_msgs
void
gpg3_msgs__action__Patrol_Goal__Sequence__destroy(gpg3_msgs__action__Patrol_Goal__Sequence * array);

/// Check for action/Patrol message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_gpg3_msgs
bool
gpg3_msgs__action__Patrol_Goal__Sequence__are_equal(const gpg3_msgs__action__Patrol_Goal__Sequence * lhs, const gpg3_msgs__action__Patrol_Goal__Sequence * rhs);

/// Copy an array of action/Patrol messages.
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
ROSIDL_GENERATOR_C_PUBLIC_gpg3_msgs
bool
gpg3_msgs__action__Patrol_Goal__Sequence__copy(
  const gpg3_msgs__action__Patrol_Goal__Sequence * input,
  gpg3_msgs__action__Patrol_Goal__Sequence * output);

/// Initialize action/Patrol message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * gpg3_msgs__action__Patrol_Result
 * )) before or use
 * gpg3_msgs__action__Patrol_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_gpg3_msgs
bool
gpg3_msgs__action__Patrol_Result__init(gpg3_msgs__action__Patrol_Result * msg);

/// Finalize action/Patrol message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gpg3_msgs
void
gpg3_msgs__action__Patrol_Result__fini(gpg3_msgs__action__Patrol_Result * msg);

/// Create action/Patrol message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * gpg3_msgs__action__Patrol_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_gpg3_msgs
gpg3_msgs__action__Patrol_Result *
gpg3_msgs__action__Patrol_Result__create();

/// Destroy action/Patrol message.
/**
 * It calls
 * gpg3_msgs__action__Patrol_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gpg3_msgs
void
gpg3_msgs__action__Patrol_Result__destroy(gpg3_msgs__action__Patrol_Result * msg);

/// Check for action/Patrol message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_gpg3_msgs
bool
gpg3_msgs__action__Patrol_Result__are_equal(const gpg3_msgs__action__Patrol_Result * lhs, const gpg3_msgs__action__Patrol_Result * rhs);

/// Copy a action/Patrol message.
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
ROSIDL_GENERATOR_C_PUBLIC_gpg3_msgs
bool
gpg3_msgs__action__Patrol_Result__copy(
  const gpg3_msgs__action__Patrol_Result * input,
  gpg3_msgs__action__Patrol_Result * output);

/// Initialize array of action/Patrol messages.
/**
 * It allocates the memory for the number of elements and calls
 * gpg3_msgs__action__Patrol_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_gpg3_msgs
bool
gpg3_msgs__action__Patrol_Result__Sequence__init(gpg3_msgs__action__Patrol_Result__Sequence * array, size_t size);

/// Finalize array of action/Patrol messages.
/**
 * It calls
 * gpg3_msgs__action__Patrol_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gpg3_msgs
void
gpg3_msgs__action__Patrol_Result__Sequence__fini(gpg3_msgs__action__Patrol_Result__Sequence * array);

/// Create array of action/Patrol messages.
/**
 * It allocates the memory for the array and calls
 * gpg3_msgs__action__Patrol_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_gpg3_msgs
gpg3_msgs__action__Patrol_Result__Sequence *
gpg3_msgs__action__Patrol_Result__Sequence__create(size_t size);

/// Destroy array of action/Patrol messages.
/**
 * It calls
 * gpg3_msgs__action__Patrol_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gpg3_msgs
void
gpg3_msgs__action__Patrol_Result__Sequence__destroy(gpg3_msgs__action__Patrol_Result__Sequence * array);

/// Check for action/Patrol message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_gpg3_msgs
bool
gpg3_msgs__action__Patrol_Result__Sequence__are_equal(const gpg3_msgs__action__Patrol_Result__Sequence * lhs, const gpg3_msgs__action__Patrol_Result__Sequence * rhs);

/// Copy an array of action/Patrol messages.
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
ROSIDL_GENERATOR_C_PUBLIC_gpg3_msgs
bool
gpg3_msgs__action__Patrol_Result__Sequence__copy(
  const gpg3_msgs__action__Patrol_Result__Sequence * input,
  gpg3_msgs__action__Patrol_Result__Sequence * output);

/// Initialize action/Patrol message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * gpg3_msgs__action__Patrol_Feedback
 * )) before or use
 * gpg3_msgs__action__Patrol_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_gpg3_msgs
bool
gpg3_msgs__action__Patrol_Feedback__init(gpg3_msgs__action__Patrol_Feedback * msg);

/// Finalize action/Patrol message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gpg3_msgs
void
gpg3_msgs__action__Patrol_Feedback__fini(gpg3_msgs__action__Patrol_Feedback * msg);

/// Create action/Patrol message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * gpg3_msgs__action__Patrol_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_gpg3_msgs
gpg3_msgs__action__Patrol_Feedback *
gpg3_msgs__action__Patrol_Feedback__create();

/// Destroy action/Patrol message.
/**
 * It calls
 * gpg3_msgs__action__Patrol_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gpg3_msgs
void
gpg3_msgs__action__Patrol_Feedback__destroy(gpg3_msgs__action__Patrol_Feedback * msg);

/// Check for action/Patrol message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_gpg3_msgs
bool
gpg3_msgs__action__Patrol_Feedback__are_equal(const gpg3_msgs__action__Patrol_Feedback * lhs, const gpg3_msgs__action__Patrol_Feedback * rhs);

/// Copy a action/Patrol message.
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
ROSIDL_GENERATOR_C_PUBLIC_gpg3_msgs
bool
gpg3_msgs__action__Patrol_Feedback__copy(
  const gpg3_msgs__action__Patrol_Feedback * input,
  gpg3_msgs__action__Patrol_Feedback * output);

/// Initialize array of action/Patrol messages.
/**
 * It allocates the memory for the number of elements and calls
 * gpg3_msgs__action__Patrol_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_gpg3_msgs
bool
gpg3_msgs__action__Patrol_Feedback__Sequence__init(gpg3_msgs__action__Patrol_Feedback__Sequence * array, size_t size);

/// Finalize array of action/Patrol messages.
/**
 * It calls
 * gpg3_msgs__action__Patrol_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gpg3_msgs
void
gpg3_msgs__action__Patrol_Feedback__Sequence__fini(gpg3_msgs__action__Patrol_Feedback__Sequence * array);

/// Create array of action/Patrol messages.
/**
 * It allocates the memory for the array and calls
 * gpg3_msgs__action__Patrol_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_gpg3_msgs
gpg3_msgs__action__Patrol_Feedback__Sequence *
gpg3_msgs__action__Patrol_Feedback__Sequence__create(size_t size);

/// Destroy array of action/Patrol messages.
/**
 * It calls
 * gpg3_msgs__action__Patrol_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gpg3_msgs
void
gpg3_msgs__action__Patrol_Feedback__Sequence__destroy(gpg3_msgs__action__Patrol_Feedback__Sequence * array);

/// Check for action/Patrol message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_gpg3_msgs
bool
gpg3_msgs__action__Patrol_Feedback__Sequence__are_equal(const gpg3_msgs__action__Patrol_Feedback__Sequence * lhs, const gpg3_msgs__action__Patrol_Feedback__Sequence * rhs);

/// Copy an array of action/Patrol messages.
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
ROSIDL_GENERATOR_C_PUBLIC_gpg3_msgs
bool
gpg3_msgs__action__Patrol_Feedback__Sequence__copy(
  const gpg3_msgs__action__Patrol_Feedback__Sequence * input,
  gpg3_msgs__action__Patrol_Feedback__Sequence * output);

/// Initialize action/Patrol message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * gpg3_msgs__action__Patrol_SendGoal_Request
 * )) before or use
 * gpg3_msgs__action__Patrol_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_gpg3_msgs
bool
gpg3_msgs__action__Patrol_SendGoal_Request__init(gpg3_msgs__action__Patrol_SendGoal_Request * msg);

/// Finalize action/Patrol message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gpg3_msgs
void
gpg3_msgs__action__Patrol_SendGoal_Request__fini(gpg3_msgs__action__Patrol_SendGoal_Request * msg);

/// Create action/Patrol message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * gpg3_msgs__action__Patrol_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_gpg3_msgs
gpg3_msgs__action__Patrol_SendGoal_Request *
gpg3_msgs__action__Patrol_SendGoal_Request__create();

/// Destroy action/Patrol message.
/**
 * It calls
 * gpg3_msgs__action__Patrol_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gpg3_msgs
void
gpg3_msgs__action__Patrol_SendGoal_Request__destroy(gpg3_msgs__action__Patrol_SendGoal_Request * msg);

/// Check for action/Patrol message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_gpg3_msgs
bool
gpg3_msgs__action__Patrol_SendGoal_Request__are_equal(const gpg3_msgs__action__Patrol_SendGoal_Request * lhs, const gpg3_msgs__action__Patrol_SendGoal_Request * rhs);

/// Copy a action/Patrol message.
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
ROSIDL_GENERATOR_C_PUBLIC_gpg3_msgs
bool
gpg3_msgs__action__Patrol_SendGoal_Request__copy(
  const gpg3_msgs__action__Patrol_SendGoal_Request * input,
  gpg3_msgs__action__Patrol_SendGoal_Request * output);

/// Initialize array of action/Patrol messages.
/**
 * It allocates the memory for the number of elements and calls
 * gpg3_msgs__action__Patrol_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_gpg3_msgs
bool
gpg3_msgs__action__Patrol_SendGoal_Request__Sequence__init(gpg3_msgs__action__Patrol_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/Patrol messages.
/**
 * It calls
 * gpg3_msgs__action__Patrol_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gpg3_msgs
void
gpg3_msgs__action__Patrol_SendGoal_Request__Sequence__fini(gpg3_msgs__action__Patrol_SendGoal_Request__Sequence * array);

/// Create array of action/Patrol messages.
/**
 * It allocates the memory for the array and calls
 * gpg3_msgs__action__Patrol_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_gpg3_msgs
gpg3_msgs__action__Patrol_SendGoal_Request__Sequence *
gpg3_msgs__action__Patrol_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/Patrol messages.
/**
 * It calls
 * gpg3_msgs__action__Patrol_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gpg3_msgs
void
gpg3_msgs__action__Patrol_SendGoal_Request__Sequence__destroy(gpg3_msgs__action__Patrol_SendGoal_Request__Sequence * array);

/// Check for action/Patrol message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_gpg3_msgs
bool
gpg3_msgs__action__Patrol_SendGoal_Request__Sequence__are_equal(const gpg3_msgs__action__Patrol_SendGoal_Request__Sequence * lhs, const gpg3_msgs__action__Patrol_SendGoal_Request__Sequence * rhs);

/// Copy an array of action/Patrol messages.
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
ROSIDL_GENERATOR_C_PUBLIC_gpg3_msgs
bool
gpg3_msgs__action__Patrol_SendGoal_Request__Sequence__copy(
  const gpg3_msgs__action__Patrol_SendGoal_Request__Sequence * input,
  gpg3_msgs__action__Patrol_SendGoal_Request__Sequence * output);

/// Initialize action/Patrol message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * gpg3_msgs__action__Patrol_SendGoal_Response
 * )) before or use
 * gpg3_msgs__action__Patrol_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_gpg3_msgs
bool
gpg3_msgs__action__Patrol_SendGoal_Response__init(gpg3_msgs__action__Patrol_SendGoal_Response * msg);

/// Finalize action/Patrol message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gpg3_msgs
void
gpg3_msgs__action__Patrol_SendGoal_Response__fini(gpg3_msgs__action__Patrol_SendGoal_Response * msg);

/// Create action/Patrol message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * gpg3_msgs__action__Patrol_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_gpg3_msgs
gpg3_msgs__action__Patrol_SendGoal_Response *
gpg3_msgs__action__Patrol_SendGoal_Response__create();

/// Destroy action/Patrol message.
/**
 * It calls
 * gpg3_msgs__action__Patrol_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gpg3_msgs
void
gpg3_msgs__action__Patrol_SendGoal_Response__destroy(gpg3_msgs__action__Patrol_SendGoal_Response * msg);

/// Check for action/Patrol message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_gpg3_msgs
bool
gpg3_msgs__action__Patrol_SendGoal_Response__are_equal(const gpg3_msgs__action__Patrol_SendGoal_Response * lhs, const gpg3_msgs__action__Patrol_SendGoal_Response * rhs);

/// Copy a action/Patrol message.
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
ROSIDL_GENERATOR_C_PUBLIC_gpg3_msgs
bool
gpg3_msgs__action__Patrol_SendGoal_Response__copy(
  const gpg3_msgs__action__Patrol_SendGoal_Response * input,
  gpg3_msgs__action__Patrol_SendGoal_Response * output);

/// Initialize array of action/Patrol messages.
/**
 * It allocates the memory for the number of elements and calls
 * gpg3_msgs__action__Patrol_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_gpg3_msgs
bool
gpg3_msgs__action__Patrol_SendGoal_Response__Sequence__init(gpg3_msgs__action__Patrol_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/Patrol messages.
/**
 * It calls
 * gpg3_msgs__action__Patrol_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gpg3_msgs
void
gpg3_msgs__action__Patrol_SendGoal_Response__Sequence__fini(gpg3_msgs__action__Patrol_SendGoal_Response__Sequence * array);

/// Create array of action/Patrol messages.
/**
 * It allocates the memory for the array and calls
 * gpg3_msgs__action__Patrol_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_gpg3_msgs
gpg3_msgs__action__Patrol_SendGoal_Response__Sequence *
gpg3_msgs__action__Patrol_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/Patrol messages.
/**
 * It calls
 * gpg3_msgs__action__Patrol_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gpg3_msgs
void
gpg3_msgs__action__Patrol_SendGoal_Response__Sequence__destroy(gpg3_msgs__action__Patrol_SendGoal_Response__Sequence * array);

/// Check for action/Patrol message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_gpg3_msgs
bool
gpg3_msgs__action__Patrol_SendGoal_Response__Sequence__are_equal(const gpg3_msgs__action__Patrol_SendGoal_Response__Sequence * lhs, const gpg3_msgs__action__Patrol_SendGoal_Response__Sequence * rhs);

/// Copy an array of action/Patrol messages.
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
ROSIDL_GENERATOR_C_PUBLIC_gpg3_msgs
bool
gpg3_msgs__action__Patrol_SendGoal_Response__Sequence__copy(
  const gpg3_msgs__action__Patrol_SendGoal_Response__Sequence * input,
  gpg3_msgs__action__Patrol_SendGoal_Response__Sequence * output);

/// Initialize action/Patrol message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * gpg3_msgs__action__Patrol_GetResult_Request
 * )) before or use
 * gpg3_msgs__action__Patrol_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_gpg3_msgs
bool
gpg3_msgs__action__Patrol_GetResult_Request__init(gpg3_msgs__action__Patrol_GetResult_Request * msg);

/// Finalize action/Patrol message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gpg3_msgs
void
gpg3_msgs__action__Patrol_GetResult_Request__fini(gpg3_msgs__action__Patrol_GetResult_Request * msg);

/// Create action/Patrol message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * gpg3_msgs__action__Patrol_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_gpg3_msgs
gpg3_msgs__action__Patrol_GetResult_Request *
gpg3_msgs__action__Patrol_GetResult_Request__create();

/// Destroy action/Patrol message.
/**
 * It calls
 * gpg3_msgs__action__Patrol_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gpg3_msgs
void
gpg3_msgs__action__Patrol_GetResult_Request__destroy(gpg3_msgs__action__Patrol_GetResult_Request * msg);

/// Check for action/Patrol message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_gpg3_msgs
bool
gpg3_msgs__action__Patrol_GetResult_Request__are_equal(const gpg3_msgs__action__Patrol_GetResult_Request * lhs, const gpg3_msgs__action__Patrol_GetResult_Request * rhs);

/// Copy a action/Patrol message.
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
ROSIDL_GENERATOR_C_PUBLIC_gpg3_msgs
bool
gpg3_msgs__action__Patrol_GetResult_Request__copy(
  const gpg3_msgs__action__Patrol_GetResult_Request * input,
  gpg3_msgs__action__Patrol_GetResult_Request * output);

/// Initialize array of action/Patrol messages.
/**
 * It allocates the memory for the number of elements and calls
 * gpg3_msgs__action__Patrol_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_gpg3_msgs
bool
gpg3_msgs__action__Patrol_GetResult_Request__Sequence__init(gpg3_msgs__action__Patrol_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/Patrol messages.
/**
 * It calls
 * gpg3_msgs__action__Patrol_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gpg3_msgs
void
gpg3_msgs__action__Patrol_GetResult_Request__Sequence__fini(gpg3_msgs__action__Patrol_GetResult_Request__Sequence * array);

/// Create array of action/Patrol messages.
/**
 * It allocates the memory for the array and calls
 * gpg3_msgs__action__Patrol_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_gpg3_msgs
gpg3_msgs__action__Patrol_GetResult_Request__Sequence *
gpg3_msgs__action__Patrol_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/Patrol messages.
/**
 * It calls
 * gpg3_msgs__action__Patrol_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gpg3_msgs
void
gpg3_msgs__action__Patrol_GetResult_Request__Sequence__destroy(gpg3_msgs__action__Patrol_GetResult_Request__Sequence * array);

/// Check for action/Patrol message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_gpg3_msgs
bool
gpg3_msgs__action__Patrol_GetResult_Request__Sequence__are_equal(const gpg3_msgs__action__Patrol_GetResult_Request__Sequence * lhs, const gpg3_msgs__action__Patrol_GetResult_Request__Sequence * rhs);

/// Copy an array of action/Patrol messages.
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
ROSIDL_GENERATOR_C_PUBLIC_gpg3_msgs
bool
gpg3_msgs__action__Patrol_GetResult_Request__Sequence__copy(
  const gpg3_msgs__action__Patrol_GetResult_Request__Sequence * input,
  gpg3_msgs__action__Patrol_GetResult_Request__Sequence * output);

/// Initialize action/Patrol message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * gpg3_msgs__action__Patrol_GetResult_Response
 * )) before or use
 * gpg3_msgs__action__Patrol_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_gpg3_msgs
bool
gpg3_msgs__action__Patrol_GetResult_Response__init(gpg3_msgs__action__Patrol_GetResult_Response * msg);

/// Finalize action/Patrol message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gpg3_msgs
void
gpg3_msgs__action__Patrol_GetResult_Response__fini(gpg3_msgs__action__Patrol_GetResult_Response * msg);

/// Create action/Patrol message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * gpg3_msgs__action__Patrol_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_gpg3_msgs
gpg3_msgs__action__Patrol_GetResult_Response *
gpg3_msgs__action__Patrol_GetResult_Response__create();

/// Destroy action/Patrol message.
/**
 * It calls
 * gpg3_msgs__action__Patrol_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gpg3_msgs
void
gpg3_msgs__action__Patrol_GetResult_Response__destroy(gpg3_msgs__action__Patrol_GetResult_Response * msg);

/// Check for action/Patrol message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_gpg3_msgs
bool
gpg3_msgs__action__Patrol_GetResult_Response__are_equal(const gpg3_msgs__action__Patrol_GetResult_Response * lhs, const gpg3_msgs__action__Patrol_GetResult_Response * rhs);

/// Copy a action/Patrol message.
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
ROSIDL_GENERATOR_C_PUBLIC_gpg3_msgs
bool
gpg3_msgs__action__Patrol_GetResult_Response__copy(
  const gpg3_msgs__action__Patrol_GetResult_Response * input,
  gpg3_msgs__action__Patrol_GetResult_Response * output);

/// Initialize array of action/Patrol messages.
/**
 * It allocates the memory for the number of elements and calls
 * gpg3_msgs__action__Patrol_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_gpg3_msgs
bool
gpg3_msgs__action__Patrol_GetResult_Response__Sequence__init(gpg3_msgs__action__Patrol_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/Patrol messages.
/**
 * It calls
 * gpg3_msgs__action__Patrol_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gpg3_msgs
void
gpg3_msgs__action__Patrol_GetResult_Response__Sequence__fini(gpg3_msgs__action__Patrol_GetResult_Response__Sequence * array);

/// Create array of action/Patrol messages.
/**
 * It allocates the memory for the array and calls
 * gpg3_msgs__action__Patrol_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_gpg3_msgs
gpg3_msgs__action__Patrol_GetResult_Response__Sequence *
gpg3_msgs__action__Patrol_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/Patrol messages.
/**
 * It calls
 * gpg3_msgs__action__Patrol_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gpg3_msgs
void
gpg3_msgs__action__Patrol_GetResult_Response__Sequence__destroy(gpg3_msgs__action__Patrol_GetResult_Response__Sequence * array);

/// Check for action/Patrol message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_gpg3_msgs
bool
gpg3_msgs__action__Patrol_GetResult_Response__Sequence__are_equal(const gpg3_msgs__action__Patrol_GetResult_Response__Sequence * lhs, const gpg3_msgs__action__Patrol_GetResult_Response__Sequence * rhs);

/// Copy an array of action/Patrol messages.
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
ROSIDL_GENERATOR_C_PUBLIC_gpg3_msgs
bool
gpg3_msgs__action__Patrol_GetResult_Response__Sequence__copy(
  const gpg3_msgs__action__Patrol_GetResult_Response__Sequence * input,
  gpg3_msgs__action__Patrol_GetResult_Response__Sequence * output);

/// Initialize action/Patrol message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * gpg3_msgs__action__Patrol_FeedbackMessage
 * )) before or use
 * gpg3_msgs__action__Patrol_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_gpg3_msgs
bool
gpg3_msgs__action__Patrol_FeedbackMessage__init(gpg3_msgs__action__Patrol_FeedbackMessage * msg);

/// Finalize action/Patrol message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gpg3_msgs
void
gpg3_msgs__action__Patrol_FeedbackMessage__fini(gpg3_msgs__action__Patrol_FeedbackMessage * msg);

/// Create action/Patrol message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * gpg3_msgs__action__Patrol_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_gpg3_msgs
gpg3_msgs__action__Patrol_FeedbackMessage *
gpg3_msgs__action__Patrol_FeedbackMessage__create();

/// Destroy action/Patrol message.
/**
 * It calls
 * gpg3_msgs__action__Patrol_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gpg3_msgs
void
gpg3_msgs__action__Patrol_FeedbackMessage__destroy(gpg3_msgs__action__Patrol_FeedbackMessage * msg);

/// Check for action/Patrol message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_gpg3_msgs
bool
gpg3_msgs__action__Patrol_FeedbackMessage__are_equal(const gpg3_msgs__action__Patrol_FeedbackMessage * lhs, const gpg3_msgs__action__Patrol_FeedbackMessage * rhs);

/// Copy a action/Patrol message.
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
ROSIDL_GENERATOR_C_PUBLIC_gpg3_msgs
bool
gpg3_msgs__action__Patrol_FeedbackMessage__copy(
  const gpg3_msgs__action__Patrol_FeedbackMessage * input,
  gpg3_msgs__action__Patrol_FeedbackMessage * output);

/// Initialize array of action/Patrol messages.
/**
 * It allocates the memory for the number of elements and calls
 * gpg3_msgs__action__Patrol_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_gpg3_msgs
bool
gpg3_msgs__action__Patrol_FeedbackMessage__Sequence__init(gpg3_msgs__action__Patrol_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/Patrol messages.
/**
 * It calls
 * gpg3_msgs__action__Patrol_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gpg3_msgs
void
gpg3_msgs__action__Patrol_FeedbackMessage__Sequence__fini(gpg3_msgs__action__Patrol_FeedbackMessage__Sequence * array);

/// Create array of action/Patrol messages.
/**
 * It allocates the memory for the array and calls
 * gpg3_msgs__action__Patrol_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_gpg3_msgs
gpg3_msgs__action__Patrol_FeedbackMessage__Sequence *
gpg3_msgs__action__Patrol_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/Patrol messages.
/**
 * It calls
 * gpg3_msgs__action__Patrol_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gpg3_msgs
void
gpg3_msgs__action__Patrol_FeedbackMessage__Sequence__destroy(gpg3_msgs__action__Patrol_FeedbackMessage__Sequence * array);

/// Check for action/Patrol message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_gpg3_msgs
bool
gpg3_msgs__action__Patrol_FeedbackMessage__Sequence__are_equal(const gpg3_msgs__action__Patrol_FeedbackMessage__Sequence * lhs, const gpg3_msgs__action__Patrol_FeedbackMessage__Sequence * rhs);

/// Copy an array of action/Patrol messages.
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
ROSIDL_GENERATOR_C_PUBLIC_gpg3_msgs
bool
gpg3_msgs__action__Patrol_FeedbackMessage__Sequence__copy(
  const gpg3_msgs__action__Patrol_FeedbackMessage__Sequence * input,
  gpg3_msgs__action__Patrol_FeedbackMessage__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // GPG3_MSGS__ACTION__DETAIL__PATROL__FUNCTIONS_H_
