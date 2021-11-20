// Generated by gencpp from file grid_map_msgs/GetGridMapInfoResponse.msg
// DO NOT EDIT!


#ifndef GRID_MAP_MSGS_MESSAGE_GETGRIDMAPINFORESPONSE_H
#define GRID_MAP_MSGS_MESSAGE_GETGRIDMAPINFORESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <grid_map_msgs/GridMapInfo.h>

namespace grid_map_msgs
{
template <class ContainerAllocator>
struct GetGridMapInfoResponse_
{
  typedef GetGridMapInfoResponse_<ContainerAllocator> Type;

  GetGridMapInfoResponse_()
    : info()  {
    }
  GetGridMapInfoResponse_(const ContainerAllocator& _alloc)
    : info(_alloc)  {
  (void)_alloc;
    }



   typedef  ::grid_map_msgs::GridMapInfo_<ContainerAllocator>  _info_type;
  _info_type info;





  typedef boost::shared_ptr< ::grid_map_msgs::GetGridMapInfoResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::grid_map_msgs::GetGridMapInfoResponse_<ContainerAllocator> const> ConstPtr;

}; // struct GetGridMapInfoResponse_

typedef ::grid_map_msgs::GetGridMapInfoResponse_<std::allocator<void> > GetGridMapInfoResponse;

typedef boost::shared_ptr< ::grid_map_msgs::GetGridMapInfoResponse > GetGridMapInfoResponsePtr;
typedef boost::shared_ptr< ::grid_map_msgs::GetGridMapInfoResponse const> GetGridMapInfoResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::grid_map_msgs::GetGridMapInfoResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::grid_map_msgs::GetGridMapInfoResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace grid_map_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'grid_map_msgs': ['/home/ros/ros_workspace/src/grid_map-1.6.0/grid_map_msgs/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::grid_map_msgs::GetGridMapInfoResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::grid_map_msgs::GetGridMapInfoResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::grid_map_msgs::GetGridMapInfoResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::grid_map_msgs::GetGridMapInfoResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::grid_map_msgs::GetGridMapInfoResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::grid_map_msgs::GetGridMapInfoResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::grid_map_msgs::GetGridMapInfoResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "a0be1719725f7fd7b490db4d64321ff2";
  }

  static const char* value(const ::grid_map_msgs::GetGridMapInfoResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xa0be1719725f7fd7ULL;
  static const uint64_t static_value2 = 0xb490db4d64321ff2ULL;
};

template<class ContainerAllocator>
struct DataType< ::grid_map_msgs::GetGridMapInfoResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "grid_map_msgs/GetGridMapInfoResponse";
  }

  static const char* value(const ::grid_map_msgs::GetGridMapInfoResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::grid_map_msgs::GetGridMapInfoResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
\n\
grid_map_msgs/GridMapInfo info\n\
\n\
\n\
================================================================================\n\
MSG: grid_map_msgs/GridMapInfo\n\
# Header (time and frame)\n\
Header header\n\
\n\
# Resolution of the grid [m/cell].\n\
float64 resolution\n\
\n\
# Length in x-direction [m].\n\
float64 length_x\n\
\n\
# Length in y-direction [m].\n\
float64 length_y\n\
\n\
# Pose of the grid map center in the frame defined in `header` [m].\n\
geometry_msgs/Pose pose\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Pose\n\
# A representation of pose in free space, composed of position and orientation. \n\
Point position\n\
Quaternion orientation\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Point\n\
# This contains the position of a point in free space\n\
float64 x\n\
float64 y\n\
float64 z\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Quaternion\n\
# This represents an orientation in free space in quaternion form.\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
float64 w\n\
";
  }

  static const char* value(const ::grid_map_msgs::GetGridMapInfoResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::grid_map_msgs::GetGridMapInfoResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.info);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetGridMapInfoResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::grid_map_msgs::GetGridMapInfoResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::grid_map_msgs::GetGridMapInfoResponse_<ContainerAllocator>& v)
  {
    s << indent << "info: ";
    s << std::endl;
    Printer< ::grid_map_msgs::GridMapInfo_<ContainerAllocator> >::stream(s, indent + "  ", v.info);
  }
};

} // namespace message_operations
} // namespace ros

#endif // GRID_MAP_MSGS_MESSAGE_GETGRIDMAPINFORESPONSE_H
