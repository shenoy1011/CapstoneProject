# generated from rosidl_generator_py/resource/_idl.py.em
# with input from traffic_light_interfaces:msg/BBoxCenter.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'type'
import array  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_BBoxCenter(type):
    """Metaclass of message 'BBoxCenter'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('traffic_light_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'traffic_light_interfaces.msg.BBoxCenter')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__b_box_center
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__b_box_center
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__b_box_center
            cls._TYPE_SUPPORT = module.type_support_msg__msg__b_box_center
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__b_box_center

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class BBoxCenter(metaclass=Metaclass_BBoxCenter):
    """Message class 'BBoxCenter'."""

    __slots__ = [
        '_probability',
        '_xmin',
        '_ymin',
        '_xmax',
        '_ymax',
        '_center_x',
        '_center_y',
        '_center_z',
        '_id',
        '_type',
    ]

    _fields_and_field_types = {
        'probability': 'double',
        'xmin': 'int64',
        'ymin': 'int64',
        'xmax': 'int64',
        'ymax': 'int64',
        'center_x': 'double',
        'center_y': 'double',
        'center_z': 'double',
        'id': 'int16',
        'type': 'sequence<int16>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int16')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.probability = kwargs.get('probability', float())
        self.xmin = kwargs.get('xmin', int())
        self.ymin = kwargs.get('ymin', int())
        self.xmax = kwargs.get('xmax', int())
        self.ymax = kwargs.get('ymax', int())
        self.center_x = kwargs.get('center_x', float())
        self.center_y = kwargs.get('center_y', float())
        self.center_z = kwargs.get('center_z', float())
        self.id = kwargs.get('id', int())
        self.type = array.array('h', kwargs.get('type', []))

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.probability != other.probability:
            return False
        if self.xmin != other.xmin:
            return False
        if self.ymin != other.ymin:
            return False
        if self.xmax != other.xmax:
            return False
        if self.ymax != other.ymax:
            return False
        if self.center_x != other.center_x:
            return False
        if self.center_y != other.center_y:
            return False
        if self.center_z != other.center_z:
            return False
        if self.id != other.id:
            return False
        if self.type != other.type:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def probability(self):
        """Message field 'probability'."""
        return self._probability

    @probability.setter
    def probability(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'probability' field must be of type 'float'"
        self._probability = value

    @property
    def xmin(self):
        """Message field 'xmin'."""
        return self._xmin

    @xmin.setter
    def xmin(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'xmin' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'xmin' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._xmin = value

    @property
    def ymin(self):
        """Message field 'ymin'."""
        return self._ymin

    @ymin.setter
    def ymin(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ymin' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'ymin' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._ymin = value

    @property
    def xmax(self):
        """Message field 'xmax'."""
        return self._xmax

    @xmax.setter
    def xmax(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'xmax' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'xmax' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._xmax = value

    @property
    def ymax(self):
        """Message field 'ymax'."""
        return self._ymax

    @ymax.setter
    def ymax(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ymax' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'ymax' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._ymax = value

    @property
    def center_x(self):
        """Message field 'center_x'."""
        return self._center_x

    @center_x.setter
    def center_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'center_x' field must be of type 'float'"
        self._center_x = value

    @property
    def center_y(self):
        """Message field 'center_y'."""
        return self._center_y

    @center_y.setter
    def center_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'center_y' field must be of type 'float'"
        self._center_y = value

    @property
    def center_z(self):
        """Message field 'center_z'."""
        return self._center_z

    @center_z.setter
    def center_z(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'center_z' field must be of type 'float'"
        self._center_z = value

    @property  # noqa: A003
    def id(self):  # noqa: A003
        """Message field 'id'."""
        return self._id

    @id.setter  # noqa: A003
    def id(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'id' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'id' field must be an integer in [-32768, 32767]"
        self._id = value

    @property  # noqa: A003
    def type(self):  # noqa: A003
        """Message field 'type'."""
        return self._type

    @type.setter  # noqa: A003
    def type(self, value):  # noqa: A003
        if isinstance(value, array.array):
            assert value.typecode == 'h', \
                "The 'type' array.array() must have the type code of 'h'"
            self._type = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, int) for v in value) and
                 all(val >= -32768 and val < 32768 for val in value)), \
                "The 'type' field must be a set or sequence and each value of type 'int' and each integer in [-32768, 32767]"
        self._type = array.array('h', value)
