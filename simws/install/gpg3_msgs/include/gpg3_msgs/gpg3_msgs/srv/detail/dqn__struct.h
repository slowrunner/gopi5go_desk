// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from gpg3_msgs:srv/Dqn.idl
// generated code does not contain a copyright notice

#ifndef GPG3_MSGS__SRV__DETAIL__DQN__STRUCT_H_
#define GPG3_MSGS__SRV__DETAIL__DQN__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/Dqn in the package gpg3_msgs.
typedef struct gpg3_msgs__srv__Dqn_Request
{
  uint8_t action;
  bool init;
} gpg3_msgs__srv__Dqn_Request;

// Struct for a sequence of gpg3_msgs__srv__Dqn_Request.
typedef struct gpg3_msgs__srv__Dqn_Request__Sequence
{
  gpg3_msgs__srv__Dqn_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gpg3_msgs__srv__Dqn_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'state'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/Dqn in the package gpg3_msgs.
typedef struct gpg3_msgs__srv__Dqn_Response
{
  rosidl_runtime_c__float__Sequence state;
  float reward;
  bool done;
} gpg3_msgs__srv__Dqn_Response;

// Struct for a sequence of gpg3_msgs__srv__Dqn_Response.
typedef struct gpg3_msgs__srv__Dqn_Response__Sequence
{
  gpg3_msgs__srv__Dqn_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gpg3_msgs__srv__Dqn_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GPG3_MSGS__SRV__DETAIL__DQN__STRUCT_H_
