// Generated by gencpp from file planner_msgs/Edge.msg
// DO NOT EDIT!


#ifndef PLANNER_MSGS_MESSAGE_EDGE_H
#define PLANNER_MSGS_MESSAGE_EDGE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace planner_msgs
{
template <class ContainerAllocator>
struct Edge_
{
  typedef Edge_<ContainerAllocator> Type;

  Edge_()
    : source_id(0)
    , target_id(0)
    , weight(0.0)  {
    }
  Edge_(const ContainerAllocator& _alloc)
    : source_id(0)
    , target_id(0)
    , weight(0.0)  {
  (void)_alloc;
    }



   typedef int32_t _source_id_type;
  _source_id_type source_id;

   typedef int32_t _target_id_type;
  _target_id_type target_id;

   typedef float _weight_type;
  _weight_type weight;





  typedef boost::shared_ptr< ::planner_msgs::Edge_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::planner_msgs::Edge_<ContainerAllocator> const> ConstPtr;

}; // struct Edge_

typedef ::planner_msgs::Edge_<std::allocator<void> > Edge;

typedef boost::shared_ptr< ::planner_msgs::Edge > EdgePtr;
typedef boost::shared_ptr< ::planner_msgs::Edge const> EdgeConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::planner_msgs::Edge_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::planner_msgs::Edge_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::planner_msgs::Edge_<ContainerAllocator1> & lhs, const ::planner_msgs::Edge_<ContainerAllocator2> & rhs)
{
  return lhs.source_id == rhs.source_id &&
    lhs.target_id == rhs.target_id &&
    lhs.weight == rhs.weight;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::planner_msgs::Edge_<ContainerAllocator1> & lhs, const ::planner_msgs::Edge_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace planner_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::planner_msgs::Edge_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::planner_msgs::Edge_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::planner_msgs::Edge_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::planner_msgs::Edge_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::planner_msgs::Edge_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::planner_msgs::Edge_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::planner_msgs::Edge_<ContainerAllocator> >
{
  static const char* value()
  {
    return "4f0bbb1b628ed8cf4b65bbaa06d6225d";
  }

  static const char* value(const ::planner_msgs::Edge_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x4f0bbb1b628ed8cfULL;
  static const uint64_t static_value2 = 0x4b65bbaa06d6225dULL;
};

template<class ContainerAllocator>
struct DataType< ::planner_msgs::Edge_<ContainerAllocator> >
{
  static const char* value()
  {
    return "planner_msgs/Edge";
  }

  static const char* value(const ::planner_msgs::Edge_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::planner_msgs::Edge_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 source_id\n"
"int32 target_id\n"
"float32 weight\n"
;
  }

  static const char* value(const ::planner_msgs::Edge_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::planner_msgs::Edge_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.source_id);
      stream.next(m.target_id);
      stream.next(m.weight);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Edge_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::planner_msgs::Edge_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::planner_msgs::Edge_<ContainerAllocator>& v)
  {
    s << indent << "source_id: ";
    Printer<int32_t>::stream(s, indent + "  ", v.source_id);
    s << indent << "target_id: ";
    Printer<int32_t>::stream(s, indent + "  ", v.target_id);
    s << indent << "weight: ";
    Printer<float>::stream(s, indent + "  ", v.weight);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PLANNER_MSGS_MESSAGE_EDGE_H
