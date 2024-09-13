// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from gpg3_msgs:msg/VersionInfo.idl
// generated code does not contain a copyright notice

#ifndef GPG3_MSGS__MSG__DETAIL__VERSION_INFO__BUILDER_HPP_
#define GPG3_MSGS__MSG__DETAIL__VERSION_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "gpg3_msgs/msg/detail/version_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace gpg3_msgs
{

namespace msg
{

namespace builder
{

class Init_VersionInfo_software
{
public:
  explicit Init_VersionInfo_software(::gpg3_msgs::msg::VersionInfo & msg)
  : msg_(msg)
  {}
  ::gpg3_msgs::msg::VersionInfo software(::gpg3_msgs::msg::VersionInfo::_software_type arg)
  {
    msg_.software = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gpg3_msgs::msg::VersionInfo msg_;
};

class Init_VersionInfo_firmware
{
public:
  explicit Init_VersionInfo_firmware(::gpg3_msgs::msg::VersionInfo & msg)
  : msg_(msg)
  {}
  Init_VersionInfo_software firmware(::gpg3_msgs::msg::VersionInfo::_firmware_type arg)
  {
    msg_.firmware = std::move(arg);
    return Init_VersionInfo_software(msg_);
  }

private:
  ::gpg3_msgs::msg::VersionInfo msg_;
};

class Init_VersionInfo_hardware
{
public:
  Init_VersionInfo_hardware()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VersionInfo_firmware hardware(::gpg3_msgs::msg::VersionInfo::_hardware_type arg)
  {
    msg_.hardware = std::move(arg);
    return Init_VersionInfo_firmware(msg_);
  }

private:
  ::gpg3_msgs::msg::VersionInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::gpg3_msgs::msg::VersionInfo>()
{
  return gpg3_msgs::msg::builder::Init_VersionInfo_hardware();
}

}  // namespace gpg3_msgs

#endif  // GPG3_MSGS__MSG__DETAIL__VERSION_INFO__BUILDER_HPP_
