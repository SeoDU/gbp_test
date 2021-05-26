// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: voxblox/Block.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "voxblox/Block.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace voxblox {

namespace {

const ::google::protobuf::Descriptor* BlockProto_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  BlockProto_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_voxblox_2fBlock_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_voxblox_2fBlock_2eproto() {
  protobuf_AddDesc_voxblox_2fBlock_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "voxblox/Block.proto");
  GOOGLE_CHECK(file != NULL);
  BlockProto_descriptor_ = file->message_type(0);
  static const int BlockProto_offsets_[7] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BlockProto, voxels_per_side_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BlockProto, voxel_size_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BlockProto, origin_x_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BlockProto, origin_y_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BlockProto, origin_z_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BlockProto, has_data_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BlockProto, voxel_data_),
  };
  BlockProto_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      BlockProto_descriptor_,
      BlockProto::default_instance_,
      BlockProto_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BlockProto, _has_bits_[0]),
      -1,
      -1,
      sizeof(BlockProto),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BlockProto, _internal_metadata_),
      -1);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_voxblox_2fBlock_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      BlockProto_descriptor_, &BlockProto::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_voxblox_2fBlock_2eproto() {
  delete BlockProto::default_instance_;
  delete BlockProto_reflection_;
}

void protobuf_AddDesc_voxblox_2fBlock_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AddDesc_voxblox_2fBlock_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\023voxblox/Block.proto\022\007voxblox\"\225\001\n\nBlock"
    "Proto\022\027\n\017voxels_per_side\030\001 \001(\005\022\022\n\nvoxel_"
    "size\030\002 \001(\001\022\020\n\010origin_x\030\003 \001(\001\022\020\n\010origin_y"
    "\030\004 \001(\001\022\020\n\010origin_z\030\005 \001(\001\022\020\n\010has_data\030\006 \001"
    "(\010\022\022\n\nvoxel_data\030\007 \003(\r", 182);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "voxblox/Block.proto", &protobuf_RegisterTypes);
  BlockProto::default_instance_ = new BlockProto();
  BlockProto::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_voxblox_2fBlock_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_voxblox_2fBlock_2eproto {
  StaticDescriptorInitializer_voxblox_2fBlock_2eproto() {
    protobuf_AddDesc_voxblox_2fBlock_2eproto();
  }
} static_descriptor_initializer_voxblox_2fBlock_2eproto_;

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int BlockProto::kVoxelsPerSideFieldNumber;
const int BlockProto::kVoxelSizeFieldNumber;
const int BlockProto::kOriginXFieldNumber;
const int BlockProto::kOriginYFieldNumber;
const int BlockProto::kOriginZFieldNumber;
const int BlockProto::kHasDataFieldNumber;
const int BlockProto::kVoxelDataFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

BlockProto::BlockProto()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:voxblox.BlockProto)
}

void BlockProto::InitAsDefaultInstance() {
}

BlockProto::BlockProto(const BlockProto& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:voxblox.BlockProto)
}

void BlockProto::SharedCtor() {
  _cached_size_ = 0;
  voxels_per_side_ = 0;
  voxel_size_ = 0;
  origin_x_ = 0;
  origin_y_ = 0;
  origin_z_ = 0;
  has_data_ = false;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

BlockProto::~BlockProto() {
  // @@protoc_insertion_point(destructor:voxblox.BlockProto)
  SharedDtor();
}

void BlockProto::SharedDtor() {
  if (this != default_instance_) {
  }
}

void BlockProto::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* BlockProto::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return BlockProto_descriptor_;
}

const BlockProto& BlockProto::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_voxblox_2fBlock_2eproto();
  return *default_instance_;
}

BlockProto* BlockProto::default_instance_ = NULL;

BlockProto* BlockProto::New(::google::protobuf::Arena* arena) const {
  BlockProto* n = new BlockProto;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void BlockProto::Clear() {
// @@protoc_insertion_point(message_clear_start:voxblox.BlockProto)
#if defined(__clang__)
#define ZR_HELPER_(f) \
  _Pragma("clang diagnostic push") \
  _Pragma("clang diagnostic ignored \"-Winvalid-offsetof\"") \
  __builtin_offsetof(BlockProto, f) \
  _Pragma("clang diagnostic pop")
#else
#define ZR_HELPER_(f) reinterpret_cast<char*>(\
  &reinterpret_cast<BlockProto*>(16)->f)
#endif

#define ZR_(first, last) do {\
  ::memset(&first, 0,\
           ZR_HELPER_(last) - ZR_HELPER_(first) + sizeof(last));\
} while (0)

  if (_has_bits_[0 / 32] & 63u) {
    ZR_(voxel_size_, origin_z_);
  }

#undef ZR_HELPER_
#undef ZR_

  voxel_data_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  if (_internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->Clear();
  }
}

bool BlockProto::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:voxblox.BlockProto)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int32 voxels_per_side = 1;
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &voxels_per_side_)));
          set_has_voxels_per_side();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(17)) goto parse_voxel_size;
        break;
      }

      // optional double voxel_size = 2;
      case 2: {
        if (tag == 17) {
         parse_voxel_size:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &voxel_size_)));
          set_has_voxel_size();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(25)) goto parse_origin_x;
        break;
      }

      // optional double origin_x = 3;
      case 3: {
        if (tag == 25) {
         parse_origin_x:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &origin_x_)));
          set_has_origin_x();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(33)) goto parse_origin_y;
        break;
      }

      // optional double origin_y = 4;
      case 4: {
        if (tag == 33) {
         parse_origin_y:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &origin_y_)));
          set_has_origin_y();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(41)) goto parse_origin_z;
        break;
      }

      // optional double origin_z = 5;
      case 5: {
        if (tag == 41) {
         parse_origin_z:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &origin_z_)));
          set_has_origin_z();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(48)) goto parse_has_data;
        break;
      }

      // optional bool has_data = 6;
      case 6: {
        if (tag == 48) {
         parse_has_data:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &has_data_)));
          set_has_has_data();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(56)) goto parse_voxel_data;
        break;
      }

      // repeated uint32 voxel_data = 7;
      case 7: {
        if (tag == 56) {
         parse_voxel_data:
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 1, 56, input, this->mutable_voxel_data())));
        } else if (tag == 58) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitiveNoInline<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, this->mutable_voxel_data())));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(56)) goto parse_voxel_data;
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:voxblox.BlockProto)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:voxblox.BlockProto)
  return false;
#undef DO_
}

void BlockProto::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:voxblox.BlockProto)
  // optional int32 voxels_per_side = 1;
  if (has_voxels_per_side()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->voxels_per_side(), output);
  }

  // optional double voxel_size = 2;
  if (has_voxel_size()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(2, this->voxel_size(), output);
  }

  // optional double origin_x = 3;
  if (has_origin_x()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(3, this->origin_x(), output);
  }

  // optional double origin_y = 4;
  if (has_origin_y()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(4, this->origin_y(), output);
  }

  // optional double origin_z = 5;
  if (has_origin_z()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(5, this->origin_z(), output);
  }

  // optional bool has_data = 6;
  if (has_has_data()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(6, this->has_data(), output);
  }

  // repeated uint32 voxel_data = 7;
  for (int i = 0; i < this->voxel_data_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(
      7, this->voxel_data(i), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:voxblox.BlockProto)
}

::google::protobuf::uint8* BlockProto::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:voxblox.BlockProto)
  // optional int32 voxels_per_side = 1;
  if (has_voxels_per_side()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->voxels_per_side(), target);
  }

  // optional double voxel_size = 2;
  if (has_voxel_size()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(2, this->voxel_size(), target);
  }

  // optional double origin_x = 3;
  if (has_origin_x()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(3, this->origin_x(), target);
  }

  // optional double origin_y = 4;
  if (has_origin_y()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(4, this->origin_y(), target);
  }

  // optional double origin_z = 5;
  if (has_origin_z()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(5, this->origin_z(), target);
  }

  // optional bool has_data = 6;
  if (has_has_data()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(6, this->has_data(), target);
  }

  // repeated uint32 voxel_data = 7;
  for (int i = 0; i < this->voxel_data_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteUInt32ToArray(7, this->voxel_data(i), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:voxblox.BlockProto)
  return target;
}

int BlockProto::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:voxblox.BlockProto)
  int total_size = 0;

  if (_has_bits_[0 / 32] & 63u) {
    // optional int32 voxels_per_side = 1;
    if (has_voxels_per_side()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->voxels_per_side());
    }

    // optional double voxel_size = 2;
    if (has_voxel_size()) {
      total_size += 1 + 8;
    }

    // optional double origin_x = 3;
    if (has_origin_x()) {
      total_size += 1 + 8;
    }

    // optional double origin_y = 4;
    if (has_origin_y()) {
      total_size += 1 + 8;
    }

    // optional double origin_z = 5;
    if (has_origin_z()) {
      total_size += 1 + 8;
    }

    // optional bool has_data = 6;
    if (has_has_data()) {
      total_size += 1 + 1;
    }

  }
  // repeated uint32 voxel_data = 7;
  {
    int data_size = 0;
    for (int i = 0; i < this->voxel_data_size(); i++) {
      data_size += ::google::protobuf::internal::WireFormatLite::
        UInt32Size(this->voxel_data(i));
    }
    total_size += 1 * this->voxel_data_size() + data_size;
  }

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void BlockProto::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:voxblox.BlockProto)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const BlockProto* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const BlockProto>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:voxblox.BlockProto)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:voxblox.BlockProto)
    MergeFrom(*source);
  }
}

void BlockProto::MergeFrom(const BlockProto& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:voxblox.BlockProto)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  voxel_data_.MergeFrom(from.voxel_data_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_voxels_per_side()) {
      set_voxels_per_side(from.voxels_per_side());
    }
    if (from.has_voxel_size()) {
      set_voxel_size(from.voxel_size());
    }
    if (from.has_origin_x()) {
      set_origin_x(from.origin_x());
    }
    if (from.has_origin_y()) {
      set_origin_y(from.origin_y());
    }
    if (from.has_origin_z()) {
      set_origin_z(from.origin_z());
    }
    if (from.has_has_data()) {
      set_has_data(from.has_data());
    }
  }
  if (from._internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->MergeFrom(from.unknown_fields());
  }
}

void BlockProto::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:voxblox.BlockProto)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void BlockProto::CopyFrom(const BlockProto& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:voxblox.BlockProto)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool BlockProto::IsInitialized() const {

  return true;
}

void BlockProto::Swap(BlockProto* other) {
  if (other == this) return;
  InternalSwap(other);
}
void BlockProto::InternalSwap(BlockProto* other) {
  std::swap(voxels_per_side_, other->voxels_per_side_);
  std::swap(voxel_size_, other->voxel_size_);
  std::swap(origin_x_, other->origin_x_);
  std::swap(origin_y_, other->origin_y_);
  std::swap(origin_z_, other->origin_z_);
  std::swap(has_data_, other->has_data_);
  voxel_data_.UnsafeArenaSwap(&other->voxel_data_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata BlockProto::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = BlockProto_descriptor_;
  metadata.reflection = BlockProto_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// BlockProto

// optional int32 voxels_per_side = 1;
bool BlockProto::has_voxels_per_side() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void BlockProto::set_has_voxels_per_side() {
  _has_bits_[0] |= 0x00000001u;
}
void BlockProto::clear_has_voxels_per_side() {
  _has_bits_[0] &= ~0x00000001u;
}
void BlockProto::clear_voxels_per_side() {
  voxels_per_side_ = 0;
  clear_has_voxels_per_side();
}
 ::google::protobuf::int32 BlockProto::voxels_per_side() const {
  // @@protoc_insertion_point(field_get:voxblox.BlockProto.voxels_per_side)
  return voxels_per_side_;
}
 void BlockProto::set_voxels_per_side(::google::protobuf::int32 value) {
  set_has_voxels_per_side();
  voxels_per_side_ = value;
  // @@protoc_insertion_point(field_set:voxblox.BlockProto.voxels_per_side)
}

// optional double voxel_size = 2;
bool BlockProto::has_voxel_size() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void BlockProto::set_has_voxel_size() {
  _has_bits_[0] |= 0x00000002u;
}
void BlockProto::clear_has_voxel_size() {
  _has_bits_[0] &= ~0x00000002u;
}
void BlockProto::clear_voxel_size() {
  voxel_size_ = 0;
  clear_has_voxel_size();
}
 double BlockProto::voxel_size() const {
  // @@protoc_insertion_point(field_get:voxblox.BlockProto.voxel_size)
  return voxel_size_;
}
 void BlockProto::set_voxel_size(double value) {
  set_has_voxel_size();
  voxel_size_ = value;
  // @@protoc_insertion_point(field_set:voxblox.BlockProto.voxel_size)
}

// optional double origin_x = 3;
bool BlockProto::has_origin_x() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
void BlockProto::set_has_origin_x() {
  _has_bits_[0] |= 0x00000004u;
}
void BlockProto::clear_has_origin_x() {
  _has_bits_[0] &= ~0x00000004u;
}
void BlockProto::clear_origin_x() {
  origin_x_ = 0;
  clear_has_origin_x();
}
 double BlockProto::origin_x() const {
  // @@protoc_insertion_point(field_get:voxblox.BlockProto.origin_x)
  return origin_x_;
}
 void BlockProto::set_origin_x(double value) {
  set_has_origin_x();
  origin_x_ = value;
  // @@protoc_insertion_point(field_set:voxblox.BlockProto.origin_x)
}

// optional double origin_y = 4;
bool BlockProto::has_origin_y() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
void BlockProto::set_has_origin_y() {
  _has_bits_[0] |= 0x00000008u;
}
void BlockProto::clear_has_origin_y() {
  _has_bits_[0] &= ~0x00000008u;
}
void BlockProto::clear_origin_y() {
  origin_y_ = 0;
  clear_has_origin_y();
}
 double BlockProto::origin_y() const {
  // @@protoc_insertion_point(field_get:voxblox.BlockProto.origin_y)
  return origin_y_;
}
 void BlockProto::set_origin_y(double value) {
  set_has_origin_y();
  origin_y_ = value;
  // @@protoc_insertion_point(field_set:voxblox.BlockProto.origin_y)
}

// optional double origin_z = 5;
bool BlockProto::has_origin_z() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
void BlockProto::set_has_origin_z() {
  _has_bits_[0] |= 0x00000010u;
}
void BlockProto::clear_has_origin_z() {
  _has_bits_[0] &= ~0x00000010u;
}
void BlockProto::clear_origin_z() {
  origin_z_ = 0;
  clear_has_origin_z();
}
 double BlockProto::origin_z() const {
  // @@protoc_insertion_point(field_get:voxblox.BlockProto.origin_z)
  return origin_z_;
}
 void BlockProto::set_origin_z(double value) {
  set_has_origin_z();
  origin_z_ = value;
  // @@protoc_insertion_point(field_set:voxblox.BlockProto.origin_z)
}

// optional bool has_data = 6;
bool BlockProto::has_has_data() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
void BlockProto::set_has_has_data() {
  _has_bits_[0] |= 0x00000020u;
}
void BlockProto::clear_has_has_data() {
  _has_bits_[0] &= ~0x00000020u;
}
void BlockProto::clear_has_data() {
  has_data_ = false;
  clear_has_has_data();
}
 bool BlockProto::has_data() const {
  // @@protoc_insertion_point(field_get:voxblox.BlockProto.has_data)
  return has_data_;
}
 void BlockProto::set_has_data(bool value) {
  set_has_has_data();
  has_data_ = value;
  // @@protoc_insertion_point(field_set:voxblox.BlockProto.has_data)
}

// repeated uint32 voxel_data = 7;
int BlockProto::voxel_data_size() const {
  return voxel_data_.size();
}
void BlockProto::clear_voxel_data() {
  voxel_data_.Clear();
}
 ::google::protobuf::uint32 BlockProto::voxel_data(int index) const {
  // @@protoc_insertion_point(field_get:voxblox.BlockProto.voxel_data)
  return voxel_data_.Get(index);
}
 void BlockProto::set_voxel_data(int index, ::google::protobuf::uint32 value) {
  voxel_data_.Set(index, value);
  // @@protoc_insertion_point(field_set:voxblox.BlockProto.voxel_data)
}
 void BlockProto::add_voxel_data(::google::protobuf::uint32 value) {
  voxel_data_.Add(value);
  // @@protoc_insertion_point(field_add:voxblox.BlockProto.voxel_data)
}
 const ::google::protobuf::RepeatedField< ::google::protobuf::uint32 >&
BlockProto::voxel_data() const {
  // @@protoc_insertion_point(field_list:voxblox.BlockProto.voxel_data)
  return voxel_data_;
}
 ::google::protobuf::RepeatedField< ::google::protobuf::uint32 >*
BlockProto::mutable_voxel_data() {
  // @@protoc_insertion_point(field_mutable_list:voxblox.BlockProto.voxel_data)
  return &voxel_data_;
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace voxblox

// @@protoc_insertion_point(global_scope)
