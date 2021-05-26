// Generated by gencpp from file volumetric_msgs/GetChangedPointsResponse.msg
// DO NOT EDIT!


#ifndef VOLUMETRIC_MSGS_MESSAGE_GETCHANGEDPOINTSRESPONSE_H
#define VOLUMETRIC_MSGS_MESSAGE_GETCHANGEDPOINTSRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/Vector3.h>

namespace volumetric_msgs
{
template <class ContainerAllocator>
struct GetChangedPointsResponse_
{
  typedef GetChangedPointsResponse_<ContainerAllocator> Type;

  GetChangedPointsResponse_()
    : size(0)
    , changed_points()
    , changed_states()  {
    }
  GetChangedPointsResponse_(const ContainerAllocator& _alloc)
    : size(0)
    , changed_points(_alloc)
    , changed_states(_alloc)  {
  (void)_alloc;
    }



   typedef int32_t _size_type;
  _size_type size;

   typedef std::vector< ::geometry_msgs::Vector3_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::geometry_msgs::Vector3_<ContainerAllocator> >::other >  _changed_points_type;
  _changed_points_type changed_points;

   typedef std::vector<uint8_t, typename ContainerAllocator::template rebind<uint8_t>::other >  _changed_states_type;
  _changed_states_type changed_states;





  typedef boost::shared_ptr< ::volumetric_msgs::GetChangedPointsResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::volumetric_msgs::GetChangedPointsResponse_<ContainerAllocator> const> ConstPtr;

}; // struct GetChangedPointsResponse_

typedef ::volumetric_msgs::GetChangedPointsResponse_<std::allocator<void> > GetChangedPointsResponse;

typedef boost::shared_ptr< ::volumetric_msgs::GetChangedPointsResponse > GetChangedPointsResponsePtr;
typedef boost::shared_ptr< ::volumetric_msgs::GetChangedPointsResponse const> GetChangedPointsResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::volumetric_msgs::GetChangedPointsResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::volumetric_msgs::GetChangedPointsResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::volumetric_msgs::GetChangedPointsResponse_<ContainerAllocator1> & lhs, const ::volumetric_msgs::GetChangedPointsResponse_<ContainerAllocator2> & rhs)
{
  return lhs.size == rhs.size &&
    lhs.changed_points == rhs.changed_points &&
    lhs.changed_states == rhs.changed_states;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::volumetric_msgs::GetChangedPointsResponse_<ContainerAllocator1> & lhs, const ::volumetric_msgs::GetChangedPointsResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace volumetric_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::volumetric_msgs::GetChangedPointsResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::volumetric_msgs::GetChangedPointsResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::volumetric_msgs::GetChangedPointsResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::volumetric_msgs::GetChangedPointsResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::volumetric_msgs::GetChangedPointsResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::volumetric_msgs::GetChangedPointsResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::volumetric_msgs::GetChangedPointsResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "b13aac43ad02af7141713450fbaa2797";
  }

  static const char* value(const ::volumetric_msgs::GetChangedPointsResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xb13aac43ad02af71ULL;
  static const uint64_t static_value2 = 0x41713450fbaa2797ULL;
};

template<class ContainerAllocator>
struct DataType< ::volumetric_msgs::GetChangedPointsResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "volumetric_msgs/GetChangedPointsResponse";
  }

  static const char* value(const ::volumetric_msgs::GetChangedPointsResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::volumetric_msgs::GetChangedPointsResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 size\n"
"geometry_msgs/Vector3[] changed_points\n"
"bool[] changed_states\n"
"\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Vector3\n"
"# This represents a vector in free space. \n"
"# It is only meant to represent a direction. Therefore, it does not\n"
"# make sense to apply a translation to it (e.g., when applying a \n"
"# generic rigid transformation to a Vector3, tf2 will only apply the\n"
"# rotation). If you want your data to be translatable too, use the\n"
"# geometry_msgs/Point message instead.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
;
  }

  static const char* value(const ::volumetric_msgs::GetChangedPointsResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::volumetric_msgs::GetChangedPointsResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.size);
      stream.next(m.changed_points);
      stream.next(m.changed_states);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetChangedPointsResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::volumetric_msgs::GetChangedPointsResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::volumetric_msgs::GetChangedPointsResponse_<ContainerAllocator>& v)
  {
    s << indent << "size: ";
    Printer<int32_t>::stream(s, indent + "  ", v.size);
    s << indent << "changed_points[]" << std::endl;
    for (size_t i = 0; i < v.changed_points.size(); ++i)
    {
      s << indent << "  changed_points[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::geometry_msgs::Vector3_<ContainerAllocator> >::stream(s, indent + "    ", v.changed_points[i]);
    }
    s << indent << "changed_states[]" << std::endl;
    for (size_t i = 0; i < v.changed_states.size(); ++i)
    {
      s << indent << "  changed_states[" << i << "]: ";
      Printer<uint8_t>::stream(s, indent + "  ", v.changed_states[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // VOLUMETRIC_MSGS_MESSAGE_GETCHANGEDPOINTSRESPONSE_H