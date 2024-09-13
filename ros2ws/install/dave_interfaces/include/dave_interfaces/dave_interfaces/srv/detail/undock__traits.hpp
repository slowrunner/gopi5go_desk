// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from dave_interfaces:srv/Undock.idl
// generated code does not contain a copyright notice

#ifndef DAVE_INTERFACES__SRV__DETAIL__UNDOCK__TRAITS_HPP_
#define DAVE_INTERFACES__SRV__DETAIL__UNDOCK__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "dave_interfaces/srv/detail/undock__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace dave_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const Undock_Request & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Undock_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Undock_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace dave_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use dave_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const dave_interfaces::srv::Undock_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  dave_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use dave_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const dave_interfaces::srv::Undock_Request & msg)
{
  return dave_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<dave_interfaces::srv::Undock_Request>()
{
  return "dave_interfaces::srv::Undock_Request";
}

template<>
inline const char * name<dave_interfaces::srv::Undock_Request>()
{
  return "dave_interfaces/srv/Undock_Request";
}

template<>
struct has_fixed_size<dave_interfaces::srv::Undock_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<dave_interfaces::srv::Undock_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<dave_interfaces::srv::Undock_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace dave_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const Undock_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: is_docked
  {
    out << "is_docked: ";
    rosidl_generator_traits::value_to_yaml(msg.is_docked, out);
    out << ", ";
  }

  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Undock_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: is_docked
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_docked: ";
    rosidl_generator_traits::value_to_yaml(msg.is_docked, out);
    out << "\n";
  }

  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Undock_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace dave_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use dave_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const dave_interfaces::srv::Undock_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  dave_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use dave_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const dave_interfaces::srv::Undock_Response & msg)
{
  return dave_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<dave_interfaces::srv::Undock_Response>()
{
  return "dave_interfaces::srv::Undock_Response";
}

template<>
inline const char * name<dave_interfaces::srv::Undock_Response>()
{
  return "dave_interfaces/srv/Undock_Response";
}

template<>
struct has_fixed_size<dave_interfaces::srv::Undock_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<dave_interfaces::srv::Undock_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<dave_interfaces::srv::Undock_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<dave_interfaces::srv::Undock>()
{
  return "dave_interfaces::srv::Undock";
}

template<>
inline const char * name<dave_interfaces::srv::Undock>()
{
  return "dave_interfaces/srv/Undock";
}

template<>
struct has_fixed_size<dave_interfaces::srv::Undock>
  : std::integral_constant<
    bool,
    has_fixed_size<dave_interfaces::srv::Undock_Request>::value &&
    has_fixed_size<dave_interfaces::srv::Undock_Response>::value
  >
{
};

template<>
struct has_bounded_size<dave_interfaces::srv::Undock>
  : std::integral_constant<
    bool,
    has_bounded_size<dave_interfaces::srv::Undock_Request>::value &&
    has_bounded_size<dave_interfaces::srv::Undock_Response>::value
  >
{
};

template<>
struct is_service<dave_interfaces::srv::Undock>
  : std::true_type
{
};

template<>
struct is_service_request<dave_interfaces::srv::Undock_Request>
  : std::true_type
{
};

template<>
struct is_service_response<dave_interfaces::srv::Undock_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // DAVE_INTERFACES__SRV__DETAIL__UNDOCK__TRAITS_HPP_
