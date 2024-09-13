// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from gpg3_msgs:msg/SensorState.idl
// generated code does not contain a copyright notice

#ifndef GPG3_MSGS__MSG__DETAIL__SENSOR_STATE__STRUCT_H_
#define GPG3_MSGS__MSG__DETAIL__SENSOR_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'BUMPER_FORWARD'.
enum
{
  gpg3_msgs__msg__SensorState__BUMPER_FORWARD = 1
};

/// Constant 'BUMPER_BACKWARD'.
enum
{
  gpg3_msgs__msg__SensorState__BUMPER_BACKWARD = 2
};

/// Constant 'CLIFF'.
/**
  * Cliff sensor states (states are combined, when multiple cliff sensors are triggered)
 */
enum
{
  gpg3_msgs__msg__SensorState__CLIFF = 1
};

/// Constant 'SONAR'.
/**
  * Sonar sensor states (states are combined, when multiple sonar sensors are triggered)
 */
enum
{
  gpg3_msgs__msg__SensorState__SONAR = 1
};

/// Constant 'ILLUMINATION'.
/**
  * Illumination sensor (states are combined, when multiple illumination sensors are triggered)
 */
enum
{
  gpg3_msgs__msg__SensorState__ILLUMINATION = 1
};

/// Constant 'BUTTON0'.
/**
  * Button states (states are combined, when multiple buttons are pressed)
 */
enum
{
  gpg3_msgs__msg__SensorState__BUTTON0 = 1
};

/// Constant 'BUTTON1'.
enum
{
  gpg3_msgs__msg__SensorState__BUTTON1 = 2
};

/// Constant 'ERROR_LEFT_MOTOR'.
/**
  * Motor errors
 */
enum
{
  gpg3_msgs__msg__SensorState__ERROR_LEFT_MOTOR = 1
};

/// Constant 'ERROR_RIGHT_MOTOR'.
enum
{
  gpg3_msgs__msg__SensorState__ERROR_RIGHT_MOTOR = 2
};

/// Constant 'TORQUE_ON'.
/**
  * Motor torque
 */
enum
{
  gpg3_msgs__msg__SensorState__TORQUE_ON = 1
};

/// Constant 'TORQUE_OFF'.
enum
{
  gpg3_msgs__msg__SensorState__TORQUE_OFF = 2
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/SensorState in the package gpg3_msgs.
/**
  * CONSTANTS
  *
  * Bumper states (states are combined, when multiple bumpers are pressed)
 */
typedef struct gpg3_msgs__msg__SensorState
{
  /// Messages
  std_msgs__msg__Header header;
  uint8_t bumper;
  float cliff;
  float sonar;
  float illumination;
  uint8_t led;
  uint8_t button;
  bool torque;
  /// (-2,147,483,648 ~ 2,147,483,647)
  int32_t left_encoder;
  /// (-2,147,483,648 ~ 2,147,483,647)
  int32_t right_encoder;
  float battery;
} gpg3_msgs__msg__SensorState;

// Struct for a sequence of gpg3_msgs__msg__SensorState.
typedef struct gpg3_msgs__msg__SensorState__Sequence
{
  gpg3_msgs__msg__SensorState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gpg3_msgs__msg__SensorState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GPG3_MSGS__MSG__DETAIL__SENSOR_STATE__STRUCT_H_
