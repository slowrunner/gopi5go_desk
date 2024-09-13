// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from gpg3_msgs:msg/Sound.idl
// generated code does not contain a copyright notice

#ifndef GPG3_MSGS__MSG__DETAIL__SOUND__TRAITS_HPP_
#define GPG3_MSGS__MSG__DETAIL__SOUND__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "gpg3_msgs/msg/detail/sound__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace gpg3_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Sound & msg,
  std::ostream & out)
{
  out << "{";
  // member: value
  {
    out << "value: ";
    rosidl_generator_traits::value_to_yaml(msg.value, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Sound & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "value: ";
    rosidl_generator_traits::value_to_yaml(msg.value, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Sound & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace gpg3_msgs

namespace rosidl_generator_traits
{

[[deprecated("use gpg3_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const gpg3_msgs::msg::Sound & msg,
  std::ostream & out, size_t indentation = 0)
{
  gpg3_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use gpg3_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const gpg3_msgs::msg::Sound & msg)
{
  return gpg3_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<gpg3_msgs::msg::Sound>()
{
  return "gpg3_msgs::msg::Sound";
}

template<>
inline const char * name<gpg3_msgs::msg::Sound>()
{
  return "gpg3_msgs/msg/Sound";
}

template<>
struct has_fixed_size<gpg3_msgs::msg::Sound>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<gpg3_msgs::msg::Sound>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<gpg3_msgs::msg::Sound>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // GPG3_MSGS__MSG__DETAIL__SOUND__TRAITS_HPP_
