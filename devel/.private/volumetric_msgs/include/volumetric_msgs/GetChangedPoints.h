// Generated by gencpp from file volumetric_msgs/GetChangedPoints.msg
// DO NOT EDIT!


#ifndef VOLUMETRIC_MSGS_MESSAGE_GETCHANGEDPOINTS_H
#define VOLUMETRIC_MSGS_MESSAGE_GETCHANGEDPOINTS_H

#include <ros/service_traits.h>


#include <volumetric_msgs/GetChangedPointsRequest.h>
#include <volumetric_msgs/GetChangedPointsResponse.h>


namespace volumetric_msgs
{

struct GetChangedPoints
{

typedef GetChangedPointsRequest Request;
typedef GetChangedPointsResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct GetChangedPoints
} // namespace volumetric_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::volumetric_msgs::GetChangedPoints > {
  static const char* value()
  {
    return "b13aac43ad02af7141713450fbaa2797";
  }

  static const char* value(const ::volumetric_msgs::GetChangedPoints&) { return value(); }
};

template<>
struct DataType< ::volumetric_msgs::GetChangedPoints > {
  static const char* value()
  {
    return "volumetric_msgs/GetChangedPoints";
  }

  static const char* value(const ::volumetric_msgs::GetChangedPoints&) { return value(); }
};


// service_traits::MD5Sum< ::volumetric_msgs::GetChangedPointsRequest> should match
// service_traits::MD5Sum< ::volumetric_msgs::GetChangedPoints >
template<>
struct MD5Sum< ::volumetric_msgs::GetChangedPointsRequest>
{
  static const char* value()
  {
    return MD5Sum< ::volumetric_msgs::GetChangedPoints >::value();
  }
  static const char* value(const ::volumetric_msgs::GetChangedPointsRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::volumetric_msgs::GetChangedPointsRequest> should match
// service_traits::DataType< ::volumetric_msgs::GetChangedPoints >
template<>
struct DataType< ::volumetric_msgs::GetChangedPointsRequest>
{
  static const char* value()
  {
    return DataType< ::volumetric_msgs::GetChangedPoints >::value();
  }
  static const char* value(const ::volumetric_msgs::GetChangedPointsRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::volumetric_msgs::GetChangedPointsResponse> should match
// service_traits::MD5Sum< ::volumetric_msgs::GetChangedPoints >
template<>
struct MD5Sum< ::volumetric_msgs::GetChangedPointsResponse>
{
  static const char* value()
  {
    return MD5Sum< ::volumetric_msgs::GetChangedPoints >::value();
  }
  static const char* value(const ::volumetric_msgs::GetChangedPointsResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::volumetric_msgs::GetChangedPointsResponse> should match
// service_traits::DataType< ::volumetric_msgs::GetChangedPoints >
template<>
struct DataType< ::volumetric_msgs::GetChangedPointsResponse>
{
  static const char* value()
  {
    return DataType< ::volumetric_msgs::GetChangedPoints >::value();
  }
  static const char* value(const ::volumetric_msgs::GetChangedPointsResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // VOLUMETRIC_MSGS_MESSAGE_GETCHANGEDPOINTS_H
