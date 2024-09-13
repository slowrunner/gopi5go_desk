// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dave_interfaces:srv/Say.idl
// generated code does not contain a copyright notice

#ifndef DAVE_INTERFACES__SRV__DETAIL__SAY__STRUCT_H_
#define DAVE_INTERFACES__SRV__DETAIL__SAY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'saystring'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/Say in the package dave_interfaces.
typedef struct dave_interfaces__srv__Say_Request
{
  rosidl_runtime_c__String saystring;
} dave_interfaces__srv__Say_Request;

// Struct for a sequence of dave_interfaces__srv__Say_Request.
typedef struct dave_interfaces__srv__Say_Request__Sequence
{
  dave_interfaces__srv__Say_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dave_interfaces__srv__Say_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/Say in the package dave_interfaces.
typedef struct dave_interfaces__srv__Say_Response
{
  bool spoken;
} dave_interfaces__srv__Say_Response;

// Struct for a sequence of dave_interfaces__srv__Say_Response.
typedef struct dave_interfaces__srv__Say_Response__Sequence
{
  dave_interfaces__srv__Say_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dave_interfaces__srv__Say_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DAVE_INTERFACES__SRV__DETAIL__SAY__STRUCT_H_
