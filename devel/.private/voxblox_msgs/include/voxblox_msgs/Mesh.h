// Generated by gencpp from file voxblox_msgs/Mesh.msg
// DO NOT EDIT!


#ifndef VOXBLOX_MSGS_MESSAGE_MESH_H
#define VOXBLOX_MSGS_MESSAGE_MESH_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <voxblox_msgs/MeshBlock.h>

namespace voxblox_msgs
{
template <class ContainerAllocator>
struct Mesh_
{
  typedef Mesh_<ContainerAllocator> Type;

  Mesh_()
    : header()
    , block_edge_length(0.0)
    , mesh_blocks()  {
    }
  Mesh_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , block_edge_length(0.0)
    , mesh_blocks(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef float _block_edge_length_type;
  _block_edge_length_type block_edge_length;

   typedef std::vector< ::voxblox_msgs::MeshBlock_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::voxblox_msgs::MeshBlock_<ContainerAllocator> >::other >  _mesh_blocks_type;
  _mesh_blocks_type mesh_blocks;





  typedef boost::shared_ptr< ::voxblox_msgs::Mesh_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::voxblox_msgs::Mesh_<ContainerAllocator> const> ConstPtr;

}; // struct Mesh_

typedef ::voxblox_msgs::Mesh_<std::allocator<void> > Mesh;

typedef boost::shared_ptr< ::voxblox_msgs::Mesh > MeshPtr;
typedef boost::shared_ptr< ::voxblox_msgs::Mesh const> MeshConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::voxblox_msgs::Mesh_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::voxblox_msgs::Mesh_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::voxblox_msgs::Mesh_<ContainerAllocator1> & lhs, const ::voxblox_msgs::Mesh_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.block_edge_length == rhs.block_edge_length &&
    lhs.mesh_blocks == rhs.mesh_blocks;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::voxblox_msgs::Mesh_<ContainerAllocator1> & lhs, const ::voxblox_msgs::Mesh_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace voxblox_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::voxblox_msgs::Mesh_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::voxblox_msgs::Mesh_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::voxblox_msgs::Mesh_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::voxblox_msgs::Mesh_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::voxblox_msgs::Mesh_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::voxblox_msgs::Mesh_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::voxblox_msgs::Mesh_<ContainerAllocator> >
{
  static const char* value()
  {
    return "4d589d8b6bcff9e45d11686cdd6227df";
  }

  static const char* value(const ::voxblox_msgs::Mesh_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x4d589d8b6bcff9e4ULL;
  static const uint64_t static_value2 = 0x5d11686cdd6227dfULL;
};

template<class ContainerAllocator>
struct DataType< ::voxblox_msgs::Mesh_<ContainerAllocator> >
{
  static const char* value()
  {
    return "voxblox_msgs/Mesh";
  }

  static const char* value(const ::voxblox_msgs::Mesh_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::voxblox_msgs::Mesh_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# vertex positions rounded to nearest BLOCK_EDGE_LENGTH/65535 \n"
"# no alpha information\n"
"\n"
"std_msgs/Header header\n"
"\n"
"float32 block_edge_length\n"
"\n"
"voxblox_msgs/MeshBlock[] mesh_blocks\n"
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
"MSG: voxblox_msgs/MeshBlock\n"
"# vertex positions rounded to nearest BLOCK_EDGE_LENGTH/65535 \n"
"# no alpha information\n"
"\n"
"# Index of meshed points in block map\n"
"int64[3] index\n"
"\n"
"# Triangle information (always in groups of 3)\n"
"uint16[] x\n"
"uint16[] y\n"
"uint16[] z\n"
"\n"
"# Color information may be missing\n"
"uint8[] r\n"
"uint8[] g\n"
"uint8[] b\n"
;
  }

  static const char* value(const ::voxblox_msgs::Mesh_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::voxblox_msgs::Mesh_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.block_edge_length);
      stream.next(m.mesh_blocks);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Mesh_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::voxblox_msgs::Mesh_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::voxblox_msgs::Mesh_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "block_edge_length: ";
    Printer<float>::stream(s, indent + "  ", v.block_edge_length);
    s << indent << "mesh_blocks[]" << std::endl;
    for (size_t i = 0; i < v.mesh_blocks.size(); ++i)
    {
      s << indent << "  mesh_blocks[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::voxblox_msgs::MeshBlock_<ContainerAllocator> >::stream(s, indent + "    ", v.mesh_blocks[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // VOXBLOX_MSGS_MESSAGE_MESH_H
