// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from gpg3_msgs:msg/VersionInfo.idl
// generated code does not contain a copyright notice

#ifndef GPG3_MSGS__MSG__DETAIL__VERSION_INFO__STRUCT_H_
#define GPG3_MSGS__MSG__DETAIL__VERSION_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'hardware'
// Member 'firmware'
// Member 'software'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/VersionInfo in the package gpg3_msgs.
/**
  * Messages
 */
typedef struct gpg3_msgs__msg__VersionInfo
{
  /// <yyyy>.<mm>.<dd>        : hardware version of Turtlebot3 (ex. 2017.05.23)
  rosidl_runtime_c__String hardware;
  /// <major>.<minor>.<patch> : firmware version of OpenCR
  rosidl_runtime_c__String firmware;
  /// <major>.<minor>.<patch> : software version of Turtlebot3 ROS packages
  rosidl_runtime_c__String software;
} gpg3_msgs__msg__VersionInfo;

// Struct for a sequence of gpg3_msgs__msg__VersionInfo.
typedef struct gpg3_msgs__msg__VersionInfo__Sequence
{
  gpg3_msgs__msg__VersionInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gpg3_msgs__msg__VersionInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GPG3_MSGS__MSG__DETAIL__VERSION_INFO__STRUCT_H_
