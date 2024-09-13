// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from gpg3_msgs:msg/SensorState.idl
// generated code does not contain a copyright notice

#ifndef GPG3_MSGS__MSG__DETAIL__SENSOR_STATE__BUILDER_HPP_
#define GPG3_MSGS__MSG__DETAIL__SENSOR_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "gpg3_msgs/msg/detail/sensor_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace gpg3_msgs
{

namespace msg
{

namespace builder
{

class Init_SensorState_battery
{
public:
  explicit Init_SensorState_battery(::gpg3_msgs::msg::SensorState & msg)
  : msg_(msg)
  {}
  ::gpg3_msgs::msg::SensorState battery(::gpg3_msgs::msg::SensorState::_battery_type arg)
  {
    msg_.battery = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gpg3_msgs::msg::SensorState msg_;
};

class Init_SensorState_right_encoder
{
public:
  explicit Init_SensorState_right_encoder(::gpg3_msgs::msg::SensorState & msg)
  : msg_(msg)
  {}
  Init_SensorState_battery right_encoder(::gpg3_msgs::msg::SensorState::_right_encoder_type arg)
  {
    msg_.right_encoder = std::move(arg);
    return Init_SensorState_battery(msg_);
  }

private:
  ::gpg3_msgs::msg::SensorState msg_;
};

class Init_SensorState_left_encoder
{
public:
  explicit Init_SensorState_left_encoder(::gpg3_msgs::msg::SensorState & msg)
  : msg_(msg)
  {}
  Init_SensorState_right_encoder left_encoder(::gpg3_msgs::msg::SensorState::_left_encoder_type arg)
  {
    msg_.left_encoder = std::move(arg);
    return Init_SensorState_right_encoder(msg_);
  }

private:
  ::gpg3_msgs::msg::SensorState msg_;
};

class Init_SensorState_torque
{
public:
  explicit Init_SensorState_torque(::gpg3_msgs::msg::SensorState & msg)
  : msg_(msg)
  {}
  Init_SensorState_left_encoder torque(::gpg3_msgs::msg::SensorState::_torque_type arg)
  {
    msg_.torque = std::move(arg);
    return Init_SensorState_left_encoder(msg_);
  }

private:
  ::gpg3_msgs::msg::SensorState msg_;
};

class Init_SensorState_button
{
public:
  explicit Init_SensorState_button(::gpg3_msgs::msg::SensorState & msg)
  : msg_(msg)
  {}
  Init_SensorState_torque button(::gpg3_msgs::msg::SensorState::_button_type arg)
  {
    msg_.button = std::move(arg);
    return Init_SensorState_torque(msg_);
  }

private:
  ::gpg3_msgs::msg::SensorState msg_;
};

class Init_SensorState_led
{
public:
  explicit Init_SensorState_led(::gpg3_msgs::msg::SensorState & msg)
  : msg_(msg)
  {}
  Init_SensorState_button led(::gpg3_msgs::msg::SensorState::_led_type arg)
  {
    msg_.led = std::move(arg);
    return Init_SensorState_button(msg_);
  }

private:
  ::gpg3_msgs::msg::SensorState msg_;
};

class Init_SensorState_illumination
{
public:
  explicit Init_SensorState_illumination(::gpg3_msgs::msg::SensorState & msg)
  : msg_(msg)
  {}
  Init_SensorState_led illumination(::gpg3_msgs::msg::SensorState::_illumination_type arg)
  {
    msg_.illumination = std::move(arg);
    return Init_SensorState_led(msg_);
  }

private:
  ::gpg3_msgs::msg::SensorState msg_;
};

class Init_SensorState_sonar
{
public:
  explicit Init_SensorState_sonar(::gpg3_msgs::msg::SensorState & msg)
  : msg_(msg)
  {}
  Init_SensorState_illumination sonar(::gpg3_msgs::msg::SensorState::_sonar_type arg)
  {
    msg_.sonar = std::move(arg);
    return Init_SensorState_illumination(msg_);
  }

private:
  ::gpg3_msgs::msg::SensorState msg_;
};

class Init_SensorState_cliff
{
public:
  explicit Init_SensorState_cliff(::gpg3_msgs::msg::SensorState & msg)
  : msg_(msg)
  {}
  Init_SensorState_sonar cliff(::gpg3_msgs::msg::SensorState::_cliff_type arg)
  {
    msg_.cliff = std::move(arg);
    return Init_SensorState_sonar(msg_);
  }

private:
  ::gpg3_msgs::msg::SensorState msg_;
};

class Init_SensorState_bumper
{
public:
  explicit Init_SensorState_bumper(::gpg3_msgs::msg::SensorState & msg)
  : msg_(msg)
  {}
  Init_SensorState_cliff bumper(::gpg3_msgs::msg::SensorState::_bumper_type arg)
  {
    msg_.bumper = std::move(arg);
    return Init_SensorState_cliff(msg_);
  }

private:
  ::gpg3_msgs::msg::SensorState msg_;
};

class Init_SensorState_header
{
public:
  Init_SensorState_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SensorState_bumper header(::gpg3_msgs::msg::SensorState::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_SensorState_bumper(msg_);
  }

private:
  ::gpg3_msgs::msg::SensorState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::gpg3_msgs::msg::SensorState>()
{
  return gpg3_msgs::msg::builder::Init_SensorState_header();
}

}  // namespace gpg3_msgs

#endif  // GPG3_MSGS__MSG__DETAIL__SENSOR_STATE__BUILDER_HPP_
