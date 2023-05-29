// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from custom_interfaces:srv/ScanI2Cconnect.idl
// generated code does not contain a copyright notice
#include "custom_interfaces/srv/detail/scan_i2_cconnect__rosidl_typesupport_fastrtps_cpp.hpp"
#include "custom_interfaces/srv/detail/scan_i2_cconnect__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace custom_interfaces
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_custom_interfaces
cdr_serialize(
  const custom_interfaces::srv::ScanI2Cconnect_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: command
  cdr << ros_message.command;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_custom_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  custom_interfaces::srv::ScanI2Cconnect_Request & ros_message)
{
  // Member: command
  cdr >> ros_message.command;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_custom_interfaces
get_serialized_size(
  const custom_interfaces::srv::ScanI2Cconnect_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: command
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.command.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_custom_interfaces
max_serialized_size_ScanI2Cconnect_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: command
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static bool _ScanI2Cconnect_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const custom_interfaces::srv::ScanI2Cconnect_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ScanI2Cconnect_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<custom_interfaces::srv::ScanI2Cconnect_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ScanI2Cconnect_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const custom_interfaces::srv::ScanI2Cconnect_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ScanI2Cconnect_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ScanI2Cconnect_Request(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _ScanI2Cconnect_Request__callbacks = {
  "custom_interfaces::srv",
  "ScanI2Cconnect_Request",
  _ScanI2Cconnect_Request__cdr_serialize,
  _ScanI2Cconnect_Request__cdr_deserialize,
  _ScanI2Cconnect_Request__get_serialized_size,
  _ScanI2Cconnect_Request__max_serialized_size
};

static rosidl_message_type_support_t _ScanI2Cconnect_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ScanI2Cconnect_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace custom_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_custom_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<custom_interfaces::srv::ScanI2Cconnect_Request>()
{
  return &custom_interfaces::srv::typesupport_fastrtps_cpp::_ScanI2Cconnect_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, custom_interfaces, srv, ScanI2Cconnect_Request)() {
  return &custom_interfaces::srv::typesupport_fastrtps_cpp::_ScanI2Cconnect_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace custom_interfaces
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_custom_interfaces
cdr_serialize(
  const custom_interfaces::srv::ScanI2Cconnect_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: output
  cdr << ros_message.output;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_custom_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  custom_interfaces::srv::ScanI2Cconnect_Response & ros_message)
{
  // Member: output
  cdr >> ros_message.output;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_custom_interfaces
get_serialized_size(
  const custom_interfaces::srv::ScanI2Cconnect_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: output
  {
    size_t item_size = sizeof(ros_message.output);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_custom_interfaces
max_serialized_size_ScanI2Cconnect_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: output
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static bool _ScanI2Cconnect_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const custom_interfaces::srv::ScanI2Cconnect_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ScanI2Cconnect_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<custom_interfaces::srv::ScanI2Cconnect_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ScanI2Cconnect_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const custom_interfaces::srv::ScanI2Cconnect_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ScanI2Cconnect_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ScanI2Cconnect_Response(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _ScanI2Cconnect_Response__callbacks = {
  "custom_interfaces::srv",
  "ScanI2Cconnect_Response",
  _ScanI2Cconnect_Response__cdr_serialize,
  _ScanI2Cconnect_Response__cdr_deserialize,
  _ScanI2Cconnect_Response__get_serialized_size,
  _ScanI2Cconnect_Response__max_serialized_size
};

static rosidl_message_type_support_t _ScanI2Cconnect_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ScanI2Cconnect_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace custom_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_custom_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<custom_interfaces::srv::ScanI2Cconnect_Response>()
{
  return &custom_interfaces::srv::typesupport_fastrtps_cpp::_ScanI2Cconnect_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, custom_interfaces, srv, ScanI2Cconnect_Response)() {
  return &custom_interfaces::srv::typesupport_fastrtps_cpp::_ScanI2Cconnect_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace custom_interfaces
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _ScanI2Cconnect__callbacks = {
  "custom_interfaces::srv",
  "ScanI2Cconnect",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, custom_interfaces, srv, ScanI2Cconnect_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, custom_interfaces, srv, ScanI2Cconnect_Response)(),
};

static rosidl_service_type_support_t _ScanI2Cconnect__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ScanI2Cconnect__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace custom_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_custom_interfaces
const rosidl_service_type_support_t *
get_service_type_support_handle<custom_interfaces::srv::ScanI2Cconnect>()
{
  return &custom_interfaces::srv::typesupport_fastrtps_cpp::_ScanI2Cconnect__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, custom_interfaces, srv, ScanI2Cconnect)() {
  return &custom_interfaces::srv::typesupport_fastrtps_cpp::_ScanI2Cconnect__handle;
}

#ifdef __cplusplus
}
#endif