// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from gpg3_msgs:action/Patrol.idl
// generated code does not contain a copyright notice

#ifndef GPG3_MSGS__ACTION__DETAIL__PATROL__BUILDER_HPP_
#define GPG3_MSGS__ACTION__DETAIL__PATROL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "gpg3_msgs/action/detail/patrol__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace gpg3_msgs
{

namespace action
{

namespace builder
{

class Init_Patrol_Goal_radius
{
public:
  Init_Patrol_Goal_radius()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::gpg3_msgs::action::Patrol_Goal radius(::gpg3_msgs::action::Patrol_Goal::_radius_type arg)
  {
    msg_.radius = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gpg3_msgs::action::Patrol_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::gpg3_msgs::action::Patrol_Goal>()
{
  return gpg3_msgs::action::builder::Init_Patrol_Goal_radius();
}

}  // namespace gpg3_msgs


namespace gpg3_msgs
{

namespace action
{

namespace builder
{

class Init_Patrol_Result_success
{
public:
  Init_Patrol_Result_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::gpg3_msgs::action::Patrol_Result success(::gpg3_msgs::action::Patrol_Result::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gpg3_msgs::action::Patrol_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::gpg3_msgs::action::Patrol_Result>()
{
  return gpg3_msgs::action::builder::Init_Patrol_Result_success();
}

}  // namespace gpg3_msgs


namespace gpg3_msgs
{

namespace action
{

namespace builder
{

class Init_Patrol_Feedback_left_time
{
public:
  Init_Patrol_Feedback_left_time()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::gpg3_msgs::action::Patrol_Feedback left_time(::gpg3_msgs::action::Patrol_Feedback::_left_time_type arg)
  {
    msg_.left_time = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gpg3_msgs::action::Patrol_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::gpg3_msgs::action::Patrol_Feedback>()
{
  return gpg3_msgs::action::builder::Init_Patrol_Feedback_left_time();
}

}  // namespace gpg3_msgs


namespace gpg3_msgs
{

namespace action
{

namespace builder
{

class Init_Patrol_SendGoal_Request_goal
{
public:
  explicit Init_Patrol_SendGoal_Request_goal(::gpg3_msgs::action::Patrol_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::gpg3_msgs::action::Patrol_SendGoal_Request goal(::gpg3_msgs::action::Patrol_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gpg3_msgs::action::Patrol_SendGoal_Request msg_;
};

class Init_Patrol_SendGoal_Request_goal_id
{
public:
  Init_Patrol_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Patrol_SendGoal_Request_goal goal_id(::gpg3_msgs::action::Patrol_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Patrol_SendGoal_Request_goal(msg_);
  }

private:
  ::gpg3_msgs::action::Patrol_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::gpg3_msgs::action::Patrol_SendGoal_Request>()
{
  return gpg3_msgs::action::builder::Init_Patrol_SendGoal_Request_goal_id();
}

}  // namespace gpg3_msgs


namespace gpg3_msgs
{

namespace action
{

namespace builder
{

class Init_Patrol_SendGoal_Response_stamp
{
public:
  explicit Init_Patrol_SendGoal_Response_stamp(::gpg3_msgs::action::Patrol_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::gpg3_msgs::action::Patrol_SendGoal_Response stamp(::gpg3_msgs::action::Patrol_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gpg3_msgs::action::Patrol_SendGoal_Response msg_;
};

class Init_Patrol_SendGoal_Response_accepted
{
public:
  Init_Patrol_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Patrol_SendGoal_Response_stamp accepted(::gpg3_msgs::action::Patrol_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_Patrol_SendGoal_Response_stamp(msg_);
  }

private:
  ::gpg3_msgs::action::Patrol_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::gpg3_msgs::action::Patrol_SendGoal_Response>()
{
  return gpg3_msgs::action::builder::Init_Patrol_SendGoal_Response_accepted();
}

}  // namespace gpg3_msgs


namespace gpg3_msgs
{

namespace action
{

namespace builder
{

class Init_Patrol_GetResult_Request_goal_id
{
public:
  Init_Patrol_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::gpg3_msgs::action::Patrol_GetResult_Request goal_id(::gpg3_msgs::action::Patrol_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gpg3_msgs::action::Patrol_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::gpg3_msgs::action::Patrol_GetResult_Request>()
{
  return gpg3_msgs::action::builder::Init_Patrol_GetResult_Request_goal_id();
}

}  // namespace gpg3_msgs


namespace gpg3_msgs
{

namespace action
{

namespace builder
{

class Init_Patrol_GetResult_Response_result
{
public:
  explicit Init_Patrol_GetResult_Response_result(::gpg3_msgs::action::Patrol_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::gpg3_msgs::action::Patrol_GetResult_Response result(::gpg3_msgs::action::Patrol_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gpg3_msgs::action::Patrol_GetResult_Response msg_;
};

class Init_Patrol_GetResult_Response_status
{
public:
  Init_Patrol_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Patrol_GetResult_Response_result status(::gpg3_msgs::action::Patrol_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_Patrol_GetResult_Response_result(msg_);
  }

private:
  ::gpg3_msgs::action::Patrol_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::gpg3_msgs::action::Patrol_GetResult_Response>()
{
  return gpg3_msgs::action::builder::Init_Patrol_GetResult_Response_status();
}

}  // namespace gpg3_msgs


namespace gpg3_msgs
{

namespace action
{

namespace builder
{

class Init_Patrol_FeedbackMessage_feedback
{
public:
  explicit Init_Patrol_FeedbackMessage_feedback(::gpg3_msgs::action::Patrol_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::gpg3_msgs::action::Patrol_FeedbackMessage feedback(::gpg3_msgs::action::Patrol_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gpg3_msgs::action::Patrol_FeedbackMessage msg_;
};

class Init_Patrol_FeedbackMessage_goal_id
{
public:
  Init_Patrol_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Patrol_FeedbackMessage_feedback goal_id(::gpg3_msgs::action::Patrol_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Patrol_FeedbackMessage_feedback(msg_);
  }

private:
  ::gpg3_msgs::action::Patrol_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::gpg3_msgs::action::Patrol_FeedbackMessage>()
{
  return gpg3_msgs::action::builder::Init_Patrol_FeedbackMessage_goal_id();
}

}  // namespace gpg3_msgs

#endif  // GPG3_MSGS__ACTION__DETAIL__PATROL__BUILDER_HPP_
