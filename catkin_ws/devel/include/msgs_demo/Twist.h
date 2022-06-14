// Generated by gencpp from file msgs_demo/Twist.msg
// DO NOT EDIT!


#ifndef MSGS_DEMO_MESSAGE_TWIST_H
#define MSGS_DEMO_MESSAGE_TWIST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <msgs_demo/Vector3.h>
#include <msgs_demo/Vector3.h>

namespace msgs_demo
{
template <class ContainerAllocator>
struct Twist_
{
  typedef Twist_<ContainerAllocator> Type;

  Twist_()
    : linear()
    , angular()  {
    }
  Twist_(const ContainerAllocator& _alloc)
    : linear(_alloc)
    , angular(_alloc)  {
  (void)_alloc;
    }



   typedef  ::msgs_demo::Vector3_<ContainerAllocator>  _linear_type;
  _linear_type linear;

   typedef  ::msgs_demo::Vector3_<ContainerAllocator>  _angular_type;
  _angular_type angular;





  typedef boost::shared_ptr< ::msgs_demo::Twist_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::msgs_demo::Twist_<ContainerAllocator> const> ConstPtr;

}; // struct Twist_

typedef ::msgs_demo::Twist_<std::allocator<void> > Twist;

typedef boost::shared_ptr< ::msgs_demo::Twist > TwistPtr;
typedef boost::shared_ptr< ::msgs_demo::Twist const> TwistConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::msgs_demo::Twist_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::msgs_demo::Twist_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::msgs_demo::Twist_<ContainerAllocator1> & lhs, const ::msgs_demo::Twist_<ContainerAllocator2> & rhs)
{
  return lhs.linear == rhs.linear &&
    lhs.angular == rhs.angular;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::msgs_demo::Twist_<ContainerAllocator1> & lhs, const ::msgs_demo::Twist_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace msgs_demo

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::msgs_demo::Twist_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::msgs_demo::Twist_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::msgs_demo::Twist_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::msgs_demo::Twist_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::msgs_demo::Twist_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::msgs_demo::Twist_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::msgs_demo::Twist_<ContainerAllocator> >
{
  static const char* value()
  {
    return "9f195f881246fdfa2798d1d3eebca84a";
  }

  static const char* value(const ::msgs_demo::Twist_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x9f195f881246fdfaULL;
  static const uint64_t static_value2 = 0x2798d1d3eebca84aULL;
};

template<class ContainerAllocator>
struct DataType< ::msgs_demo::Twist_<ContainerAllocator> >
{
  static const char* value()
  {
    return "msgs_demo/Twist";
  }

  static const char* value(const ::msgs_demo::Twist_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::msgs_demo::Twist_<ContainerAllocator> >
{
  static const char* value()
  {
    return "#定义空间中物体运动的线速度和角速度\n"
"#位置：geometry_msgs/Twist.msg\n"
"\n"
"Vector3 linear\n"
"Vector3 angular\n"
"\n"
"================================================================================\n"
"MSG: msgs_demo/Vector3\n"
"#位置:geometry_msgs/Vector3.msg\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
;
  }

  static const char* value(const ::msgs_demo::Twist_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::msgs_demo::Twist_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.linear);
      stream.next(m.angular);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Twist_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::msgs_demo::Twist_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::msgs_demo::Twist_<ContainerAllocator>& v)
  {
    s << indent << "linear: ";
    s << std::endl;
    Printer< ::msgs_demo::Vector3_<ContainerAllocator> >::stream(s, indent + "  ", v.linear);
    s << indent << "angular: ";
    s << std::endl;
    Printer< ::msgs_demo::Vector3_<ContainerAllocator> >::stream(s, indent + "  ", v.angular);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MSGS_DEMO_MESSAGE_TWIST_H
