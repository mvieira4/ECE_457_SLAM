// Generated by gencpp from file rosbot_ekf/ConfigurationResponse.msg
// DO NOT EDIT!


#ifndef ROSBOT_EKF_MESSAGE_CONFIGURATIONRESPONSE_H
#define ROSBOT_EKF_MESSAGE_CONFIGURATIONRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace rosbot_ekf
{
template <class ContainerAllocator>
struct ConfigurationResponse_
{
  typedef ConfigurationResponse_<ContainerAllocator> Type;

  ConfigurationResponse_()
    : data()
    , result(0)  {
    }
  ConfigurationResponse_(const ContainerAllocator& _alloc)
    : data(_alloc)
    , result(0)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _data_type;
  _data_type data;

   typedef uint8_t _result_type;
  _result_type result;



// reducing the odds to have name collisions with Windows.h 
#if defined(_WIN32) && defined(SUCCESS)
  #undef SUCCESS
#endif
#if defined(_WIN32) && defined(FAILURE)
  #undef FAILURE
#endif
#if defined(_WIN32) && defined(COMMAND_NOT_FOUND)
  #undef COMMAND_NOT_FOUND
#endif

  enum {
    SUCCESS = 0u,
    FAILURE = 1u,
    COMMAND_NOT_FOUND = 2u,
  };


  typedef boost::shared_ptr< ::rosbot_ekf::ConfigurationResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rosbot_ekf::ConfigurationResponse_<ContainerAllocator> const> ConstPtr;

}; // struct ConfigurationResponse_

typedef ::rosbot_ekf::ConfigurationResponse_<std::allocator<void> > ConfigurationResponse;

typedef boost::shared_ptr< ::rosbot_ekf::ConfigurationResponse > ConfigurationResponsePtr;
typedef boost::shared_ptr< ::rosbot_ekf::ConfigurationResponse const> ConfigurationResponseConstPtr;

// constants requiring out of line definition

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::rosbot_ekf::ConfigurationResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::rosbot_ekf::ConfigurationResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::rosbot_ekf::ConfigurationResponse_<ContainerAllocator1> & lhs, const ::rosbot_ekf::ConfigurationResponse_<ContainerAllocator2> & rhs)
{
  return lhs.data == rhs.data &&
    lhs.result == rhs.result;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::rosbot_ekf::ConfigurationResponse_<ContainerAllocator1> & lhs, const ::rosbot_ekf::ConfigurationResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace rosbot_ekf

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::rosbot_ekf::ConfigurationResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rosbot_ekf::ConfigurationResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rosbot_ekf::ConfigurationResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rosbot_ekf::ConfigurationResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rosbot_ekf::ConfigurationResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rosbot_ekf::ConfigurationResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::rosbot_ekf::ConfigurationResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d26ad64e1f52355ee24245b602a171ba";
  }

  static const char* value(const ::rosbot_ekf::ConfigurationResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd26ad64e1f52355eULL;
  static const uint64_t static_value2 = 0xe24245b602a171baULL;
};

template<class ContainerAllocator>
struct DataType< ::rosbot_ekf::ConfigurationResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "rosbot_ekf/ConfigurationResponse";
  }

  static const char* value(const ::rosbot_ekf::ConfigurationResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::rosbot_ekf::ConfigurationResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string data\n"
"uint8 result\n"
"uint8 SUCCESS=0\n"
"uint8 FAILURE=1\n"
"uint8 COMMAND_NOT_FOUND=2\n"
"\n"
;
  }

  static const char* value(const ::rosbot_ekf::ConfigurationResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::rosbot_ekf::ConfigurationResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.data);
      stream.next(m.result);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ConfigurationResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::rosbot_ekf::ConfigurationResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::rosbot_ekf::ConfigurationResponse_<ContainerAllocator>& v)
  {
    s << indent << "data: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.data);
    s << indent << "result: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.result);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROSBOT_EKF_MESSAGE_CONFIGURATIONRESPONSE_H
