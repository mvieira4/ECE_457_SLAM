// Generated by gencpp from file grid_map_msgs/ProcessFileRequest.msg
// DO NOT EDIT!


#ifndef GRID_MAP_MSGS_MESSAGE_PROCESSFILEREQUEST_H
#define GRID_MAP_MSGS_MESSAGE_PROCESSFILEREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace grid_map_msgs
{
template <class ContainerAllocator>
struct ProcessFileRequest_
{
  typedef ProcessFileRequest_<ContainerAllocator> Type;

  ProcessFileRequest_()
    : file_path()  {
    }
  ProcessFileRequest_(const ContainerAllocator& _alloc)
    : file_path(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _file_path_type;
  _file_path_type file_path;





  typedef boost::shared_ptr< ::grid_map_msgs::ProcessFileRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::grid_map_msgs::ProcessFileRequest_<ContainerAllocator> const> ConstPtr;

}; // struct ProcessFileRequest_

typedef ::grid_map_msgs::ProcessFileRequest_<std::allocator<void> > ProcessFileRequest;

typedef boost::shared_ptr< ::grid_map_msgs::ProcessFileRequest > ProcessFileRequestPtr;
typedef boost::shared_ptr< ::grid_map_msgs::ProcessFileRequest const> ProcessFileRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::grid_map_msgs::ProcessFileRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::grid_map_msgs::ProcessFileRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace grid_map_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'grid_map_msgs': ['/home/ros/ECE_457_SLAM/navigation/ros_workspace/src/grid_map-1.6.0/grid_map_msgs/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::grid_map_msgs::ProcessFileRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::grid_map_msgs::ProcessFileRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::grid_map_msgs::ProcessFileRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::grid_map_msgs::ProcessFileRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::grid_map_msgs::ProcessFileRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::grid_map_msgs::ProcessFileRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::grid_map_msgs::ProcessFileRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "a1f82596372c52a517e1fe32d1e998e8";
  }

  static const char* value(const ::grid_map_msgs::ProcessFileRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xa1f82596372c52a5ULL;
  static const uint64_t static_value2 = 0x17e1fe32d1e998e8ULL;
};

template<class ContainerAllocator>
struct DataType< ::grid_map_msgs::ProcessFileRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "grid_map_msgs/ProcessFileRequest";
  }

  static const char* value(const ::grid_map_msgs::ProcessFileRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::grid_map_msgs::ProcessFileRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
string file_path\n\
\n\
";
  }

  static const char* value(const ::grid_map_msgs::ProcessFileRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::grid_map_msgs::ProcessFileRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.file_path);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ProcessFileRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::grid_map_msgs::ProcessFileRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::grid_map_msgs::ProcessFileRequest_<ContainerAllocator>& v)
  {
    s << indent << "file_path: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.file_path);
  }
};

} // namespace message_operations
} // namespace ros

#endif // GRID_MAP_MSGS_MESSAGE_PROCESSFILEREQUEST_H
