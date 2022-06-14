// Generated by gencpp from file msgs_demo/SetCameraInfo.msg
// DO NOT EDIT!


#ifndef MSGS_DEMO_MESSAGE_SETCAMERAINFO_H
#define MSGS_DEMO_MESSAGE_SETCAMERAINFO_H

#include <ros/service_traits.h>


#include <msgs_demo/SetCameraInfoRequest.h>
#include <msgs_demo/SetCameraInfoResponse.h>


namespace msgs_demo
{

struct SetCameraInfo
{

typedef SetCameraInfoRequest Request;
typedef SetCameraInfoResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct SetCameraInfo
} // namespace msgs_demo


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::msgs_demo::SetCameraInfo > {
  static const char* value()
  {
    return "bef1df590ed75ed1f393692395e15482";
  }

  static const char* value(const ::msgs_demo::SetCameraInfo&) { return value(); }
};

template<>
struct DataType< ::msgs_demo::SetCameraInfo > {
  static const char* value()
  {
    return "msgs_demo/SetCameraInfo";
  }

  static const char* value(const ::msgs_demo::SetCameraInfo&) { return value(); }
};


// service_traits::MD5Sum< ::msgs_demo::SetCameraInfoRequest> should match
// service_traits::MD5Sum< ::msgs_demo::SetCameraInfo >
template<>
struct MD5Sum< ::msgs_demo::SetCameraInfoRequest>
{
  static const char* value()
  {
    return MD5Sum< ::msgs_demo::SetCameraInfo >::value();
  }
  static const char* value(const ::msgs_demo::SetCameraInfoRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::msgs_demo::SetCameraInfoRequest> should match
// service_traits::DataType< ::msgs_demo::SetCameraInfo >
template<>
struct DataType< ::msgs_demo::SetCameraInfoRequest>
{
  static const char* value()
  {
    return DataType< ::msgs_demo::SetCameraInfo >::value();
  }
  static const char* value(const ::msgs_demo::SetCameraInfoRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::msgs_demo::SetCameraInfoResponse> should match
// service_traits::MD5Sum< ::msgs_demo::SetCameraInfo >
template<>
struct MD5Sum< ::msgs_demo::SetCameraInfoResponse>
{
  static const char* value()
  {
    return MD5Sum< ::msgs_demo::SetCameraInfo >::value();
  }
  static const char* value(const ::msgs_demo::SetCameraInfoResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::msgs_demo::SetCameraInfoResponse> should match
// service_traits::DataType< ::msgs_demo::SetCameraInfo >
template<>
struct DataType< ::msgs_demo::SetCameraInfoResponse>
{
  static const char* value()
  {
    return DataType< ::msgs_demo::SetCameraInfo >::value();
  }
  static const char* value(const ::msgs_demo::SetCameraInfoResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // MSGS_DEMO_MESSAGE_SETCAMERAINFO_H