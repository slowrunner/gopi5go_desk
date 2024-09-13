// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from gpg3_msgs:srv/Dqn.idl
// generated code does not contain a copyright notice
#include "gpg3_msgs/srv/detail/dqn__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
gpg3_msgs__srv__Dqn_Request__init(gpg3_msgs__srv__Dqn_Request * msg)
{
  if (!msg) {
    return false;
  }
  // action
  // init
  return true;
}

void
gpg3_msgs__srv__Dqn_Request__fini(gpg3_msgs__srv__Dqn_Request * msg)
{
  if (!msg) {
    return;
  }
  // action
  // init
}

bool
gpg3_msgs__srv__Dqn_Request__are_equal(const gpg3_msgs__srv__Dqn_Request * lhs, const gpg3_msgs__srv__Dqn_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // action
  if (lhs->action != rhs->action) {
    return false;
  }
  // init
  if (lhs->init != rhs->init) {
    return false;
  }
  return true;
}

bool
gpg3_msgs__srv__Dqn_Request__copy(
  const gpg3_msgs__srv__Dqn_Request * input,
  gpg3_msgs__srv__Dqn_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // action
  output->action = input->action;
  // init
  output->init = input->init;
  return true;
}

gpg3_msgs__srv__Dqn_Request *
gpg3_msgs__srv__Dqn_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gpg3_msgs__srv__Dqn_Request * msg = (gpg3_msgs__srv__Dqn_Request *)allocator.allocate(sizeof(gpg3_msgs__srv__Dqn_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(gpg3_msgs__srv__Dqn_Request));
  bool success = gpg3_msgs__srv__Dqn_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
gpg3_msgs__srv__Dqn_Request__destroy(gpg3_msgs__srv__Dqn_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    gpg3_msgs__srv__Dqn_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
gpg3_msgs__srv__Dqn_Request__Sequence__init(gpg3_msgs__srv__Dqn_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gpg3_msgs__srv__Dqn_Request * data = NULL;

  if (size) {
    data = (gpg3_msgs__srv__Dqn_Request *)allocator.zero_allocate(size, sizeof(gpg3_msgs__srv__Dqn_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = gpg3_msgs__srv__Dqn_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        gpg3_msgs__srv__Dqn_Request__fini(&data[i - 1]);
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
gpg3_msgs__srv__Dqn_Request__Sequence__fini(gpg3_msgs__srv__Dqn_Request__Sequence * array)
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
      gpg3_msgs__srv__Dqn_Request__fini(&array->data[i]);
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

gpg3_msgs__srv__Dqn_Request__Sequence *
gpg3_msgs__srv__Dqn_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gpg3_msgs__srv__Dqn_Request__Sequence * array = (gpg3_msgs__srv__Dqn_Request__Sequence *)allocator.allocate(sizeof(gpg3_msgs__srv__Dqn_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = gpg3_msgs__srv__Dqn_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
gpg3_msgs__srv__Dqn_Request__Sequence__destroy(gpg3_msgs__srv__Dqn_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    gpg3_msgs__srv__Dqn_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
gpg3_msgs__srv__Dqn_Request__Sequence__are_equal(const gpg3_msgs__srv__Dqn_Request__Sequence * lhs, const gpg3_msgs__srv__Dqn_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!gpg3_msgs__srv__Dqn_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
gpg3_msgs__srv__Dqn_Request__Sequence__copy(
  const gpg3_msgs__srv__Dqn_Request__Sequence * input,
  gpg3_msgs__srv__Dqn_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(gpg3_msgs__srv__Dqn_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    gpg3_msgs__srv__Dqn_Request * data =
      (gpg3_msgs__srv__Dqn_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!gpg3_msgs__srv__Dqn_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          gpg3_msgs__srv__Dqn_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!gpg3_msgs__srv__Dqn_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `state`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
gpg3_msgs__srv__Dqn_Response__init(gpg3_msgs__srv__Dqn_Response * msg)
{
  if (!msg) {
    return false;
  }
  // state
  if (!rosidl_runtime_c__float__Sequence__init(&msg->state, 0)) {
    gpg3_msgs__srv__Dqn_Response__fini(msg);
    return false;
  }
  // reward
  // done
  return true;
}

void
gpg3_msgs__srv__Dqn_Response__fini(gpg3_msgs__srv__Dqn_Response * msg)
{
  if (!msg) {
    return;
  }
  // state
  rosidl_runtime_c__float__Sequence__fini(&msg->state);
  // reward
  // done
}

bool
gpg3_msgs__srv__Dqn_Response__are_equal(const gpg3_msgs__srv__Dqn_Response * lhs, const gpg3_msgs__srv__Dqn_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // state
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->state), &(rhs->state)))
  {
    return false;
  }
  // reward
  if (lhs->reward != rhs->reward) {
    return false;
  }
  // done
  if (lhs->done != rhs->done) {
    return false;
  }
  return true;
}

bool
gpg3_msgs__srv__Dqn_Response__copy(
  const gpg3_msgs__srv__Dqn_Response * input,
  gpg3_msgs__srv__Dqn_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // state
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->state), &(output->state)))
  {
    return false;
  }
  // reward
  output->reward = input->reward;
  // done
  output->done = input->done;
  return true;
}

gpg3_msgs__srv__Dqn_Response *
gpg3_msgs__srv__Dqn_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gpg3_msgs__srv__Dqn_Response * msg = (gpg3_msgs__srv__Dqn_Response *)allocator.allocate(sizeof(gpg3_msgs__srv__Dqn_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(gpg3_msgs__srv__Dqn_Response));
  bool success = gpg3_msgs__srv__Dqn_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
gpg3_msgs__srv__Dqn_Response__destroy(gpg3_msgs__srv__Dqn_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    gpg3_msgs__srv__Dqn_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
gpg3_msgs__srv__Dqn_Response__Sequence__init(gpg3_msgs__srv__Dqn_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gpg3_msgs__srv__Dqn_Response * data = NULL;

  if (size) {
    data = (gpg3_msgs__srv__Dqn_Response *)allocator.zero_allocate(size, sizeof(gpg3_msgs__srv__Dqn_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = gpg3_msgs__srv__Dqn_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        gpg3_msgs__srv__Dqn_Response__fini(&data[i - 1]);
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
gpg3_msgs__srv__Dqn_Response__Sequence__fini(gpg3_msgs__srv__Dqn_Response__Sequence * array)
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
      gpg3_msgs__srv__Dqn_Response__fini(&array->data[i]);
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

gpg3_msgs__srv__Dqn_Response__Sequence *
gpg3_msgs__srv__Dqn_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gpg3_msgs__srv__Dqn_Response__Sequence * array = (gpg3_msgs__srv__Dqn_Response__Sequence *)allocator.allocate(sizeof(gpg3_msgs__srv__Dqn_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = gpg3_msgs__srv__Dqn_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
gpg3_msgs__srv__Dqn_Response__Sequence__destroy(gpg3_msgs__srv__Dqn_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    gpg3_msgs__srv__Dqn_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
gpg3_msgs__srv__Dqn_Response__Sequence__are_equal(const gpg3_msgs__srv__Dqn_Response__Sequence * lhs, const gpg3_msgs__srv__Dqn_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!gpg3_msgs__srv__Dqn_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
gpg3_msgs__srv__Dqn_Response__Sequence__copy(
  const gpg3_msgs__srv__Dqn_Response__Sequence * input,
  gpg3_msgs__srv__Dqn_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(gpg3_msgs__srv__Dqn_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    gpg3_msgs__srv__Dqn_Response * data =
      (gpg3_msgs__srv__Dqn_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!gpg3_msgs__srv__Dqn_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          gpg3_msgs__srv__Dqn_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!gpg3_msgs__srv__Dqn_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
