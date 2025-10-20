// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from dls2_msgs:msg/ImuMsg.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "dls2_msgs/msg/detail/imu_msg__rosidl_typesupport_introspection_c.h"
#include "dls2_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "dls2_msgs/msg/detail/imu_msg__functions.h"
#include "dls2_msgs/msg/detail/imu_msg__struct.h"


// Include directives for member types
// Member `frame_id`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void dls2_msgs__msg__ImuMsg__rosidl_typesupport_introspection_c__ImuMsg_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  dls2_msgs__msg__ImuMsg__init(message_memory);
}

void dls2_msgs__msg__ImuMsg__rosidl_typesupport_introspection_c__ImuMsg_fini_function(void * message_memory)
{
  dls2_msgs__msg__ImuMsg__fini(message_memory);
}

size_t dls2_msgs__msg__ImuMsg__rosidl_typesupport_introspection_c__size_function__ImuMsg__orientation(
  const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * dls2_msgs__msg__ImuMsg__rosidl_typesupport_introspection_c__get_const_function__ImuMsg__orientation(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * dls2_msgs__msg__ImuMsg__rosidl_typesupport_introspection_c__get_function__ImuMsg__orientation(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void dls2_msgs__msg__ImuMsg__rosidl_typesupport_introspection_c__fetch_function__ImuMsg__orientation(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    dls2_msgs__msg__ImuMsg__rosidl_typesupport_introspection_c__get_const_function__ImuMsg__orientation(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void dls2_msgs__msg__ImuMsg__rosidl_typesupport_introspection_c__assign_function__ImuMsg__orientation(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    dls2_msgs__msg__ImuMsg__rosidl_typesupport_introspection_c__get_function__ImuMsg__orientation(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

size_t dls2_msgs__msg__ImuMsg__rosidl_typesupport_introspection_c__size_function__ImuMsg__orientation_covariance(
  const void * untyped_member)
{
  (void)untyped_member;
  return 9;
}

const void * dls2_msgs__msg__ImuMsg__rosidl_typesupport_introspection_c__get_const_function__ImuMsg__orientation_covariance(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * dls2_msgs__msg__ImuMsg__rosidl_typesupport_introspection_c__get_function__ImuMsg__orientation_covariance(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void dls2_msgs__msg__ImuMsg__rosidl_typesupport_introspection_c__fetch_function__ImuMsg__orientation_covariance(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    dls2_msgs__msg__ImuMsg__rosidl_typesupport_introspection_c__get_const_function__ImuMsg__orientation_covariance(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void dls2_msgs__msg__ImuMsg__rosidl_typesupport_introspection_c__assign_function__ImuMsg__orientation_covariance(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    dls2_msgs__msg__ImuMsg__rosidl_typesupport_introspection_c__get_function__ImuMsg__orientation_covariance(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

size_t dls2_msgs__msg__ImuMsg__rosidl_typesupport_introspection_c__size_function__ImuMsg__angular_velocity(
  const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * dls2_msgs__msg__ImuMsg__rosidl_typesupport_introspection_c__get_const_function__ImuMsg__angular_velocity(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * dls2_msgs__msg__ImuMsg__rosidl_typesupport_introspection_c__get_function__ImuMsg__angular_velocity(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void dls2_msgs__msg__ImuMsg__rosidl_typesupport_introspection_c__fetch_function__ImuMsg__angular_velocity(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    dls2_msgs__msg__ImuMsg__rosidl_typesupport_introspection_c__get_const_function__ImuMsg__angular_velocity(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void dls2_msgs__msg__ImuMsg__rosidl_typesupport_introspection_c__assign_function__ImuMsg__angular_velocity(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    dls2_msgs__msg__ImuMsg__rosidl_typesupport_introspection_c__get_function__ImuMsg__angular_velocity(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

size_t dls2_msgs__msg__ImuMsg__rosidl_typesupport_introspection_c__size_function__ImuMsg__angular_velocity_covariance(
  const void * untyped_member)
{
  (void)untyped_member;
  return 9;
}

const void * dls2_msgs__msg__ImuMsg__rosidl_typesupport_introspection_c__get_const_function__ImuMsg__angular_velocity_covariance(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * dls2_msgs__msg__ImuMsg__rosidl_typesupport_introspection_c__get_function__ImuMsg__angular_velocity_covariance(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void dls2_msgs__msg__ImuMsg__rosidl_typesupport_introspection_c__fetch_function__ImuMsg__angular_velocity_covariance(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    dls2_msgs__msg__ImuMsg__rosidl_typesupport_introspection_c__get_const_function__ImuMsg__angular_velocity_covariance(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void dls2_msgs__msg__ImuMsg__rosidl_typesupport_introspection_c__assign_function__ImuMsg__angular_velocity_covariance(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    dls2_msgs__msg__ImuMsg__rosidl_typesupport_introspection_c__get_function__ImuMsg__angular_velocity_covariance(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

size_t dls2_msgs__msg__ImuMsg__rosidl_typesupport_introspection_c__size_function__ImuMsg__linear_acceleration(
  const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * dls2_msgs__msg__ImuMsg__rosidl_typesupport_introspection_c__get_const_function__ImuMsg__linear_acceleration(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * dls2_msgs__msg__ImuMsg__rosidl_typesupport_introspection_c__get_function__ImuMsg__linear_acceleration(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void dls2_msgs__msg__ImuMsg__rosidl_typesupport_introspection_c__fetch_function__ImuMsg__linear_acceleration(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    dls2_msgs__msg__ImuMsg__rosidl_typesupport_introspection_c__get_const_function__ImuMsg__linear_acceleration(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void dls2_msgs__msg__ImuMsg__rosidl_typesupport_introspection_c__assign_function__ImuMsg__linear_acceleration(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    dls2_msgs__msg__ImuMsg__rosidl_typesupport_introspection_c__get_function__ImuMsg__linear_acceleration(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

size_t dls2_msgs__msg__ImuMsg__rosidl_typesupport_introspection_c__size_function__ImuMsg__linear_acceleration_covariance(
  const void * untyped_member)
{
  (void)untyped_member;
  return 9;
}

const void * dls2_msgs__msg__ImuMsg__rosidl_typesupport_introspection_c__get_const_function__ImuMsg__linear_acceleration_covariance(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * dls2_msgs__msg__ImuMsg__rosidl_typesupport_introspection_c__get_function__ImuMsg__linear_acceleration_covariance(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void dls2_msgs__msg__ImuMsg__rosidl_typesupport_introspection_c__fetch_function__ImuMsg__linear_acceleration_covariance(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    dls2_msgs__msg__ImuMsg__rosidl_typesupport_introspection_c__get_const_function__ImuMsg__linear_acceleration_covariance(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void dls2_msgs__msg__ImuMsg__rosidl_typesupport_introspection_c__assign_function__ImuMsg__linear_acceleration_covariance(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    dls2_msgs__msg__ImuMsg__rosidl_typesupport_introspection_c__get_function__ImuMsg__linear_acceleration_covariance(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember dls2_msgs__msg__ImuMsg__rosidl_typesupport_introspection_c__ImuMsg_message_member_array[9] = {
  {
    "frame_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dls2_msgs__msg__ImuMsg, frame_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sequence_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dls2_msgs__msg__ImuMsg, sequence_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "timestamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dls2_msgs__msg__ImuMsg, timestamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "orientation",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(dls2_msgs__msg__ImuMsg, orientation),  // bytes offset in struct
    NULL,  // default value
    dls2_msgs__msg__ImuMsg__rosidl_typesupport_introspection_c__size_function__ImuMsg__orientation,  // size() function pointer
    dls2_msgs__msg__ImuMsg__rosidl_typesupport_introspection_c__get_const_function__ImuMsg__orientation,  // get_const(index) function pointer
    dls2_msgs__msg__ImuMsg__rosidl_typesupport_introspection_c__get_function__ImuMsg__orientation,  // get(index) function pointer
    dls2_msgs__msg__ImuMsg__rosidl_typesupport_introspection_c__fetch_function__ImuMsg__orientation,  // fetch(index, &value) function pointer
    dls2_msgs__msg__ImuMsg__rosidl_typesupport_introspection_c__assign_function__ImuMsg__orientation,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "orientation_covariance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    9,  // array size
    false,  // is upper bound
    offsetof(dls2_msgs__msg__ImuMsg, orientation_covariance),  // bytes offset in struct
    NULL,  // default value
    dls2_msgs__msg__ImuMsg__rosidl_typesupport_introspection_c__size_function__ImuMsg__orientation_covariance,  // size() function pointer
    dls2_msgs__msg__ImuMsg__rosidl_typesupport_introspection_c__get_const_function__ImuMsg__orientation_covariance,  // get_const(index) function pointer
    dls2_msgs__msg__ImuMsg__rosidl_typesupport_introspection_c__get_function__ImuMsg__orientation_covariance,  // get(index) function pointer
    dls2_msgs__msg__ImuMsg__rosidl_typesupport_introspection_c__fetch_function__ImuMsg__orientation_covariance,  // fetch(index, &value) function pointer
    dls2_msgs__msg__ImuMsg__rosidl_typesupport_introspection_c__assign_function__ImuMsg__orientation_covariance,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "angular_velocity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(dls2_msgs__msg__ImuMsg, angular_velocity),  // bytes offset in struct
    NULL,  // default value
    dls2_msgs__msg__ImuMsg__rosidl_typesupport_introspection_c__size_function__ImuMsg__angular_velocity,  // size() function pointer
    dls2_msgs__msg__ImuMsg__rosidl_typesupport_introspection_c__get_const_function__ImuMsg__angular_velocity,  // get_const(index) function pointer
    dls2_msgs__msg__ImuMsg__rosidl_typesupport_introspection_c__get_function__ImuMsg__angular_velocity,  // get(index) function pointer
    dls2_msgs__msg__ImuMsg__rosidl_typesupport_introspection_c__fetch_function__ImuMsg__angular_velocity,  // fetch(index, &value) function pointer
    dls2_msgs__msg__ImuMsg__rosidl_typesupport_introspection_c__assign_function__ImuMsg__angular_velocity,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "angular_velocity_covariance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    9,  // array size
    false,  // is upper bound
    offsetof(dls2_msgs__msg__ImuMsg, angular_velocity_covariance),  // bytes offset in struct
    NULL,  // default value
    dls2_msgs__msg__ImuMsg__rosidl_typesupport_introspection_c__size_function__ImuMsg__angular_velocity_covariance,  // size() function pointer
    dls2_msgs__msg__ImuMsg__rosidl_typesupport_introspection_c__get_const_function__ImuMsg__angular_velocity_covariance,  // get_const(index) function pointer
    dls2_msgs__msg__ImuMsg__rosidl_typesupport_introspection_c__get_function__ImuMsg__angular_velocity_covariance,  // get(index) function pointer
    dls2_msgs__msg__ImuMsg__rosidl_typesupport_introspection_c__fetch_function__ImuMsg__angular_velocity_covariance,  // fetch(index, &value) function pointer
    dls2_msgs__msg__ImuMsg__rosidl_typesupport_introspection_c__assign_function__ImuMsg__angular_velocity_covariance,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "linear_acceleration",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(dls2_msgs__msg__ImuMsg, linear_acceleration),  // bytes offset in struct
    NULL,  // default value
    dls2_msgs__msg__ImuMsg__rosidl_typesupport_introspection_c__size_function__ImuMsg__linear_acceleration,  // size() function pointer
    dls2_msgs__msg__ImuMsg__rosidl_typesupport_introspection_c__get_const_function__ImuMsg__linear_acceleration,  // get_const(index) function pointer
    dls2_msgs__msg__ImuMsg__rosidl_typesupport_introspection_c__get_function__ImuMsg__linear_acceleration,  // get(index) function pointer
    dls2_msgs__msg__ImuMsg__rosidl_typesupport_introspection_c__fetch_function__ImuMsg__linear_acceleration,  // fetch(index, &value) function pointer
    dls2_msgs__msg__ImuMsg__rosidl_typesupport_introspection_c__assign_function__ImuMsg__linear_acceleration,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "linear_acceleration_covariance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    9,  // array size
    false,  // is upper bound
    offsetof(dls2_msgs__msg__ImuMsg, linear_acceleration_covariance),  // bytes offset in struct
    NULL,  // default value
    dls2_msgs__msg__ImuMsg__rosidl_typesupport_introspection_c__size_function__ImuMsg__linear_acceleration_covariance,  // size() function pointer
    dls2_msgs__msg__ImuMsg__rosidl_typesupport_introspection_c__get_const_function__ImuMsg__linear_acceleration_covariance,  // get_const(index) function pointer
    dls2_msgs__msg__ImuMsg__rosidl_typesupport_introspection_c__get_function__ImuMsg__linear_acceleration_covariance,  // get(index) function pointer
    dls2_msgs__msg__ImuMsg__rosidl_typesupport_introspection_c__fetch_function__ImuMsg__linear_acceleration_covariance,  // fetch(index, &value) function pointer
    dls2_msgs__msg__ImuMsg__rosidl_typesupport_introspection_c__assign_function__ImuMsg__linear_acceleration_covariance,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers dls2_msgs__msg__ImuMsg__rosidl_typesupport_introspection_c__ImuMsg_message_members = {
  "dls2_msgs__msg",  // message namespace
  "ImuMsg",  // message name
  9,  // number of fields
  sizeof(dls2_msgs__msg__ImuMsg),
  dls2_msgs__msg__ImuMsg__rosidl_typesupport_introspection_c__ImuMsg_message_member_array,  // message members
  dls2_msgs__msg__ImuMsg__rosidl_typesupport_introspection_c__ImuMsg_init_function,  // function to initialize message memory (memory has to be allocated)
  dls2_msgs__msg__ImuMsg__rosidl_typesupport_introspection_c__ImuMsg_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t dls2_msgs__msg__ImuMsg__rosidl_typesupport_introspection_c__ImuMsg_message_type_support_handle = {
  0,
  &dls2_msgs__msg__ImuMsg__rosidl_typesupport_introspection_c__ImuMsg_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_dls2_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dls2_msgs, msg, ImuMsg)() {
  if (!dls2_msgs__msg__ImuMsg__rosidl_typesupport_introspection_c__ImuMsg_message_type_support_handle.typesupport_identifier) {
    dls2_msgs__msg__ImuMsg__rosidl_typesupport_introspection_c__ImuMsg_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &dls2_msgs__msg__ImuMsg__rosidl_typesupport_introspection_c__ImuMsg_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
