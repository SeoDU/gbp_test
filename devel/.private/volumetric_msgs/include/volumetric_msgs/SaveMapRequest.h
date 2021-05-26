// Generated by gencpp from file volumetric_msgs/SaveMapRequest.msg
// DO NOT EDIT!


#ifndef VOLUMETRIC_MSGS_MESSAGE_SAVEMAPREQUEST_H
#define VOLUMETRIC_MSGS_MESSAGE_SAVEMAPREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace volumetric_msgs
{
template <class ContainerAllocator>
struct SaveMapRequest_
{
  typedef SaveMapRequest_<ContainerAllocator> Type;

  SaveMapRequest_()
    : file_path()  {
    }
  SaveMapRequest_(const ContainerAllocator& _alloc)
    : file_path(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _file_path_type;
  _file_path_type file_path;





  typedef boost::shared_ptr< ::volumetric_msgs::SaveMapRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::volumetric_msgs::SaveMapRequest_<ContainerAllocator> const> ConstPtr;

}; // struct SaveMapRequest_

typedef ::volumetric_msgs::SaveMapRequest_<std::allocator<void> > SaveMapRequest;

typedef boost::shared_ptr< ::volumetric_msgs::SaveMapRequest > SaveMapRequestPtr;
typedef boost::shared_ptr< ::volumetric_msgs::SaveMapRequest const> SaveMapRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::volumetric_msgs::SaveMapRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::volumetric_msgs::SaveMapRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::volumetric_msgs::SaveMapRequest_<ContainerAllocator1> & lhs, const ::volumetric_msgs::SaveMapRequest_<ContainerAllocator2> & rhs)
{
  return lhs.file_path == rhs.file_path;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::volumetric_msgs::SaveMapRequest_<ContainerAllocator1> & lhs, const ::volumetric_msgs::SaveMapRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace volumetric_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::volumetric_msgs::SaveMapRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::volumetric_msgs::SaveMapRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::volumetric_msgs::SaveMapRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::volumetric_msgs::SaveMapRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::volumetric_msgs::SaveMapRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::volumetric_msgs::SaveMapRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::volumetric_msgs::SaveMapRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "a1f82596372c52a517e1fe32d1e998e8";
  }

  static const char* value(const ::volumetric_msgs::SaveMapRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xa1f82596372c52a5ULL;
  static const uint64_t static_value2 = 0x17e1fe32d1e998e8ULL;
};

template<class ContainerAllocator>
struct DataType< ::volumetric_msgs::SaveMapRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "volumetric_msgs/SaveMapRequest";
  }

  static const char* value(const ::volumetric_msgs::SaveMapRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::volumetric_msgs::SaveMapRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string file_path\n"
;
  }

  static const char* value(const ::volumetric_msgs::SaveMapRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::volumetric_msgs::SaveMapRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.file_path);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SaveMapRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::volumetric_msgs::SaveMapRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::volumetric_msgs::SaveMapRequest_<ContainerAllocator>& v)
  {
    s << indent << "file_path: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.file_path);
  }
};

} // namespace message_operations
} // namespace ros

#endif // VOLUMETRIC_MSGS_MESSAGE_SAVEMAPREQUEST_H