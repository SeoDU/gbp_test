// Generated by gencpp from file planner_msgs/planner_globalResponse.msg
// DO NOT EDIT!


#ifndef PLANNER_MSGS_MESSAGE_PLANNER_GLOBALRESPONSE_H
#define PLANNER_MSGS_MESSAGE_PLANNER_GLOBALRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/Pose.h>

namespace planner_msgs
{
template <class ContainerAllocator>
struct planner_globalResponse_
{
  typedef planner_globalResponse_<ContainerAllocator> Type;

  planner_globalResponse_()
    : path()  {
    }
  planner_globalResponse_(const ContainerAllocator& _alloc)
    : path(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector< ::geometry_msgs::Pose_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::geometry_msgs::Pose_<ContainerAllocator> >::other >  _path_type;
  _path_type path;





  typedef boost::shared_ptr< ::planner_msgs::planner_globalResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::planner_msgs::planner_globalResponse_<ContainerAllocator> const> ConstPtr;

}; // struct planner_globalResponse_

typedef ::planner_msgs::planner_globalResponse_<std::allocator<void> > planner_globalResponse;

typedef boost::shared_ptr< ::planner_msgs::planner_globalResponse > planner_globalResponsePtr;
typedef boost::shared_ptr< ::planner_msgs::planner_globalResponse const> planner_globalResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::planner_msgs::planner_globalResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::planner_msgs::planner_globalResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::planner_msgs::planner_globalResponse_<ContainerAllocator1> & lhs, const ::planner_msgs::planner_globalResponse_<ContainerAllocator2> & rhs)
{
  return lhs.path == rhs.path;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::planner_msgs::planner_globalResponse_<ContainerAllocator1> & lhs, const ::planner_msgs::planner_globalResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace planner_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::planner_msgs::planner_globalResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::planner_msgs::planner_globalResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::planner_msgs::planner_globalResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::planner_msgs::planner_globalResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::planner_msgs::planner_globalResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::planner_msgs::planner_globalResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::planner_msgs::planner_globalResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "3672a680f9a8e1a187c20ffb2e3a206b";
  }

  static const char* value(const ::planner_msgs::planner_globalResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x3672a680f9a8e1a1ULL;
  static const uint64_t static_value2 = 0x87c20ffb2e3a206bULL;
};

template<class ContainerAllocator>
struct DataType< ::planner_msgs::planner_globalResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "planner_msgs/planner_globalResponse";
  }

  static const char* value(const ::planner_msgs::planner_globalResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::planner_msgs::planner_globalResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Return best path.\n"
"geometry_msgs/Pose[] path\n"
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

  static const char* value(const ::planner_msgs::planner_globalResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::planner_msgs::planner_globalResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.path);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct planner_globalResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::planner_msgs::planner_globalResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::planner_msgs::planner_globalResponse_<ContainerAllocator>& v)
  {
    s << indent << "path[]" << std::endl;
    for (size_t i = 0; i < v.path.size(); ++i)
    {
      s << indent << "  path[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::geometry_msgs::Pose_<ContainerAllocator> >::stream(s, indent + "    ", v.path[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // PLANNER_MSGS_MESSAGE_PLANNER_GLOBALRESPONSE_H
