// Generated by gencpp from file planner_msgs/planner_srvRequest.msg
// DO NOT EDIT!


#ifndef PLANNER_MSGS_MESSAGE_PLANNER_SRVREQUEST_H
#define PLANNER_MSGS_MESSAGE_PLANNER_SRVREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <geometry_msgs/Pose.h>

namespace planner_msgs
{
template <class ContainerAllocator>
struct planner_srvRequest_
{
  typedef planner_srvRequest_<ContainerAllocator> Type;

  planner_srvRequest_()
    : header()
    , bound_mode(0)
    , root_pose()  {
    }
  planner_srvRequest_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , bound_mode(0)
    , root_pose(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef int32_t _bound_mode_type;
  _bound_mode_type bound_mode;

   typedef  ::geometry_msgs::Pose_<ContainerAllocator>  _root_pose_type;
  _root_pose_type root_pose;



// reducing the odds to have name collisions with Windows.h 
#if defined(_WIN32) && defined(kExtendedBound)
  #undef kExtendedBound
#endif
#if defined(_WIN32) && defined(kRelaxedBound)
  #undef kRelaxedBound
#endif
#if defined(_WIN32) && defined(kMinBound)
  #undef kMinBound
#endif
#if defined(_WIN32) && defined(kExactBound)
  #undef kExactBound
#endif
#if defined(_WIN32) && defined(kNoBound)
  #undef kNoBound
#endif

  enum {
    kExtendedBound = 0,
    kRelaxedBound = 1,
    kMinBound = 2,
    kExactBound = 3,
    kNoBound = 4,
  };


  typedef boost::shared_ptr< ::planner_msgs::planner_srvRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::planner_msgs::planner_srvRequest_<ContainerAllocator> const> ConstPtr;

}; // struct planner_srvRequest_

typedef ::planner_msgs::planner_srvRequest_<std::allocator<void> > planner_srvRequest;

typedef boost::shared_ptr< ::planner_msgs::planner_srvRequest > planner_srvRequestPtr;
typedef boost::shared_ptr< ::planner_msgs::planner_srvRequest const> planner_srvRequestConstPtr;

// constants requiring out of line definition

   

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::planner_msgs::planner_srvRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::planner_msgs::planner_srvRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::planner_msgs::planner_srvRequest_<ContainerAllocator1> & lhs, const ::planner_msgs::planner_srvRequest_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.bound_mode == rhs.bound_mode &&
    lhs.root_pose == rhs.root_pose;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::planner_msgs::planner_srvRequest_<ContainerAllocator1> & lhs, const ::planner_msgs::planner_srvRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace planner_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::planner_msgs::planner_srvRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::planner_msgs::planner_srvRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::planner_msgs::planner_srvRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::planner_msgs::planner_srvRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::planner_msgs::planner_srvRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::planner_msgs::planner_srvRequest_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::planner_msgs::planner_srvRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "173b25791b1e0a7f0498fdd54b227c88";
  }

  static const char* value(const ::planner_msgs::planner_srvRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x173b25791b1e0a7fULL;
  static const uint64_t static_value2 = 0x0498fdd54b227c88ULL;
};

template<class ContainerAllocator>
struct DataType< ::planner_msgs::planner_srvRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "planner_msgs/planner_srvRequest";
  }

  static const char* value(const ::planner_msgs::planner_srvRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::planner_msgs::planner_srvRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Request the planner to run and return a path\n"
"Header header\n"
"\n"
"# Set the bound mode of the robot to use in planner.\n"
"# Use extension to actual size. (default)\n"
"int32 kExtendedBound = 0\n"
"int32 kRelaxedBound = 1\n"
"int32 kMinBound = 2\n"
"int32 kExactBound = 3\n"
"int32 kNoBound = 4\n"
"# Can only be used with one of above values. Check Params/BoundModeType for more details.\n"
"int32 bound_mode\n"
"\n"
"# Set root pose if requires the planner starts planning from this root.\n"
"# Otherwise, set all to zero, planner will start at robot's current state.\n"
"geometry_msgs/Pose root_pose\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Pose\n"
"# A representation of pose in free space, composed of position and orientation. \n"
"Point position\n"
"Quaternion orientation\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Point\n"
"# This contains the position of a point in free space\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Quaternion\n"
"# This represents an orientation in free space in quaternion form.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"float64 w\n"
;
  }

  static const char* value(const ::planner_msgs::planner_srvRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::planner_msgs::planner_srvRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.bound_mode);
      stream.next(m.root_pose);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct planner_srvRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::planner_msgs::planner_srvRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::planner_msgs::planner_srvRequest_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "bound_mode: ";
    Printer<int32_t>::stream(s, indent + "  ", v.bound_mode);
    s << indent << "root_pose: ";
    s << std::endl;
    Printer< ::geometry_msgs::Pose_<ContainerAllocator> >::stream(s, indent + "  ", v.root_pose);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PLANNER_MSGS_MESSAGE_PLANNER_SRVREQUEST_H
