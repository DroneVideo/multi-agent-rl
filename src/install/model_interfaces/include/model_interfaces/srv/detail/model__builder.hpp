// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from model_interfaces:srv/Model.idl
// generated code does not contain a copyright notice

#ifndef MODEL_INTERFACES__SRV__DETAIL__MODEL__BUILDER_HPP_
#define MODEL_INTERFACES__SRV__DETAIL__MODEL__BUILDER_HPP_

#include "model_interfaces/srv/detail/model__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace model_interfaces
{

namespace srv
{

namespace builder
{

class Init_Model_Request_input
{
public:
  Init_Model_Request_input()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::model_interfaces::srv::Model_Request input(::model_interfaces::srv::Model_Request::_input_type arg)
  {
    msg_.input = std::move(arg);
    return std::move(msg_);
  }

private:
  ::model_interfaces::srv::Model_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::model_interfaces::srv::Model_Request>()
{
  return model_interfaces::srv::builder::Init_Model_Request_input();
}

}  // namespace model_interfaces


namespace model_interfaces
{

namespace srv
{

namespace builder
{

class Init_Model_Response_output
{
public:
  Init_Model_Response_output()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::model_interfaces::srv::Model_Response output(::model_interfaces::srv::Model_Response::_output_type arg)
  {
    msg_.output = std::move(arg);
    return std::move(msg_);
  }

private:
  ::model_interfaces::srv::Model_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::model_interfaces::srv::Model_Response>()
{
  return model_interfaces::srv::builder::Init_Model_Response_output();
}

}  // namespace model_interfaces

#endif  // MODEL_INTERFACES__SRV__DETAIL__MODEL__BUILDER_HPP_
