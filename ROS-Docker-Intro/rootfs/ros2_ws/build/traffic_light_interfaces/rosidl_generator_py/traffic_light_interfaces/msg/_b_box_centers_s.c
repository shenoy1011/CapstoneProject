// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from traffic_light_interfaces:msg/BBoxCenters.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "traffic_light_interfaces/msg/detail/b_box_centers__struct.h"
#include "traffic_light_interfaces/msg/detail/b_box_centers__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "traffic_light_interfaces/msg/detail/b_box_center__functions.h"
// end nested array functions include
bool traffic_light_interfaces__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * traffic_light_interfaces__msg__header__convert_to_py(void * raw_ros_message);
bool traffic_light_interfaces__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * traffic_light_interfaces__msg__header__convert_to_py(void * raw_ros_message);
bool traffic_light_interfaces__msg__b_box_center__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * traffic_light_interfaces__msg__b_box_center__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool traffic_light_interfaces__msg__b_box_centers__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[56];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("traffic_light_interfaces.msg._b_box_centers.BBoxCenters", full_classname_dest, 55) == 0);
  }
  traffic_light_interfaces__msg__BBoxCenters * ros_message = _ros_message;
  {  // header
    PyObject * field = PyObject_GetAttrString(_pymsg, "header");
    if (!field) {
      return false;
    }
    if (!traffic_light_interfaces__msg__header__convert_from_py(field, &ros_message->header)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // image_header
    PyObject * field = PyObject_GetAttrString(_pymsg, "image_header");
    if (!field) {
      return false;
    }
    if (!traffic_light_interfaces__msg__header__convert_from_py(field, &ros_message->image_header)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // bbox_centers
    PyObject * field = PyObject_GetAttrString(_pymsg, "bbox_centers");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'bbox_centers'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!traffic_light_interfaces__msg__BBoxCenter__Sequence__init(&(ros_message->bbox_centers), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create traffic_light_interfaces__msg__BBoxCenter__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    traffic_light_interfaces__msg__BBoxCenter * dest = ros_message->bbox_centers.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!traffic_light_interfaces__msg__b_box_center__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * traffic_light_interfaces__msg__b_box_centers__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of BBoxCenters */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("traffic_light_interfaces.msg._b_box_centers");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "BBoxCenters");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  traffic_light_interfaces__msg__BBoxCenters * ros_message = (traffic_light_interfaces__msg__BBoxCenters *)raw_ros_message;
  {  // header
    PyObject * field = NULL;
    field = traffic_light_interfaces__msg__header__convert_to_py(&ros_message->header);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "header", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // image_header
    PyObject * field = NULL;
    field = traffic_light_interfaces__msg__header__convert_to_py(&ros_message->image_header);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "image_header", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bbox_centers
    PyObject * field = NULL;
    size_t size = ros_message->bbox_centers.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    traffic_light_interfaces__msg__BBoxCenter * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->bbox_centers.data[i]);
      PyObject * pyitem = traffic_light_interfaces__msg__b_box_center__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "bbox_centers", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
