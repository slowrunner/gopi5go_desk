// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from gpg3_msgs:srv/Sound.idl
// generated code does not contain a copyright notice

#ifndef GPG3_MSGS__SRV__DETAIL__SOUND__STRUCT_H_
#define GPG3_MSGS__SRV__DETAIL__SOUND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/Sound in the package gpg3_msgs.
typedef struct gpg3_msgs__srv__Sound_Request
{
  uint8_t value;
} gpg3_msgs__srv__Sound_Request;

// Struct for a sequence of gpg3_msgs__srv__Sound_Request.
typedef struct gpg3_msgs__srv__Sound_Request__Sequence
{
  gpg3_msgs__srv__Sound_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gpg3_msgs__srv__Sound_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/Sound in the package gpg3_msgs.
typedef struct gpg3_msgs__srv__Sound_Response
{
  bool success;
  rosidl_runtime_c__String message;
} gpg3_msgs__srv__Sound_Response;

// Struct for a sequence of gpg3_msgs__srv__Sound_Response.
typedef struct gpg3_msgs__srv__Sound_Response__Sequence
{
  gpg3_msgs__srv__Sound_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gpg3_msgs__srv__Sound_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GPG3_MSGS__SRV__DETAIL__SOUND__STRUCT_H_
