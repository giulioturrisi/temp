// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dls2_msgs:msg/ImuMsg.idl
// generated code does not contain a copyright notice

#ifndef DLS2_MSGS__MSG__DETAIL__IMU_MSG__BUILDER_HPP_
#define DLS2_MSGS__MSG__DETAIL__IMU_MSG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "dls2_msgs/msg/detail/imu_msg__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace dls2_msgs
{

namespace msg
{

namespace builder
{

class Init_ImuMsg_linear_acceleration_covariance
{
public:
  explicit Init_ImuMsg_linear_acceleration_covariance(::dls2_msgs::msg::ImuMsg & msg)
  : msg_(msg)
  {}
  ::dls2_msgs::msg::ImuMsg linear_acceleration_covariance(::dls2_msgs::msg::ImuMsg::_linear_acceleration_covariance_type arg)
  {
    msg_.linear_acceleration_covariance = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dls2_msgs::msg::ImuMsg msg_;
};

class Init_ImuMsg_linear_acceleration
{
public:
  explicit Init_ImuMsg_linear_acceleration(::dls2_msgs::msg::ImuMsg & msg)
  : msg_(msg)
  {}
  Init_ImuMsg_linear_acceleration_covariance linear_acceleration(::dls2_msgs::msg::ImuMsg::_linear_acceleration_type arg)
  {
    msg_.linear_acceleration = std::move(arg);
    return Init_ImuMsg_linear_acceleration_covariance(msg_);
  }

private:
  ::dls2_msgs::msg::ImuMsg msg_;
};

class Init_ImuMsg_angular_velocity_covariance
{
public:
  explicit Init_ImuMsg_angular_velocity_covariance(::dls2_msgs::msg::ImuMsg & msg)
  : msg_(msg)
  {}
  Init_ImuMsg_linear_acceleration angular_velocity_covariance(::dls2_msgs::msg::ImuMsg::_angular_velocity_covariance_type arg)
  {
    msg_.angular_velocity_covariance = std::move(arg);
    return Init_ImuMsg_linear_acceleration(msg_);
  }

private:
  ::dls2_msgs::msg::ImuMsg msg_;
};

class Init_ImuMsg_angular_velocity
{
public:
  explicit Init_ImuMsg_angular_velocity(::dls2_msgs::msg::ImuMsg & msg)
  : msg_(msg)
  {}
  Init_ImuMsg_angular_velocity_covariance angular_velocity(::dls2_msgs::msg::ImuMsg::_angular_velocity_type arg)
  {
    msg_.angular_velocity = std::move(arg);
    return Init_ImuMsg_angular_velocity_covariance(msg_);
  }

private:
  ::dls2_msgs::msg::ImuMsg msg_;
};

class Init_ImuMsg_orientation_covariance
{
public:
  explicit Init_ImuMsg_orientation_covariance(::dls2_msgs::msg::ImuMsg & msg)
  : msg_(msg)
  {}
  Init_ImuMsg_angular_velocity orientation_covariance(::dls2_msgs::msg::ImuMsg::_orientation_covariance_type arg)
  {
    msg_.orientation_covariance = std::move(arg);
    return Init_ImuMsg_angular_velocity(msg_);
  }

private:
  ::dls2_msgs::msg::ImuMsg msg_;
};

class Init_ImuMsg_orientation
{
public:
  explicit Init_ImuMsg_orientation(::dls2_msgs::msg::ImuMsg & msg)
  : msg_(msg)
  {}
  Init_ImuMsg_orientation_covariance orientation(::dls2_msgs::msg::ImuMsg::_orientation_type arg)
  {
    msg_.orientation = std::move(arg);
    return Init_ImuMsg_orientation_covariance(msg_);
  }

private:
  ::dls2_msgs::msg::ImuMsg msg_;
};

class Init_ImuMsg_timestamp
{
public:
  explicit Init_ImuMsg_timestamp(::dls2_msgs::msg::ImuMsg & msg)
  : msg_(msg)
  {}
  Init_ImuMsg_orientation timestamp(::dls2_msgs::msg::ImuMsg::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_ImuMsg_orientation(msg_);
  }

private:
  ::dls2_msgs::msg::ImuMsg msg_;
};

class Init_ImuMsg_sequence_id
{
public:
  explicit Init_ImuMsg_sequence_id(::dls2_msgs::msg::ImuMsg & msg)
  : msg_(msg)
  {}
  Init_ImuMsg_timestamp sequence_id(::dls2_msgs::msg::ImuMsg::_sequence_id_type arg)
  {
    msg_.sequence_id = std::move(arg);
    return Init_ImuMsg_timestamp(msg_);
  }

private:
  ::dls2_msgs::msg::ImuMsg msg_;
};

class Init_ImuMsg_frame_id
{
public:
  Init_ImuMsg_frame_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ImuMsg_sequence_id frame_id(::dls2_msgs::msg::ImuMsg::_frame_id_type arg)
  {
    msg_.frame_id = std::move(arg);
    return Init_ImuMsg_sequence_id(msg_);
  }

private:
  ::dls2_msgs::msg::ImuMsg msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::dls2_msgs::msg::ImuMsg>()
{
  return dls2_msgs::msg::builder::Init_ImuMsg_frame_id();
}

}  // namespace dls2_msgs

#endif  // DLS2_MSGS__MSG__DETAIL__IMU_MSG__BUILDER_HPP_
