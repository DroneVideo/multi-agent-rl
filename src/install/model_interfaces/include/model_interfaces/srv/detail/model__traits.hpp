// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from model_interfaces:srv/Model.idl
// generated code does not contain a copyright notice

#ifndef MODEL_INTERFACES__SRV__DETAIL__MODEL__TRAITS_HPP_
#define MODEL_INTERFACES__SRV__DETAIL__MODEL__TRAITS_HPP_

#include "model_interfaces/srv/detail/model__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<model_interfaces::srv::Model_Request>()
{
  return "model_interfaces::srv::Model_Request";
}

template<>
inline const char * name<model_interfaces::srv::Model_Request>()
{
  return "model_interfaces/srv/Model_Request";
}

template<>
struct has_fixed_size<model_interfaces::srv::Model_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<model_interfaces::srv::Model_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<model_interfaces::srv::Model_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<model_interfaces::srv::Model_Response>()
{
  return "model_interfaces::srv::Model_Response";
}

template<>
inline const char * name<model_interfaces::srv::Model_Response>()
{
  return "model_interfaces/srv/Model_Response";
}

template<>
struct has_fixed_size<model_interfaces::srv::Model_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<model_interfaces::srv::Model_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<model_interfaces::srv::Model_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<model_interfaces::srv::Model>()
{
  return "model_interfaces::srv::Model";
}

template<>
inline const char * name<model_interfaces::srv::Model>()
{
  return "model_interfaces/srv/Model";
}

template<>
struct has_fixed_size<model_interfaces::srv::Model>
  : std::integral_constant<
    bool,
    has_fixed_size<model_interfaces::srv::Model_Request>::value &&
    has_fixed_size<model_interfaces::srv::Model_Response>::value
  >
{
};

template<>
struct has_bounded_size<model_interfaces::srv::Model>
  : std::integral_constant<
    bool,
    has_bounded_size<model_interfaces::srv::Model_Request>::value &&
    has_bounded_size<model_interfaces::srv::Model_Response>::value
  >
{
};

template<>
struct is_service<model_interfaces::srv::Model>
  : std::true_type
{
};

template<>
struct is_service_request<model_interfaces::srv::Model_Request>
  : std::true_type
{
};

template<>
struct is_service_response<model_interfaces::srv::Model_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MODEL_INTERFACES__SRV__DETAIL__MODEL__TRAITS_HPP_
