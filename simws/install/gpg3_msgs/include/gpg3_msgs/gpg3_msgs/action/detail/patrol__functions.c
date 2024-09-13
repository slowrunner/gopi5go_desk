// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from gpg3_msgs:action/Patrol.idl
// generated code does not contain a copyright notice
#include "gpg3_msgs/action/detail/patrol__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
gpg3_msgs__action__Patrol_Goal__init(gpg3_msgs__action__Patrol_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // radius
  return true;
}

void
gpg3_msgs__action__Patrol_Goal__fini(gpg3_msgs__action__Patrol_Goal * msg)
{
  if (!msg) {
    return;
  }
  // radius
}

bool
gpg3_msgs__action__Patrol_Goal__are_equal(const gpg3_msgs__action__Patrol_Goal * lhs, const gpg3_msgs__action__Patrol_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // radius
  if (lhs->radius != rhs->radius) {
    return false;
  }
  return true;
}

bool
gpg3_msgs__action__Patrol_Goal__copy(
  const gpg3_msgs__action__Patrol_Goal * input,
  gpg3_msgs__action__Patrol_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // radius
  output->radius = input->radius;
  return true;
}

gpg3_msgs__action__Patrol_Goal *
gpg3_msgs__action__Patrol_Goal__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gpg3_msgs__action__Patrol_Goal * msg = (gpg3_msgs__action__Patrol_Goal *)allocator.allocate(sizeof(gpg3_msgs__action__Patrol_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(gpg3_msgs__action__Patrol_Goal));
  bool success = gpg3_msgs__action__Patrol_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
gpg3_msgs__action__Patrol_Goal__destroy(gpg3_msgs__action__Patrol_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    gpg3_msgs__action__Patrol_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
gpg3_msgs__action__Patrol_Goal__Sequence__init(gpg3_msgs__action__Patrol_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gpg3_msgs__action__Patrol_Goal * data = NULL;

  if (size) {
    data = (gpg3_msgs__action__Patrol_Goal *)allocator.zero_allocate(size, sizeof(gpg3_msgs__action__Patrol_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = gpg3_msgs__action__Patrol_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        gpg3_msgs__action__Patrol_Goal__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
gpg3_msgs__action__Patrol_Goal__Sequence__fini(gpg3_msgs__action__Patrol_Goal__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      gpg3_msgs__action__Patrol_Goal__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

gpg3_msgs__action__Patrol_Goal__Sequence *
gpg3_msgs__action__Patrol_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gpg3_msgs__action__Patrol_Goal__Sequence * array = (gpg3_msgs__action__Patrol_Goal__Sequence *)allocator.allocate(sizeof(gpg3_msgs__action__Patrol_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = gpg3_msgs__action__Patrol_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
gpg3_msgs__action__Patrol_Goal__Sequence__destroy(gpg3_msgs__action__Patrol_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    gpg3_msgs__action__Patrol_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
gpg3_msgs__action__Patrol_Goal__Sequence__are_equal(const gpg3_msgs__action__Patrol_Goal__Sequence * lhs, const gpg3_msgs__action__Patrol_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!gpg3_msgs__action__Patrol_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
gpg3_msgs__action__Patrol_Goal__Sequence__copy(
  const gpg3_msgs__action__Patrol_Goal__Sequence * input,
  gpg3_msgs__action__Patrol_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(gpg3_msgs__action__Patrol_Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    gpg3_msgs__action__Patrol_Goal * data =
      (gpg3_msgs__action__Patrol_Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!gpg3_msgs__action__Patrol_Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          gpg3_msgs__action__Patrol_Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!gpg3_msgs__action__Patrol_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
gpg3_msgs__action__Patrol_Result__init(gpg3_msgs__action__Patrol_Result * msg)
{
  if (!msg) {
    return false;
  }
  // success
  return true;
}

void
gpg3_msgs__action__Patrol_Result__fini(gpg3_msgs__action__Patrol_Result * msg)
{
  if (!msg) {
    return;
  }
  // success
}

bool
gpg3_msgs__action__Patrol_Result__are_equal(const gpg3_msgs__action__Patrol_Result * lhs, const gpg3_msgs__action__Patrol_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  return true;
}

bool
gpg3_msgs__action__Patrol_Result__copy(
  const gpg3_msgs__action__Patrol_Result * input,
  gpg3_msgs__action__Patrol_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  return true;
}

gpg3_msgs__action__Patrol_Result *
gpg3_msgs__action__Patrol_Result__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gpg3_msgs__action__Patrol_Result * msg = (gpg3_msgs__action__Patrol_Result *)allocator.allocate(sizeof(gpg3_msgs__action__Patrol_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(gpg3_msgs__action__Patrol_Result));
  bool success = gpg3_msgs__action__Patrol_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
gpg3_msgs__action__Patrol_Result__destroy(gpg3_msgs__action__Patrol_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    gpg3_msgs__action__Patrol_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
gpg3_msgs__action__Patrol_Result__Sequence__init(gpg3_msgs__action__Patrol_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gpg3_msgs__action__Patrol_Result * data = NULL;

  if (size) {
    data = (gpg3_msgs__action__Patrol_Result *)allocator.zero_allocate(size, sizeof(gpg3_msgs__action__Patrol_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = gpg3_msgs__action__Patrol_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        gpg3_msgs__action__Patrol_Result__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
gpg3_msgs__action__Patrol_Result__Sequence__fini(gpg3_msgs__action__Patrol_Result__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      gpg3_msgs__action__Patrol_Result__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

gpg3_msgs__action__Patrol_Result__Sequence *
gpg3_msgs__action__Patrol_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gpg3_msgs__action__Patrol_Result__Sequence * array = (gpg3_msgs__action__Patrol_Result__Sequence *)allocator.allocate(sizeof(gpg3_msgs__action__Patrol_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = gpg3_msgs__action__Patrol_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
gpg3_msgs__action__Patrol_Result__Sequence__destroy(gpg3_msgs__action__Patrol_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    gpg3_msgs__action__Patrol_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
gpg3_msgs__action__Patrol_Result__Sequence__are_equal(const gpg3_msgs__action__Patrol_Result__Sequence * lhs, const gpg3_msgs__action__Patrol_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!gpg3_msgs__action__Patrol_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
gpg3_msgs__action__Patrol_Result__Sequence__copy(
  const gpg3_msgs__action__Patrol_Result__Sequence * input,
  gpg3_msgs__action__Patrol_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(gpg3_msgs__action__Patrol_Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    gpg3_msgs__action__Patrol_Result * data =
      (gpg3_msgs__action__Patrol_Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!gpg3_msgs__action__Patrol_Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          gpg3_msgs__action__Patrol_Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!gpg3_msgs__action__Patrol_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
gpg3_msgs__action__Patrol_Feedback__init(gpg3_msgs__action__Patrol_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // left_time
  return true;
}

void
gpg3_msgs__action__Patrol_Feedback__fini(gpg3_msgs__action__Patrol_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // left_time
}

bool
gpg3_msgs__action__Patrol_Feedback__are_equal(const gpg3_msgs__action__Patrol_Feedback * lhs, const gpg3_msgs__action__Patrol_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // left_time
  if (lhs->left_time != rhs->left_time) {
    return false;
  }
  return true;
}

bool
gpg3_msgs__action__Patrol_Feedback__copy(
  const gpg3_msgs__action__Patrol_Feedback * input,
  gpg3_msgs__action__Patrol_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // left_time
  output->left_time = input->left_time;
  return true;
}

gpg3_msgs__action__Patrol_Feedback *
gpg3_msgs__action__Patrol_Feedback__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gpg3_msgs__action__Patrol_Feedback * msg = (gpg3_msgs__action__Patrol_Feedback *)allocator.allocate(sizeof(gpg3_msgs__action__Patrol_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(gpg3_msgs__action__Patrol_Feedback));
  bool success = gpg3_msgs__action__Patrol_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
gpg3_msgs__action__Patrol_Feedback__destroy(gpg3_msgs__action__Patrol_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    gpg3_msgs__action__Patrol_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
gpg3_msgs__action__Patrol_Feedback__Sequence__init(gpg3_msgs__action__Patrol_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gpg3_msgs__action__Patrol_Feedback * data = NULL;

  if (size) {
    data = (gpg3_msgs__action__Patrol_Feedback *)allocator.zero_allocate(size, sizeof(gpg3_msgs__action__Patrol_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = gpg3_msgs__action__Patrol_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        gpg3_msgs__action__Patrol_Feedback__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
gpg3_msgs__action__Patrol_Feedback__Sequence__fini(gpg3_msgs__action__Patrol_Feedback__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      gpg3_msgs__action__Patrol_Feedback__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

gpg3_msgs__action__Patrol_Feedback__Sequence *
gpg3_msgs__action__Patrol_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gpg3_msgs__action__Patrol_Feedback__Sequence * array = (gpg3_msgs__action__Patrol_Feedback__Sequence *)allocator.allocate(sizeof(gpg3_msgs__action__Patrol_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = gpg3_msgs__action__Patrol_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
gpg3_msgs__action__Patrol_Feedback__Sequence__destroy(gpg3_msgs__action__Patrol_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    gpg3_msgs__action__Patrol_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
gpg3_msgs__action__Patrol_Feedback__Sequence__are_equal(const gpg3_msgs__action__Patrol_Feedback__Sequence * lhs, const gpg3_msgs__action__Patrol_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!gpg3_msgs__action__Patrol_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
gpg3_msgs__action__Patrol_Feedback__Sequence__copy(
  const gpg3_msgs__action__Patrol_Feedback__Sequence * input,
  gpg3_msgs__action__Patrol_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(gpg3_msgs__action__Patrol_Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    gpg3_msgs__action__Patrol_Feedback * data =
      (gpg3_msgs__action__Patrol_Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!gpg3_msgs__action__Patrol_Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          gpg3_msgs__action__Patrol_Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!gpg3_msgs__action__Patrol_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "gpg3_msgs/action/detail/patrol__functions.h"

bool
gpg3_msgs__action__Patrol_SendGoal_Request__init(gpg3_msgs__action__Patrol_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    gpg3_msgs__action__Patrol_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!gpg3_msgs__action__Patrol_Goal__init(&msg->goal)) {
    gpg3_msgs__action__Patrol_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
gpg3_msgs__action__Patrol_SendGoal_Request__fini(gpg3_msgs__action__Patrol_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  gpg3_msgs__action__Patrol_Goal__fini(&msg->goal);
}

bool
gpg3_msgs__action__Patrol_SendGoal_Request__are_equal(const gpg3_msgs__action__Patrol_SendGoal_Request * lhs, const gpg3_msgs__action__Patrol_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!gpg3_msgs__action__Patrol_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
gpg3_msgs__action__Patrol_SendGoal_Request__copy(
  const gpg3_msgs__action__Patrol_SendGoal_Request * input,
  gpg3_msgs__action__Patrol_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!gpg3_msgs__action__Patrol_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

gpg3_msgs__action__Patrol_SendGoal_Request *
gpg3_msgs__action__Patrol_SendGoal_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gpg3_msgs__action__Patrol_SendGoal_Request * msg = (gpg3_msgs__action__Patrol_SendGoal_Request *)allocator.allocate(sizeof(gpg3_msgs__action__Patrol_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(gpg3_msgs__action__Patrol_SendGoal_Request));
  bool success = gpg3_msgs__action__Patrol_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
gpg3_msgs__action__Patrol_SendGoal_Request__destroy(gpg3_msgs__action__Patrol_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    gpg3_msgs__action__Patrol_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
gpg3_msgs__action__Patrol_SendGoal_Request__Sequence__init(gpg3_msgs__action__Patrol_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gpg3_msgs__action__Patrol_SendGoal_Request * data = NULL;

  if (size) {
    data = (gpg3_msgs__action__Patrol_SendGoal_Request *)allocator.zero_allocate(size, sizeof(gpg3_msgs__action__Patrol_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = gpg3_msgs__action__Patrol_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        gpg3_msgs__action__Patrol_SendGoal_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
gpg3_msgs__action__Patrol_SendGoal_Request__Sequence__fini(gpg3_msgs__action__Patrol_SendGoal_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      gpg3_msgs__action__Patrol_SendGoal_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

gpg3_msgs__action__Patrol_SendGoal_Request__Sequence *
gpg3_msgs__action__Patrol_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gpg3_msgs__action__Patrol_SendGoal_Request__Sequence * array = (gpg3_msgs__action__Patrol_SendGoal_Request__Sequence *)allocator.allocate(sizeof(gpg3_msgs__action__Patrol_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = gpg3_msgs__action__Patrol_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
gpg3_msgs__action__Patrol_SendGoal_Request__Sequence__destroy(gpg3_msgs__action__Patrol_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    gpg3_msgs__action__Patrol_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
gpg3_msgs__action__Patrol_SendGoal_Request__Sequence__are_equal(const gpg3_msgs__action__Patrol_SendGoal_Request__Sequence * lhs, const gpg3_msgs__action__Patrol_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!gpg3_msgs__action__Patrol_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
gpg3_msgs__action__Patrol_SendGoal_Request__Sequence__copy(
  const gpg3_msgs__action__Patrol_SendGoal_Request__Sequence * input,
  gpg3_msgs__action__Patrol_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(gpg3_msgs__action__Patrol_SendGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    gpg3_msgs__action__Patrol_SendGoal_Request * data =
      (gpg3_msgs__action__Patrol_SendGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!gpg3_msgs__action__Patrol_SendGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          gpg3_msgs__action__Patrol_SendGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!gpg3_msgs__action__Patrol_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
gpg3_msgs__action__Patrol_SendGoal_Response__init(gpg3_msgs__action__Patrol_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    gpg3_msgs__action__Patrol_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
gpg3_msgs__action__Patrol_SendGoal_Response__fini(gpg3_msgs__action__Patrol_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
gpg3_msgs__action__Patrol_SendGoal_Response__are_equal(const gpg3_msgs__action__Patrol_SendGoal_Response * lhs, const gpg3_msgs__action__Patrol_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
gpg3_msgs__action__Patrol_SendGoal_Response__copy(
  const gpg3_msgs__action__Patrol_SendGoal_Response * input,
  gpg3_msgs__action__Patrol_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

gpg3_msgs__action__Patrol_SendGoal_Response *
gpg3_msgs__action__Patrol_SendGoal_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gpg3_msgs__action__Patrol_SendGoal_Response * msg = (gpg3_msgs__action__Patrol_SendGoal_Response *)allocator.allocate(sizeof(gpg3_msgs__action__Patrol_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(gpg3_msgs__action__Patrol_SendGoal_Response));
  bool success = gpg3_msgs__action__Patrol_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
gpg3_msgs__action__Patrol_SendGoal_Response__destroy(gpg3_msgs__action__Patrol_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    gpg3_msgs__action__Patrol_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
gpg3_msgs__action__Patrol_SendGoal_Response__Sequence__init(gpg3_msgs__action__Patrol_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gpg3_msgs__action__Patrol_SendGoal_Response * data = NULL;

  if (size) {
    data = (gpg3_msgs__action__Patrol_SendGoal_Response *)allocator.zero_allocate(size, sizeof(gpg3_msgs__action__Patrol_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = gpg3_msgs__action__Patrol_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        gpg3_msgs__action__Patrol_SendGoal_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
gpg3_msgs__action__Patrol_SendGoal_Response__Sequence__fini(gpg3_msgs__action__Patrol_SendGoal_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      gpg3_msgs__action__Patrol_SendGoal_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

gpg3_msgs__action__Patrol_SendGoal_Response__Sequence *
gpg3_msgs__action__Patrol_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gpg3_msgs__action__Patrol_SendGoal_Response__Sequence * array = (gpg3_msgs__action__Patrol_SendGoal_Response__Sequence *)allocator.allocate(sizeof(gpg3_msgs__action__Patrol_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = gpg3_msgs__action__Patrol_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
gpg3_msgs__action__Patrol_SendGoal_Response__Sequence__destroy(gpg3_msgs__action__Patrol_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    gpg3_msgs__action__Patrol_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
gpg3_msgs__action__Patrol_SendGoal_Response__Sequence__are_equal(const gpg3_msgs__action__Patrol_SendGoal_Response__Sequence * lhs, const gpg3_msgs__action__Patrol_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!gpg3_msgs__action__Patrol_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
gpg3_msgs__action__Patrol_SendGoal_Response__Sequence__copy(
  const gpg3_msgs__action__Patrol_SendGoal_Response__Sequence * input,
  gpg3_msgs__action__Patrol_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(gpg3_msgs__action__Patrol_SendGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    gpg3_msgs__action__Patrol_SendGoal_Response * data =
      (gpg3_msgs__action__Patrol_SendGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!gpg3_msgs__action__Patrol_SendGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          gpg3_msgs__action__Patrol_SendGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!gpg3_msgs__action__Patrol_SendGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
gpg3_msgs__action__Patrol_GetResult_Request__init(gpg3_msgs__action__Patrol_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    gpg3_msgs__action__Patrol_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
gpg3_msgs__action__Patrol_GetResult_Request__fini(gpg3_msgs__action__Patrol_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
gpg3_msgs__action__Patrol_GetResult_Request__are_equal(const gpg3_msgs__action__Patrol_GetResult_Request * lhs, const gpg3_msgs__action__Patrol_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
gpg3_msgs__action__Patrol_GetResult_Request__copy(
  const gpg3_msgs__action__Patrol_GetResult_Request * input,
  gpg3_msgs__action__Patrol_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

gpg3_msgs__action__Patrol_GetResult_Request *
gpg3_msgs__action__Patrol_GetResult_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gpg3_msgs__action__Patrol_GetResult_Request * msg = (gpg3_msgs__action__Patrol_GetResult_Request *)allocator.allocate(sizeof(gpg3_msgs__action__Patrol_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(gpg3_msgs__action__Patrol_GetResult_Request));
  bool success = gpg3_msgs__action__Patrol_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
gpg3_msgs__action__Patrol_GetResult_Request__destroy(gpg3_msgs__action__Patrol_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    gpg3_msgs__action__Patrol_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
gpg3_msgs__action__Patrol_GetResult_Request__Sequence__init(gpg3_msgs__action__Patrol_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gpg3_msgs__action__Patrol_GetResult_Request * data = NULL;

  if (size) {
    data = (gpg3_msgs__action__Patrol_GetResult_Request *)allocator.zero_allocate(size, sizeof(gpg3_msgs__action__Patrol_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = gpg3_msgs__action__Patrol_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        gpg3_msgs__action__Patrol_GetResult_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
gpg3_msgs__action__Patrol_GetResult_Request__Sequence__fini(gpg3_msgs__action__Patrol_GetResult_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      gpg3_msgs__action__Patrol_GetResult_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

gpg3_msgs__action__Patrol_GetResult_Request__Sequence *
gpg3_msgs__action__Patrol_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gpg3_msgs__action__Patrol_GetResult_Request__Sequence * array = (gpg3_msgs__action__Patrol_GetResult_Request__Sequence *)allocator.allocate(sizeof(gpg3_msgs__action__Patrol_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = gpg3_msgs__action__Patrol_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
gpg3_msgs__action__Patrol_GetResult_Request__Sequence__destroy(gpg3_msgs__action__Patrol_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    gpg3_msgs__action__Patrol_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
gpg3_msgs__action__Patrol_GetResult_Request__Sequence__are_equal(const gpg3_msgs__action__Patrol_GetResult_Request__Sequence * lhs, const gpg3_msgs__action__Patrol_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!gpg3_msgs__action__Patrol_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
gpg3_msgs__action__Patrol_GetResult_Request__Sequence__copy(
  const gpg3_msgs__action__Patrol_GetResult_Request__Sequence * input,
  gpg3_msgs__action__Patrol_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(gpg3_msgs__action__Patrol_GetResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    gpg3_msgs__action__Patrol_GetResult_Request * data =
      (gpg3_msgs__action__Patrol_GetResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!gpg3_msgs__action__Patrol_GetResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          gpg3_msgs__action__Patrol_GetResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!gpg3_msgs__action__Patrol_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "gpg3_msgs/action/detail/patrol__functions.h"

bool
gpg3_msgs__action__Patrol_GetResult_Response__init(gpg3_msgs__action__Patrol_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!gpg3_msgs__action__Patrol_Result__init(&msg->result)) {
    gpg3_msgs__action__Patrol_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
gpg3_msgs__action__Patrol_GetResult_Response__fini(gpg3_msgs__action__Patrol_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  gpg3_msgs__action__Patrol_Result__fini(&msg->result);
}

bool
gpg3_msgs__action__Patrol_GetResult_Response__are_equal(const gpg3_msgs__action__Patrol_GetResult_Response * lhs, const gpg3_msgs__action__Patrol_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!gpg3_msgs__action__Patrol_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
gpg3_msgs__action__Patrol_GetResult_Response__copy(
  const gpg3_msgs__action__Patrol_GetResult_Response * input,
  gpg3_msgs__action__Patrol_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!gpg3_msgs__action__Patrol_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

gpg3_msgs__action__Patrol_GetResult_Response *
gpg3_msgs__action__Patrol_GetResult_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gpg3_msgs__action__Patrol_GetResult_Response * msg = (gpg3_msgs__action__Patrol_GetResult_Response *)allocator.allocate(sizeof(gpg3_msgs__action__Patrol_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(gpg3_msgs__action__Patrol_GetResult_Response));
  bool success = gpg3_msgs__action__Patrol_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
gpg3_msgs__action__Patrol_GetResult_Response__destroy(gpg3_msgs__action__Patrol_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    gpg3_msgs__action__Patrol_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
gpg3_msgs__action__Patrol_GetResult_Response__Sequence__init(gpg3_msgs__action__Patrol_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gpg3_msgs__action__Patrol_GetResult_Response * data = NULL;

  if (size) {
    data = (gpg3_msgs__action__Patrol_GetResult_Response *)allocator.zero_allocate(size, sizeof(gpg3_msgs__action__Patrol_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = gpg3_msgs__action__Patrol_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        gpg3_msgs__action__Patrol_GetResult_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
gpg3_msgs__action__Patrol_GetResult_Response__Sequence__fini(gpg3_msgs__action__Patrol_GetResult_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      gpg3_msgs__action__Patrol_GetResult_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

gpg3_msgs__action__Patrol_GetResult_Response__Sequence *
gpg3_msgs__action__Patrol_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gpg3_msgs__action__Patrol_GetResult_Response__Sequence * array = (gpg3_msgs__action__Patrol_GetResult_Response__Sequence *)allocator.allocate(sizeof(gpg3_msgs__action__Patrol_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = gpg3_msgs__action__Patrol_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
gpg3_msgs__action__Patrol_GetResult_Response__Sequence__destroy(gpg3_msgs__action__Patrol_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    gpg3_msgs__action__Patrol_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
gpg3_msgs__action__Patrol_GetResult_Response__Sequence__are_equal(const gpg3_msgs__action__Patrol_GetResult_Response__Sequence * lhs, const gpg3_msgs__action__Patrol_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!gpg3_msgs__action__Patrol_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
gpg3_msgs__action__Patrol_GetResult_Response__Sequence__copy(
  const gpg3_msgs__action__Patrol_GetResult_Response__Sequence * input,
  gpg3_msgs__action__Patrol_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(gpg3_msgs__action__Patrol_GetResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    gpg3_msgs__action__Patrol_GetResult_Response * data =
      (gpg3_msgs__action__Patrol_GetResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!gpg3_msgs__action__Patrol_GetResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          gpg3_msgs__action__Patrol_GetResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!gpg3_msgs__action__Patrol_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "gpg3_msgs/action/detail/patrol__functions.h"

bool
gpg3_msgs__action__Patrol_FeedbackMessage__init(gpg3_msgs__action__Patrol_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    gpg3_msgs__action__Patrol_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!gpg3_msgs__action__Patrol_Feedback__init(&msg->feedback)) {
    gpg3_msgs__action__Patrol_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
gpg3_msgs__action__Patrol_FeedbackMessage__fini(gpg3_msgs__action__Patrol_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  gpg3_msgs__action__Patrol_Feedback__fini(&msg->feedback);
}

bool
gpg3_msgs__action__Patrol_FeedbackMessage__are_equal(const gpg3_msgs__action__Patrol_FeedbackMessage * lhs, const gpg3_msgs__action__Patrol_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!gpg3_msgs__action__Patrol_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
gpg3_msgs__action__Patrol_FeedbackMessage__copy(
  const gpg3_msgs__action__Patrol_FeedbackMessage * input,
  gpg3_msgs__action__Patrol_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!gpg3_msgs__action__Patrol_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

gpg3_msgs__action__Patrol_FeedbackMessage *
gpg3_msgs__action__Patrol_FeedbackMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gpg3_msgs__action__Patrol_FeedbackMessage * msg = (gpg3_msgs__action__Patrol_FeedbackMessage *)allocator.allocate(sizeof(gpg3_msgs__action__Patrol_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(gpg3_msgs__action__Patrol_FeedbackMessage));
  bool success = gpg3_msgs__action__Patrol_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
gpg3_msgs__action__Patrol_FeedbackMessage__destroy(gpg3_msgs__action__Patrol_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    gpg3_msgs__action__Patrol_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
gpg3_msgs__action__Patrol_FeedbackMessage__Sequence__init(gpg3_msgs__action__Patrol_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gpg3_msgs__action__Patrol_FeedbackMessage * data = NULL;

  if (size) {
    data = (gpg3_msgs__action__Patrol_FeedbackMessage *)allocator.zero_allocate(size, sizeof(gpg3_msgs__action__Patrol_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = gpg3_msgs__action__Patrol_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        gpg3_msgs__action__Patrol_FeedbackMessage__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
gpg3_msgs__action__Patrol_FeedbackMessage__Sequence__fini(gpg3_msgs__action__Patrol_FeedbackMessage__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      gpg3_msgs__action__Patrol_FeedbackMessage__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

gpg3_msgs__action__Patrol_FeedbackMessage__Sequence *
gpg3_msgs__action__Patrol_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gpg3_msgs__action__Patrol_FeedbackMessage__Sequence * array = (gpg3_msgs__action__Patrol_FeedbackMessage__Sequence *)allocator.allocate(sizeof(gpg3_msgs__action__Patrol_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = gpg3_msgs__action__Patrol_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
gpg3_msgs__action__Patrol_FeedbackMessage__Sequence__destroy(gpg3_msgs__action__Patrol_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    gpg3_msgs__action__Patrol_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
gpg3_msgs__action__Patrol_FeedbackMessage__Sequence__are_equal(const gpg3_msgs__action__Patrol_FeedbackMessage__Sequence * lhs, const gpg3_msgs__action__Patrol_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!gpg3_msgs__action__Patrol_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
gpg3_msgs__action__Patrol_FeedbackMessage__Sequence__copy(
  const gpg3_msgs__action__Patrol_FeedbackMessage__Sequence * input,
  gpg3_msgs__action__Patrol_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(gpg3_msgs__action__Patrol_FeedbackMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    gpg3_msgs__action__Patrol_FeedbackMessage * data =
      (gpg3_msgs__action__Patrol_FeedbackMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!gpg3_msgs__action__Patrol_FeedbackMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          gpg3_msgs__action__Patrol_FeedbackMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!gpg3_msgs__action__Patrol_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
