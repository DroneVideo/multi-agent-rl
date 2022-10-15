// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from model_interfaces:srv/Model.idl
// generated code does not contain a copyright notice

#ifndef MODEL_INTERFACES__SRV__DETAIL__MODEL__STRUCT_HPP_
#define MODEL_INTERFACES__SRV__DETAIL__MODEL__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__model_interfaces__srv__Model_Request __attribute__((deprecated))
#else
# define DEPRECATED__model_interfaces__srv__Model_Request __declspec(deprecated)
#endif

namespace model_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Model_Request_
{
  using Type = Model_Request_<ContainerAllocator>;

  explicit Model_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->input = 0.0;
    }
  }

  explicit Model_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->input = 0.0;
    }
  }

  // field types and members
  using _input_type =
    double;
  _input_type input;

  // setters for named parameter idiom
  Type & set__input(
    const double & _arg)
  {
    this->input = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    model_interfaces::srv::Model_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const model_interfaces::srv::Model_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<model_interfaces::srv::Model_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<model_interfaces::srv::Model_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      model_interfaces::srv::Model_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<model_interfaces::srv::Model_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      model_interfaces::srv::Model_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<model_interfaces::srv::Model_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<model_interfaces::srv::Model_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<model_interfaces::srv::Model_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__model_interfaces__srv__Model_Request
    std::shared_ptr<model_interfaces::srv::Model_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__model_interfaces__srv__Model_Request
    std::shared_ptr<model_interfaces::srv::Model_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Model_Request_ & other) const
  {
    if (this->input != other.input) {
      return false;
    }
    return true;
  }
  bool operator!=(const Model_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Model_Request_

// alias to use template instance with default allocator
using Model_Request =
  model_interfaces::srv::Model_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace model_interfaces


#ifndef _WIN32
# define DEPRECATED__model_interfaces__srv__Model_Response __attribute__((deprecated))
#else
# define DEPRECATED__model_interfaces__srv__Model_Response __declspec(deprecated)
#endif

namespace model_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Model_Response_
{
  using Type = Model_Response_<ContainerAllocator>;

  explicit Model_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->output = 0.0;
    }
  }

  explicit Model_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->output = 0.0;
    }
  }

  // field types and members
  using _output_type =
    double;
  _output_type output;

  // setters for named parameter idiom
  Type & set__output(
    const double & _arg)
  {
    this->output = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    model_interfaces::srv::Model_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const model_interfaces::srv::Model_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<model_interfaces::srv::Model_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<model_interfaces::srv::Model_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      model_interfaces::srv::Model_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<model_interfaces::srv::Model_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      model_interfaces::srv::Model_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<model_interfaces::srv::Model_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<model_interfaces::srv::Model_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<model_interfaces::srv::Model_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__model_interfaces__srv__Model_Response
    std::shared_ptr<model_interfaces::srv::Model_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__model_interfaces__srv__Model_Response
    std::shared_ptr<model_interfaces::srv::Model_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Model_Response_ & other) const
  {
    if (this->output != other.output) {
      return false;
    }
    return true;
  }
  bool operator!=(const Model_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Model_Response_

// alias to use template instance with default allocator
using Model_Response =
  model_interfaces::srv::Model_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace model_interfaces

namespace model_interfaces
{

namespace srv
{

struct Model
{
  using Request = model_interfaces::srv::Model_Request;
  using Response = model_interfaces::srv::Model_Response;
};

}  // namespace srv

}  // namespace model_interfaces

#endif  // MODEL_INTERFACES__SRV__DETAIL__MODEL__STRUCT_HPP_
