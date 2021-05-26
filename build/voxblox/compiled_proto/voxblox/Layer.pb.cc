// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: voxblox/Layer.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "voxblox/Layer.pb.h"

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

const ::google::protobuf::Descriptor* LayerProto_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  LayerProto_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_voxblox_2fLayer_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_voxblox_2fLayer_2eproto() {
  protobuf_AddDesc_voxblox_2fLayer_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "voxblox/Layer.proto");
  GOOGLE_CHECK(file != NULL);
  LayerProto_descriptor_ = file->message_type(0);
  static const int LayerProto_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LayerProto, voxel_size_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LayerProto, voxels_per_side_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LayerProto, type_),
  };
  LayerProto_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      LayerProto_descriptor_,
      LayerProto::default_instance_,
      LayerProto_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LayerProto, _has_bits_[0]),
      -1,
      -1,
      sizeof(LayerProto),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LayerProto, _internal_metadata_),
      -1);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_voxblox_2fLayer_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      LayerProto_descriptor_, &LayerProto::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_voxblox_2fLayer_2eproto() {
  delete LayerProto::default_instance_;
  delete LayerProto_reflection_;
}

void protobuf_AddDesc_voxblox_2fLayer_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AddDesc_voxblox_2fLayer_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\023voxblox/Layer.proto\022\007voxblox\"G\n\nLayerP"
    "roto\022\022\n\nvoxel_size\030\001 \001(\001\022\027\n\017voxels_per_s"
    "ide\030\002 \001(\r\022\014\n\004type\030\003 \001(\t", 103);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "voxblox/Layer.proto", &protobuf_RegisterTypes);
  LayerProto::default_instance_ = new LayerProto();
  LayerProto::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_voxblox_2fLayer_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_voxblox_2fLayer_2eproto {
  StaticDescriptorInitializer_voxblox_2fLayer_2eproto() {
    protobuf_AddDesc_voxblox_2fLayer_2eproto();
  }
} static_descriptor_initializer_voxblox_2fLayer_2eproto_;

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int LayerProto::kVoxelSizeFieldNumber;
const int LayerProto::kVoxelsPerSideFieldNumber;
const int LayerProto::kTypeFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

LayerProto::LayerProto()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:voxblox.LayerProto)
}

void LayerProto::InitAsDefaultInstance() {
}

LayerProto::LayerProto(const LayerProto& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:voxblox.LayerProto)
}

void LayerProto::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  voxel_size_ = 0;
  voxels_per_side_ = 0u;
  type_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

LayerProto::~LayerProto() {
  // @@protoc_insertion_point(destructor:voxblox.LayerProto)
  SharedDtor();
}

void LayerProto::SharedDtor() {
  type_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != default_instance_) {
  }
}

void LayerProto::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* LayerProto::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return LayerProto_descriptor_;
}

const LayerProto& LayerProto::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_voxblox_2fLayer_2eproto();
  return *default_instance_;
}

LayerProto* LayerProto::default_instance_ = NULL;

LayerProto* LayerProto::New(::google::protobuf::Arena* arena) const {
  LayerProto* n = new LayerProto;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void LayerProto::Clear() {
// @@protoc_insertion_point(message_clear_start:voxblox.LayerProto)
  if (_has_bits_[0 / 32] & 7u) {
    voxel_size_ = 0;
    voxels_per_side_ = 0u;
    if (has_type()) {
      type_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  if (_internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->Clear();
  }
}

bool LayerProto::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:voxblox.LayerProto)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional double voxel_size = 1;
      case 1: {
        if (tag == 9) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &voxel_size_)));
          set_has_voxel_size();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_voxels_per_side;
        break;
      }

      // optional uint32 voxels_per_side = 2;
      case 2: {
        if (tag == 16) {
         parse_voxels_per_side:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &voxels_per_side_)));
          set_has_voxels_per_side();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(26)) goto parse_type;
        break;
      }

      // optional string type = 3;
      case 3: {
        if (tag == 26) {
         parse_type:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_type()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->type().data(), this->type().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "voxblox.LayerProto.type");
        } else {
          goto handle_unusual;
        }
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
  // @@protoc_insertion_point(parse_success:voxblox.LayerProto)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:voxblox.LayerProto)
  return false;
#undef DO_
}

void LayerProto::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:voxblox.LayerProto)
  // optional double voxel_size = 1;
  if (has_voxel_size()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(1, this->voxel_size(), output);
  }

  // optional uint32 voxels_per_side = 2;
  if (has_voxels_per_side()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->voxels_per_side(), output);
  }

  // optional string type = 3;
  if (has_type()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->type().data(), this->type().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "voxblox.LayerProto.type");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      3, this->type(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:voxblox.LayerProto)
}

::google::protobuf::uint8* LayerProto::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:voxblox.LayerProto)
  // optional double voxel_size = 1;
  if (has_voxel_size()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(1, this->voxel_size(), target);
  }

  // optional uint32 voxels_per_side = 2;
  if (has_voxels_per_side()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(2, this->voxels_per_side(), target);
  }

  // optional string type = 3;
  if (has_type()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->type().data(), this->type().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "voxblox.LayerProto.type");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->type(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:voxblox.LayerProto)
  return target;
}

int LayerProto::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:voxblox.LayerProto)
  int total_size = 0;

  if (_has_bits_[0 / 32] & 7u) {
    // optional double voxel_size = 1;
    if (has_voxel_size()) {
      total_size += 1 + 8;
    }

    // optional uint32 voxels_per_side = 2;
    if (has_voxels_per_side()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->voxels_per_side());
    }

    // optional string type = 3;
    if (has_type()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->type());
    }

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

void LayerProto::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:voxblox.LayerProto)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const LayerProto* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const LayerProto>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:voxblox.LayerProto)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:voxblox.LayerProto)
    MergeFrom(*source);
  }
}

void LayerProto::MergeFrom(const LayerProto& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:voxblox.LayerProto)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_voxel_size()) {
      set_voxel_size(from.voxel_size());
    }
    if (from.has_voxels_per_side()) {
      set_voxels_per_side(from.voxels_per_side());
    }
    if (from.has_type()) {
      set_has_type();
      type_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.type_);
    }
  }
  if (from._internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->MergeFrom(from.unknown_fields());
  }
}

void LayerProto::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:voxblox.LayerProto)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void LayerProto::CopyFrom(const LayerProto& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:voxblox.LayerProto)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LayerProto::IsInitialized() const {

  return true;
}

void LayerProto::Swap(LayerProto* other) {
  if (other == this) return;
  InternalSwap(other);
}
void LayerProto::InternalSwap(LayerProto* other) {
  std::swap(voxel_size_, other->voxel_size_);
  std::swap(voxels_per_side_, other->voxels_per_side_);
  type_.Swap(&other->type_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata LayerProto::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = LayerProto_descriptor_;
  metadata.reflection = LayerProto_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// LayerProto

// optional double voxel_size = 1;
bool LayerProto::has_voxel_size() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void LayerProto::set_has_voxel_size() {
  _has_bits_[0] |= 0x00000001u;
}
void LayerProto::clear_has_voxel_size() {
  _has_bits_[0] &= ~0x00000001u;
}
void LayerProto::clear_voxel_size() {
  voxel_size_ = 0;
  clear_has_voxel_size();
}
 double LayerProto::voxel_size() const {
  // @@protoc_insertion_point(field_get:voxblox.LayerProto.voxel_size)
  return voxel_size_;
}
 void LayerProto::set_voxel_size(double value) {
  set_has_voxel_size();
  voxel_size_ = value;
  // @@protoc_insertion_point(field_set:voxblox.LayerProto.voxel_size)
}

// optional uint32 voxels_per_side = 2;
bool LayerProto::has_voxels_per_side() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void LayerProto::set_has_voxels_per_side() {
  _has_bits_[0] |= 0x00000002u;
}
void LayerProto::clear_has_voxels_per_side() {
  _has_bits_[0] &= ~0x00000002u;
}
void LayerProto::clear_voxels_per_side() {
  voxels_per_side_ = 0u;
  clear_has_voxels_per_side();
}
 ::google::protobuf::uint32 LayerProto::voxels_per_side() const {
  // @@protoc_insertion_point(field_get:voxblox.LayerProto.voxels_per_side)
  return voxels_per_side_;
}
 void LayerProto::set_voxels_per_side(::google::protobuf::uint32 value) {
  set_has_voxels_per_side();
  voxels_per_side_ = value;
  // @@protoc_insertion_point(field_set:voxblox.LayerProto.voxels_per_side)
}

// optional string type = 3;
bool LayerProto::has_type() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
void LayerProto::set_has_type() {
  _has_bits_[0] |= 0x00000004u;
}
void LayerProto::clear_has_type() {
  _has_bits_[0] &= ~0x00000004u;
}
void LayerProto::clear_type() {
  type_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_type();
}
 const ::std::string& LayerProto::type() const {
  // @@protoc_insertion_point(field_get:voxblox.LayerProto.type)
  return type_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void LayerProto::set_type(const ::std::string& value) {
  set_has_type();
  type_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:voxblox.LayerProto.type)
}
 void LayerProto::set_type(const char* value) {
  set_has_type();
  type_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:voxblox.LayerProto.type)
}
 void LayerProto::set_type(const char* value, size_t size) {
  set_has_type();
  type_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:voxblox.LayerProto.type)
}
 ::std::string* LayerProto::mutable_type() {
  set_has_type();
  // @@protoc_insertion_point(field_mutable:voxblox.LayerProto.type)
  return type_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* LayerProto::release_type() {
  // @@protoc_insertion_point(field_release:voxblox.LayerProto.type)
  clear_has_type();
  return type_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void LayerProto::set_allocated_type(::std::string* type) {
  if (type != NULL) {
    set_has_type();
  } else {
    clear_has_type();
  }
  type_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), type);
  // @@protoc_insertion_point(field_set_allocated:voxblox.LayerProto.type)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace voxblox

// @@protoc_insertion_point(global_scope)