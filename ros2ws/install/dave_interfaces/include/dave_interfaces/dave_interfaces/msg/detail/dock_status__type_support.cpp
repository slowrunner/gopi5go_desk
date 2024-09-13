// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from dave_interfaces:msg/DockStatus.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "dave_interfaces/msg/detail/dock_status__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace dave_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void DockStatus_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) dave_interfaces::msg::DockStatus(_init);
}

void DockStatus_fini_function(void * message_memory)
{
  auto typed_message = static_cast<dave_interfaces::msg::DockStatus *>(message_memory);
  typed_message->~DockStatus();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember DockStatus_message_member_array[2] = {
  {
    "is_docked",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dave_interfaces::msg::DockStatus, is_docked),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "is_charging",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dave_interfaces::msg::DockStatus, is_charging),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers DockStatus_message_members = {
  "dave_interfaces::msg",  // message namespace
  "DockStatus",  // message name
  2,  // number of fields
  sizeof(dave_interfaces::msg::DockStatus),
  DockStatus_message_member_array,  // message members
  DockStatus_init_function,  // function to initialize message memory (memory has to be allocated)
  DockStatus_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t DockStatus_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &DockStatus_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace dave_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<dave_interfaces::msg::DockStatus>()
{
  return &::dave_interfaces::msg::rosidl_typesupport_introspection_cpp::DockStatus_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, dave_interfaces, msg, DockStatus)() {
  return &::dave_interfaces::msg::rosidl_typesupport_introspection_cpp::DockStatus_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
