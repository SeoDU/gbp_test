// Generated by gencpp from file planner_msgs/PlanningMode.msg
// DO NOT EDIT!


#ifndef PLANNER_MSGS_MESSAGE_PLANNINGMODE_H
#define PLANNER_MSGS_MESSAGE_PLANNINGMODE_H


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
struct PlanningMode_
{
  typedef PlanningMode_<ContainerAllocator> Type;

  PlanningMode_()
    : mode(0)  {
    }
  PlanningMode_(const ContainerAllocator& _alloc)
    : mode(0)  {
  (void)_alloc;
    }



   typedef int32_t _mode_type;
  _mode_type mode;



// reducing the odds to have name collisions with Windows.h 
#if defined(_WIN32) && defined(kBasicExploration)
  #undef kBasicExploration
#endif
#if defined(_WIN32) && defined(kNarrowEnvExploration)
  #undef kNarrowEnvExploration
#endif
#if defined(_WIN32) && defined(kVerticalExploration)
  #undef kVerticalExploration
#endif

  enum {
    kBasicExploration = 0,
    kNarrowEnvExploration = 1,
    kVerticalExploration = 2,
  };


  typedef boost::shared_ptr< ::planner_msgs::PlanningMode_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::planner_msgs::PlanningMode_<ContainerAllocator> const> ConstPtr;

}; // struct PlanningMode_

typedef ::planner_msgs::PlanningMode_<std::allocator<void> > PlanningMode;

typedef boost::shared_ptr< ::planner_msgs::PlanningMode > PlanningModePtr;
typedef boost::shared_ptr< ::planner_msgs::PlanningMode const> PlanningModeConstPtr;

// constants requiring out of line definition

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::planner_msgs::PlanningMode_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::planner_msgs::PlanningMode_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::planner_msgs::PlanningMode_<ContainerAllocator1> & lhs, const ::planner_msgs::PlanningMode_<ContainerAllocator2> & rhs)
{
  return lhs.mode == rhs.mode;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::planner_msgs::PlanningMode_<ContainerAllocator1> & lhs, const ::planner_msgs::PlanningMode_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace planner_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::planner_msgs::PlanningMode_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::planner_msgs::PlanningMode_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::planner_msgs::PlanningMode_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::planner_msgs::PlanningMode_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::planner_msgs::PlanningMode_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::planner_msgs::PlanningMode_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::planner_msgs::PlanningMode_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ac52c8b76815ea1f52f01cd4aa378e54";
  }

  static const char* value(const ::planner_msgs::PlanningMode_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xac52c8b76815ea1fULL;
  static const uint64_t static_value2 = 0x52f01cd4aa378e54ULL;
};

template<class ContainerAllocator>
struct DataType< ::planner_msgs::PlanningMode_<ContainerAllocator> >
{
  static const char* value()
  {
    return "planner_msgs/PlanningMode";
  }

  static const char* value(const ::planner_msgs::PlanningMode_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::planner_msgs::PlanningMode_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Planning mode for exploration, defined in Params/PlanningModeType.\n"
"int32 kBasicExploration = 0\n"
"int32 kNarrowEnvExploration = 1\n"
"int32 kVerticalExploration = 2\n"
"\n"
"# Set one of above values.\n"
"int32 mode\n"
;
  }

  static const char* value(const ::planner_msgs::PlanningMode_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::planner_msgs::PlanningMode_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.mode);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct PlanningMode_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::planner_msgs::PlanningMode_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::planner_msgs::PlanningMode_<ContainerAllocator>& v)
  {
    s << indent << "mode: ";
    Printer<int32_t>::stream(s, indent + "  ", v.mode);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PLANNER_MSGS_MESSAGE_PLANNINGMODE_H