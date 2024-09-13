// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dave_interfaces:srv/Undock.idl
// generated code does not contain a copyright notice

#ifndef DAVE_INTERFACES__SRV__DETAIL__UNDOCK__BUILDER_HPP_
#define DAVE_INTERFACES__SRV__DETAIL__UNDOCK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "dave_interfaces/srv/detail/undock__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace dave_interfaces
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dave_interfaces::srv::Undock_Request>()
{
  return ::dave_interfaces::srv::Undock_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace dave_interfaces


namespace dave_interfaces
{

namespace srv
{

namespace builder
{

class Init_Undock_Response_success
{
public:
  explicit Init_Undock_Response_success(::dave_interfaces::srv::Undock_Response & msg)
  : msg_(msg)
  {}
  ::dave_interfaces::srv::Undock_Response success(::dave_interfaces::srv::Undock_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dave_interfaces::srv::Undock_Response msg_;
};

class Init_Undock_Response_is_docked
{
public:
  Init_Undock_Response_is_docked()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Undock_Response_success is_docked(::dave_interfaces::srv::Undock_Response::_is_docked_type arg)
  {
    msg_.is_docked = std::move(arg);
    return Init_Undock_Response_success(msg_);
  }

private:
  ::dave_interfaces::srv::Undock_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dave_interfaces::srv::Undock_Response>()
{
  return dave_interfaces::srv::builder::Init_Undock_Response_is_docked();
}

}  // namespace dave_interfaces

#endif  // DAVE_INTERFACES__SRV__DETAIL__UNDOCK__BUILDER_HPP_
