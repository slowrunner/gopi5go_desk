// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from gpg3_msgs:msg/Sound.idl
// generated code does not contain a copyright notice
#include "gpg3_msgs/msg/detail/sound__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
gpg3_msgs__msg__Sound__init(gpg3_msgs__msg__Sound * msg)
{
  if (!msg) {
    return false;
  }
  // value
  return true;
}

void
gpg3_msgs__msg__Sound__fini(gpg3_msgs__msg__Sound * msg)
{
  if (!msg) {
    return;
  }
  // value
}

bool
gpg3_msgs__msg__Sound__are_equal(const gpg3_msgs__msg__Sound * lhs, const gpg3_msgs__msg__Sound * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // value
  if (lhs->value != rhs->value) {
    return false;
  }
  return true;
}

bool
gpg3_msgs__msg__Sound__copy(
  const gpg3_msgs__msg__Sound * input,
  gpg3_msgs__msg__Sound * output)
{
  if (!input || !output) {
    return false;
  }
  // value
  output->value = input->value;
  return true;
}

gpg3_msgs__msg__Sound *
gpg3_msgs__msg__Sound__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gpg3_msgs__msg__Sound * msg = (gpg3_msgs__msg__Sound *)allocator.allocate(sizeof(gpg3_msgs__msg__Sound), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(gpg3_msgs__msg__Sound));
  bool success = gpg3_msgs__msg__Sound__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
gpg3_msgs__msg__Sound__destroy(gpg3_msgs__msg__Sound * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    gpg3_msgs__msg__Sound__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
gpg3_msgs__msg__Sound__Sequence__init(gpg3_msgs__msg__Sound__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gpg3_msgs__msg__Sound * data = NULL;

  if (size) {
    data = (gpg3_msgs__msg__Sound *)allocator.zero_allocate(size, sizeof(gpg3_msgs__msg__Sound), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = gpg3_msgs__msg__Sound__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        gpg3_msgs__msg__Sound__fini(&data[i - 1]);
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
gpg3_msgs__msg__Sound__Sequence__fini(gpg3_msgs__msg__Sound__Sequence * array)
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
      gpg3_msgs__msg__Sound__fini(&array->data[i]);
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

gpg3_msgs__msg__Sound__Sequence *
gpg3_msgs__msg__Sound__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gpg3_msgs__msg__Sound__Sequence * array = (gpg3_msgs__msg__Sound__Sequence *)allocator.allocate(sizeof(gpg3_msgs__msg__Sound__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = gpg3_msgs__msg__Sound__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
gpg3_msgs__msg__Sound__Sequence__destroy(gpg3_msgs__msg__Sound__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    gpg3_msgs__msg__Sound__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
gpg3_msgs__msg__Sound__Sequence__are_equal(const gpg3_msgs__msg__Sound__Sequence * lhs, const gpg3_msgs__msg__Sound__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!gpg3_msgs__msg__Sound__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
gpg3_msgs__msg__Sound__Sequence__copy(
  const gpg3_msgs__msg__Sound__Sequence * input,
  gpg3_msgs__msg__Sound__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(gpg3_msgs__msg__Sound);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    gpg3_msgs__msg__Sound * data =
      (gpg3_msgs__msg__Sound *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!gpg3_msgs__msg__Sound__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          gpg3_msgs__msg__Sound__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!gpg3_msgs__msg__Sound__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
