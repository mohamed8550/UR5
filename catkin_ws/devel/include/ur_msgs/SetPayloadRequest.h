// Generated by gencpp from file ur_msgs/SetPayloadRequest.msg
// DO NOT EDIT!


#ifndef UR_MSGS_MESSAGE_SETPAYLOADREQUEST_H
#define UR_MSGS_MESSAGE_SETPAYLOADREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace ur_msgs
{
template <class ContainerAllocator>
struct SetPayloadRequest_
{
  typedef SetPayloadRequest_<ContainerAllocator> Type;

  SetPayloadRequest_()
    : payload(0.0)  {
    }
  SetPayloadRequest_(const ContainerAllocator& _alloc)
    : payload(0.0)  {
  (void)_alloc;
    }



   typedef float _payload_type;
  _payload_type payload;





  typedef boost::shared_ptr< ::ur_msgs::SetPayloadRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ur_msgs::SetPayloadRequest_<ContainerAllocator> const> ConstPtr;

}; // struct SetPayloadRequest_

typedef ::ur_msgs::SetPayloadRequest_<std::allocator<void> > SetPayloadRequest;

typedef boost::shared_ptr< ::ur_msgs::SetPayloadRequest > SetPayloadRequestPtr;
typedef boost::shared_ptr< ::ur_msgs::SetPayloadRequest const> SetPayloadRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ur_msgs::SetPayloadRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ur_msgs::SetPayloadRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace ur_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'ur_msgs': ['/home/saad/catkin_ws/src/universal_robot/ur_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::ur_msgs::SetPayloadRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ur_msgs::SetPayloadRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ur_msgs::SetPayloadRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ur_msgs::SetPayloadRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ur_msgs::SetPayloadRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ur_msgs::SetPayloadRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ur_msgs::SetPayloadRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d12269f931817591aa52047629ca66ca";
  }

  static const char* value(const ::ur_msgs::SetPayloadRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd12269f931817591ULL;
  static const uint64_t static_value2 = 0xaa52047629ca66caULL;
};

template<class ContainerAllocator>
struct DataType< ::ur_msgs::SetPayloadRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ur_msgs/SetPayloadRequest";
  }

  static const char* value(const ::ur_msgs::SetPayloadRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ur_msgs::SetPayloadRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float32 payload\n\
";
  }

  static const char* value(const ::ur_msgs::SetPayloadRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ur_msgs::SetPayloadRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.payload);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetPayloadRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ur_msgs::SetPayloadRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ur_msgs::SetPayloadRequest_<ContainerAllocator>& v)
  {
    s << indent << "payload: ";
    Printer<float>::stream(s, indent + "  ", v.payload);
  }
};

} // namespace message_operations
} // namespace ros

#endif // UR_MSGS_MESSAGE_SETPAYLOADREQUEST_H
