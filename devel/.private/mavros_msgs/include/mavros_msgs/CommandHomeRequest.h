// Generated by gencpp from file mavros_msgs/CommandHomeRequest.msg
// DO NOT EDIT!


#ifndef MAVROS_MSGS_MESSAGE_COMMANDHOMEREQUEST_H
#define MAVROS_MSGS_MESSAGE_COMMANDHOMEREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace mavros_msgs
{
template <class ContainerAllocator>
struct CommandHomeRequest_
{
  typedef CommandHomeRequest_<ContainerAllocator> Type;

  CommandHomeRequest_()
    : current_gps(false)
    , yaw(0.0)
    , latitude(0.0)
    , longitude(0.0)
    , altitude(0.0)  {
    }
  CommandHomeRequest_(const ContainerAllocator& _alloc)
    : current_gps(false)
    , yaw(0.0)
    , latitude(0.0)
    , longitude(0.0)
    , altitude(0.0)  {
  (void)_alloc;
    }



   typedef uint8_t _current_gps_type;
  _current_gps_type current_gps;

   typedef float _yaw_type;
  _yaw_type yaw;

   typedef float _latitude_type;
  _latitude_type latitude;

   typedef float _longitude_type;
  _longitude_type longitude;

   typedef float _altitude_type;
  _altitude_type altitude;





  typedef boost::shared_ptr< ::mavros_msgs::CommandHomeRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::mavros_msgs::CommandHomeRequest_<ContainerAllocator> const> ConstPtr;

}; // struct CommandHomeRequest_

typedef ::mavros_msgs::CommandHomeRequest_<std::allocator<void> > CommandHomeRequest;

typedef boost::shared_ptr< ::mavros_msgs::CommandHomeRequest > CommandHomeRequestPtr;
typedef boost::shared_ptr< ::mavros_msgs::CommandHomeRequest const> CommandHomeRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::mavros_msgs::CommandHomeRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::mavros_msgs::CommandHomeRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::mavros_msgs::CommandHomeRequest_<ContainerAllocator1> & lhs, const ::mavros_msgs::CommandHomeRequest_<ContainerAllocator2> & rhs)
{
  return lhs.current_gps == rhs.current_gps &&
    lhs.yaw == rhs.yaw &&
    lhs.latitude == rhs.latitude &&
    lhs.longitude == rhs.longitude &&
    lhs.altitude == rhs.altitude;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::mavros_msgs::CommandHomeRequest_<ContainerAllocator1> & lhs, const ::mavros_msgs::CommandHomeRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace mavros_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::mavros_msgs::CommandHomeRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mavros_msgs::CommandHomeRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mavros_msgs::CommandHomeRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mavros_msgs::CommandHomeRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mavros_msgs::CommandHomeRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mavros_msgs::CommandHomeRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::mavros_msgs::CommandHomeRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "af3ed5fc0724380793eba353ee384c9a";
  }

  static const char* value(const ::mavros_msgs::CommandHomeRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xaf3ed5fc07243807ULL;
  static const uint64_t static_value2 = 0x93eba353ee384c9aULL;
};

template<class ContainerAllocator>
struct DataType< ::mavros_msgs::CommandHomeRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "mavros_msgs/CommandHomeRequest";
  }

  static const char* value(const ::mavros_msgs::CommandHomeRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::mavros_msgs::CommandHomeRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# request set new home position\n"
"\n"
"bool current_gps\n"
"float32 yaw\n"
"float32 latitude\n"
"float32 longitude\n"
"float32 altitude\n"
;
  }

  static const char* value(const ::mavros_msgs::CommandHomeRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::mavros_msgs::CommandHomeRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.current_gps);
      stream.next(m.yaw);
      stream.next(m.latitude);
      stream.next(m.longitude);
      stream.next(m.altitude);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct CommandHomeRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::mavros_msgs::CommandHomeRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::mavros_msgs::CommandHomeRequest_<ContainerAllocator>& v)
  {
    s << indent << "current_gps: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.current_gps);
    s << indent << "yaw: ";
    Printer<float>::stream(s, indent + "  ", v.yaw);
    s << indent << "latitude: ";
    Printer<float>::stream(s, indent + "  ", v.latitude);
    s << indent << "longitude: ";
    Printer<float>::stream(s, indent + "  ", v.longitude);
    s << indent << "altitude: ";
    Printer<float>::stream(s, indent + "  ", v.altitude);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MAVROS_MSGS_MESSAGE_COMMANDHOMEREQUEST_H
