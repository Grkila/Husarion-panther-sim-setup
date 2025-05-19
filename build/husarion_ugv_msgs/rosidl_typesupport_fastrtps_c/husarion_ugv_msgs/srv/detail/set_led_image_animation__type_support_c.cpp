// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from husarion_ugv_msgs:srv/SetLEDImageAnimation.idl
// generated code does not contain a copyright notice
#include "husarion_ugv_msgs/srv/detail/set_led_image_animation__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "husarion_ugv_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "husarion_ugv_msgs/srv/detail/set_led_image_animation__struct.h"
#include "husarion_ugv_msgs/srv/detail/set_led_image_animation__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "husarion_ugv_msgs/msg/detail/led_image_animation__functions.h"  // front, rear

// forward declare type support functions
size_t get_serialized_size_husarion_ugv_msgs__msg__LEDImageAnimation(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_husarion_ugv_msgs__msg__LEDImageAnimation(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, husarion_ugv_msgs, msg, LEDImageAnimation)();


using _SetLEDImageAnimation_Request__ros_msg_type = husarion_ugv_msgs__srv__SetLEDImageAnimation_Request;

static bool _SetLEDImageAnimation_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SetLEDImageAnimation_Request__ros_msg_type * ros_message = static_cast<const _SetLEDImageAnimation_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: front
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, husarion_ugv_msgs, msg, LEDImageAnimation
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->front, cdr))
    {
      return false;
    }
  }

  // Field name: rear
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, husarion_ugv_msgs, msg, LEDImageAnimation
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->rear, cdr))
    {
      return false;
    }
  }

  // Field name: interrupting
  {
    cdr << (ros_message->interrupting ? true : false);
  }

  // Field name: repeating
  {
    cdr << (ros_message->repeating ? true : false);
  }

  return true;
}

static bool _SetLEDImageAnimation_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SetLEDImageAnimation_Request__ros_msg_type * ros_message = static_cast<_SetLEDImageAnimation_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: front
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, husarion_ugv_msgs, msg, LEDImageAnimation
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->front))
    {
      return false;
    }
  }

  // Field name: rear
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, husarion_ugv_msgs, msg, LEDImageAnimation
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->rear))
    {
      return false;
    }
  }

  // Field name: interrupting
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->interrupting = tmp ? true : false;
  }

  // Field name: repeating
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->repeating = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_husarion_ugv_msgs
size_t get_serialized_size_husarion_ugv_msgs__srv__SetLEDImageAnimation_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SetLEDImageAnimation_Request__ros_msg_type * ros_message = static_cast<const _SetLEDImageAnimation_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name front

  current_alignment += get_serialized_size_husarion_ugv_msgs__msg__LEDImageAnimation(
    &(ros_message->front), current_alignment);
  // field.name rear

  current_alignment += get_serialized_size_husarion_ugv_msgs__msg__LEDImageAnimation(
    &(ros_message->rear), current_alignment);
  // field.name interrupting
  {
    size_t item_size = sizeof(ros_message->interrupting);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name repeating
  {
    size_t item_size = sizeof(ros_message->repeating);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SetLEDImageAnimation_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_husarion_ugv_msgs__srv__SetLEDImageAnimation_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_husarion_ugv_msgs
size_t max_serialized_size_husarion_ugv_msgs__srv__SetLEDImageAnimation_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: front
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_husarion_ugv_msgs__msg__LEDImageAnimation(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: rear
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_husarion_ugv_msgs__msg__LEDImageAnimation(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: interrupting
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: repeating
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = husarion_ugv_msgs__srv__SetLEDImageAnimation_Request;
    is_plain =
      (
      offsetof(DataType, repeating) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _SetLEDImageAnimation_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_husarion_ugv_msgs__srv__SetLEDImageAnimation_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SetLEDImageAnimation_Request = {
  "husarion_ugv_msgs::srv",
  "SetLEDImageAnimation_Request",
  _SetLEDImageAnimation_Request__cdr_serialize,
  _SetLEDImageAnimation_Request__cdr_deserialize,
  _SetLEDImageAnimation_Request__get_serialized_size,
  _SetLEDImageAnimation_Request__max_serialized_size
};

static rosidl_message_type_support_t _SetLEDImageAnimation_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SetLEDImageAnimation_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, husarion_ugv_msgs, srv, SetLEDImageAnimation_Request)() {
  return &_SetLEDImageAnimation_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "husarion_ugv_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "husarion_ugv_msgs/srv/detail/set_led_image_animation__struct.h"
// already included above
// #include "husarion_ugv_msgs/srv/detail/set_led_image_animation__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // message
#include "rosidl_runtime_c/string_functions.h"  // message

// forward declare type support functions


using _SetLEDImageAnimation_Response__ros_msg_type = husarion_ugv_msgs__srv__SetLEDImageAnimation_Response;

static bool _SetLEDImageAnimation_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SetLEDImageAnimation_Response__ros_msg_type * ros_message = static_cast<const _SetLEDImageAnimation_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    cdr << (ros_message->success ? true : false);
  }

  // Field name: message
  {
    const rosidl_runtime_c__String * str = &ros_message->message;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _SetLEDImageAnimation_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SetLEDImageAnimation_Response__ros_msg_type * ros_message = static_cast<_SetLEDImageAnimation_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->success = tmp ? true : false;
  }

  // Field name: message
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->message.data) {
      rosidl_runtime_c__String__init(&ros_message->message);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->message,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'message'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_husarion_ugv_msgs
size_t get_serialized_size_husarion_ugv_msgs__srv__SetLEDImageAnimation_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SetLEDImageAnimation_Response__ros_msg_type * ros_message = static_cast<const _SetLEDImageAnimation_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name success
  {
    size_t item_size = sizeof(ros_message->success);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name message
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->message.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _SetLEDImageAnimation_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_husarion_ugv_msgs__srv__SetLEDImageAnimation_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_husarion_ugv_msgs
size_t max_serialized_size_husarion_ugv_msgs__srv__SetLEDImageAnimation_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: success
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: message
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

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = husarion_ugv_msgs__srv__SetLEDImageAnimation_Response;
    is_plain =
      (
      offsetof(DataType, message) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _SetLEDImageAnimation_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_husarion_ugv_msgs__srv__SetLEDImageAnimation_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SetLEDImageAnimation_Response = {
  "husarion_ugv_msgs::srv",
  "SetLEDImageAnimation_Response",
  _SetLEDImageAnimation_Response__cdr_serialize,
  _SetLEDImageAnimation_Response__cdr_deserialize,
  _SetLEDImageAnimation_Response__get_serialized_size,
  _SetLEDImageAnimation_Response__max_serialized_size
};

static rosidl_message_type_support_t _SetLEDImageAnimation_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SetLEDImageAnimation_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, husarion_ugv_msgs, srv, SetLEDImageAnimation_Response)() {
  return &_SetLEDImageAnimation_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "husarion_ugv_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "husarion_ugv_msgs/srv/set_led_image_animation.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t SetLEDImageAnimation__callbacks = {
  "husarion_ugv_msgs::srv",
  "SetLEDImageAnimation",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, husarion_ugv_msgs, srv, SetLEDImageAnimation_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, husarion_ugv_msgs, srv, SetLEDImageAnimation_Response)(),
};

static rosidl_service_type_support_t SetLEDImageAnimation__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &SetLEDImageAnimation__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, husarion_ugv_msgs, srv, SetLEDImageAnimation)() {
  return &SetLEDImageAnimation__handle;
}

#if defined(__cplusplus)
}
#endif
