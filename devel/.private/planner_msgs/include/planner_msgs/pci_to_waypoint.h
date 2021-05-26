// Generated by gencpp from file planner_msgs/pci_to_waypoint.msg
// DO NOT EDIT!


#ifndef PLANNER_MSGS_MESSAGE_PCI_TO_WAYPOINT_H
#define PLANNER_MSGS_MESSAGE_PCI_TO_WAYPOINT_H

#include <ros/service_traits.h>


#include <planner_msgs/pci_to_waypointRequest.h>
#include <planner_msgs/pci_to_waypointResponse.h>


namespace planner_msgs
{

struct pci_to_waypoint
{

typedef pci_to_waypointRequest Request;
typedef pci_to_waypointResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct pci_to_waypoint
} // namespace planner_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::planner_msgs::pci_to_waypoint > {
  static const char* value()
  {
    return "7f5b5ed73b4dc3c42d1110aac543afa5";
  }

  static const char* value(const ::planner_msgs::pci_to_waypoint&) { return value(); }
};

template<>
struct DataType< ::planner_msgs::pci_to_waypoint > {
  static const char* value()
  {
    return "planner_msgs/pci_to_waypoint";
  }

  static const char* value(const ::planner_msgs::pci_to_waypoint&) { return value(); }
};


// service_traits::MD5Sum< ::planner_msgs::pci_to_waypointRequest> should match
// service_traits::MD5Sum< ::planner_msgs::pci_to_waypoint >
template<>
struct MD5Sum< ::planner_msgs::pci_to_waypointRequest>
{
  static const char* value()
  {
    return MD5Sum< ::planner_msgs::pci_to_waypoint >::value();
  }
  static const char* value(const ::planner_msgs::pci_to_waypointRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::planner_msgs::pci_to_waypointRequest> should match
// service_traits::DataType< ::planner_msgs::pci_to_waypoint >
template<>
struct DataType< ::planner_msgs::pci_to_waypointRequest>
{
  static const char* value()
  {
    return DataType< ::planner_msgs::pci_to_waypoint >::value();
  }
  static const char* value(const ::planner_msgs::pci_to_waypointRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::planner_msgs::pci_to_waypointResponse> should match
// service_traits::MD5Sum< ::planner_msgs::pci_to_waypoint >
template<>
struct MD5Sum< ::planner_msgs::pci_to_waypointResponse>
{
  static const char* value()
  {
    return MD5Sum< ::planner_msgs::pci_to_waypoint >::value();
  }
  static const char* value(const ::planner_msgs::pci_to_waypointResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::planner_msgs::pci_to_waypointResponse> should match
// service_traits::DataType< ::planner_msgs::pci_to_waypoint >
template<>
struct DataType< ::planner_msgs::pci_to_waypointResponse>
{
  static const char* value()
  {
    return DataType< ::planner_msgs::pci_to_waypoint >::value();
  }
  static const char* value(const ::planner_msgs::pci_to_waypointResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // PLANNER_MSGS_MESSAGE_PCI_TO_WAYPOINT_H