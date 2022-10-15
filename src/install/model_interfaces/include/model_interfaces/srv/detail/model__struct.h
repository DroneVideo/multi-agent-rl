// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from model_interfaces:srv/Model.idl
// generated code does not contain a copyright notice

#ifndef MODEL_INTERFACES__SRV__DETAIL__MODEL__STRUCT_H_
#define MODEL_INTERFACES__SRV__DETAIL__MODEL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/Model in the package model_interfaces.
typedef struct model_interfaces__srv__Model_Request
{
  double input;
} model_interfaces__srv__Model_Request;

// Struct for a sequence of model_interfaces__srv__Model_Request.
typedef struct model_interfaces__srv__Model_Request__Sequence
{
  model_interfaces__srv__Model_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} model_interfaces__srv__Model_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/Model in the package model_interfaces.
typedef struct model_interfaces__srv__Model_Response
{
  double output;
} model_interfaces__srv__Model_Response;

// Struct for a sequence of model_interfaces__srv__Model_Response.
typedef struct model_interfaces__srv__Model_Response__Sequence
{
  model_interfaces__srv__Model_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} model_interfaces__srv__Model_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MODEL_INTERFACES__SRV__DETAIL__MODEL__STRUCT_H_
