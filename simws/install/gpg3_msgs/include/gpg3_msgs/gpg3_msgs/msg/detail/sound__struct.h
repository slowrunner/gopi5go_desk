// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from gpg3_msgs:msg/Sound.idl
// generated code does not contain a copyright notice

#ifndef GPG3_MSGS__MSG__DETAIL__SOUND__STRUCT_H_
#define GPG3_MSGS__MSG__DETAIL__SOUND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'OFF'.
enum
{
  gpg3_msgs__msg__Sound__OFF = 0
};

/// Constant 'ON'.
enum
{
  gpg3_msgs__msg__Sound__ON = 1
};

/// Constant 'LOW_BATTERY'.
enum
{
  gpg3_msgs__msg__Sound__LOW_BATTERY = 2
};

/// Constant 'ERROR'.
enum
{
  gpg3_msgs__msg__Sound__ERROR = 3
};

/// Constant 'BUTTON1'.
enum
{
  gpg3_msgs__msg__Sound__BUTTON1 = 4
};

/// Constant 'BUTTON2'.
enum
{
  gpg3_msgs__msg__Sound__BUTTON2 = 5
};

/// Struct defined in msg/Sound in the package gpg3_msgs.
/**
  * CONSTANTS
 */
typedef struct gpg3_msgs__msg__Sound
{
  /// Messages
  uint8_t value;
} gpg3_msgs__msg__Sound;

// Struct for a sequence of gpg3_msgs__msg__Sound.
typedef struct gpg3_msgs__msg__Sound__Sequence
{
  gpg3_msgs__msg__Sound * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gpg3_msgs__msg__Sound__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GPG3_MSGS__MSG__DETAIL__SOUND__STRUCT_H_
