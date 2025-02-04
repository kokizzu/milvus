// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: segcore.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_segcore_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_segcore_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3009000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3009000 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include "schema.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_segcore_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_segcore_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[2]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_segcore_2eproto;
namespace milvus {
namespace proto {
namespace segcore {
class RetrieveRequest;
class RetrieveRequestDefaultTypeInternal;
extern RetrieveRequestDefaultTypeInternal _RetrieveRequest_default_instance_;
class RetrieveResults;
class RetrieveResultsDefaultTypeInternal;
extern RetrieveResultsDefaultTypeInternal _RetrieveResults_default_instance_;
}  // namespace segcore
}  // namespace proto
}  // namespace milvus
PROTOBUF_NAMESPACE_OPEN
template<> ::milvus::proto::segcore::RetrieveRequest* Arena::CreateMaybeMessage<::milvus::proto::segcore::RetrieveRequest>(Arena*);
template<> ::milvus::proto::segcore::RetrieveResults* Arena::CreateMaybeMessage<::milvus::proto::segcore::RetrieveResults>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace milvus {
namespace proto {
namespace segcore {

// ===================================================================

class RetrieveRequest :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:milvus.proto.segcore.RetrieveRequest) */ {
 public:
  RetrieveRequest();
  virtual ~RetrieveRequest();

  RetrieveRequest(const RetrieveRequest& from);
  RetrieveRequest(RetrieveRequest&& from) noexcept
    : RetrieveRequest() {
    *this = ::std::move(from);
  }

  inline RetrieveRequest& operator=(const RetrieveRequest& from) {
    CopyFrom(from);
    return *this;
  }
  inline RetrieveRequest& operator=(RetrieveRequest&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const RetrieveRequest& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const RetrieveRequest* internal_default_instance() {
    return reinterpret_cast<const RetrieveRequest*>(
               &_RetrieveRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(RetrieveRequest& a, RetrieveRequest& b) {
    a.Swap(&b);
  }
  inline void Swap(RetrieveRequest* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline RetrieveRequest* New() const final {
    return CreateMaybeMessage<RetrieveRequest>(nullptr);
  }

  RetrieveRequest* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<RetrieveRequest>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const RetrieveRequest& from);
  void MergeFrom(const RetrieveRequest& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  #else
  bool MergePartialFromCodedStream(
      ::PROTOBUF_NAMESPACE_ID::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream* output) const final;
  ::PROTOBUF_NAMESPACE_ID::uint8* InternalSerializeWithCachedSizesToArray(
      ::PROTOBUF_NAMESPACE_ID::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(RetrieveRequest* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "milvus.proto.segcore.RetrieveRequest";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_segcore_2eproto);
    return ::descriptor_table_segcore_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kOutputFieldsFieldNumber = 2,
    kIdsFieldNumber = 1,
  };
  // repeated string output_fields = 2;
  int output_fields_size() const;
  void clear_output_fields();
  const std::string& output_fields(int index) const;
  std::string* mutable_output_fields(int index);
  void set_output_fields(int index, const std::string& value);
  void set_output_fields(int index, std::string&& value);
  void set_output_fields(int index, const char* value);
  void set_output_fields(int index, const char* value, size_t size);
  std::string* add_output_fields();
  void add_output_fields(const std::string& value);
  void add_output_fields(std::string&& value);
  void add_output_fields(const char* value);
  void add_output_fields(const char* value, size_t size);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>& output_fields() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>* mutable_output_fields();

  // .milvus.proto.schema.IDs ids = 1;
  bool has_ids() const;
  void clear_ids();
  const ::milvus::proto::schema::IDs& ids() const;
  ::milvus::proto::schema::IDs* release_ids();
  ::milvus::proto::schema::IDs* mutable_ids();
  void set_allocated_ids(::milvus::proto::schema::IDs* ids);

  // @@protoc_insertion_point(class_scope:milvus.proto.segcore.RetrieveRequest)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string> output_fields_;
  ::milvus::proto::schema::IDs* ids_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_segcore_2eproto;
};
// -------------------------------------------------------------------

class RetrieveResults :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:milvus.proto.segcore.RetrieveResults) */ {
 public:
  RetrieveResults();
  virtual ~RetrieveResults();

  RetrieveResults(const RetrieveResults& from);
  RetrieveResults(RetrieveResults&& from) noexcept
    : RetrieveResults() {
    *this = ::std::move(from);
  }

  inline RetrieveResults& operator=(const RetrieveResults& from) {
    CopyFrom(from);
    return *this;
  }
  inline RetrieveResults& operator=(RetrieveResults&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const RetrieveResults& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const RetrieveResults* internal_default_instance() {
    return reinterpret_cast<const RetrieveResults*>(
               &_RetrieveResults_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(RetrieveResults& a, RetrieveResults& b) {
    a.Swap(&b);
  }
  inline void Swap(RetrieveResults* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline RetrieveResults* New() const final {
    return CreateMaybeMessage<RetrieveResults>(nullptr);
  }

  RetrieveResults* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<RetrieveResults>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const RetrieveResults& from);
  void MergeFrom(const RetrieveResults& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  #else
  bool MergePartialFromCodedStream(
      ::PROTOBUF_NAMESPACE_ID::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream* output) const final;
  ::PROTOBUF_NAMESPACE_ID::uint8* InternalSerializeWithCachedSizesToArray(
      ::PROTOBUF_NAMESPACE_ID::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(RetrieveResults* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "milvus.proto.segcore.RetrieveResults";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_segcore_2eproto);
    return ::descriptor_table_segcore_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kFieldsDataFieldNumber = 2,
    kIdsFieldNumber = 1,
  };
  // repeated .milvus.proto.schema.FieldData fields_data = 2;
  int fields_data_size() const;
  void clear_fields_data();
  ::milvus::proto::schema::FieldData* mutable_fields_data(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::milvus::proto::schema::FieldData >*
      mutable_fields_data();
  const ::milvus::proto::schema::FieldData& fields_data(int index) const;
  ::milvus::proto::schema::FieldData* add_fields_data();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::milvus::proto::schema::FieldData >&
      fields_data() const;

  // .milvus.proto.schema.IDs ids = 1;
  bool has_ids() const;
  void clear_ids();
  const ::milvus::proto::schema::IDs& ids() const;
  ::milvus::proto::schema::IDs* release_ids();
  ::milvus::proto::schema::IDs* mutable_ids();
  void set_allocated_ids(::milvus::proto::schema::IDs* ids);

  // @@protoc_insertion_point(class_scope:milvus.proto.segcore.RetrieveResults)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::milvus::proto::schema::FieldData > fields_data_;
  ::milvus::proto::schema::IDs* ids_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_segcore_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// RetrieveRequest

// .milvus.proto.schema.IDs ids = 1;
inline bool RetrieveRequest::has_ids() const {
  return this != internal_default_instance() && ids_ != nullptr;
}
inline const ::milvus::proto::schema::IDs& RetrieveRequest::ids() const {
  const ::milvus::proto::schema::IDs* p = ids_;
  // @@protoc_insertion_point(field_get:milvus.proto.segcore.RetrieveRequest.ids)
  return p != nullptr ? *p : *reinterpret_cast<const ::milvus::proto::schema::IDs*>(
      &::milvus::proto::schema::_IDs_default_instance_);
}
inline ::milvus::proto::schema::IDs* RetrieveRequest::release_ids() {
  // @@protoc_insertion_point(field_release:milvus.proto.segcore.RetrieveRequest.ids)
  
  ::milvus::proto::schema::IDs* temp = ids_;
  ids_ = nullptr;
  return temp;
}
inline ::milvus::proto::schema::IDs* RetrieveRequest::mutable_ids() {
  
  if (ids_ == nullptr) {
    auto* p = CreateMaybeMessage<::milvus::proto::schema::IDs>(GetArenaNoVirtual());
    ids_ = p;
  }
  // @@protoc_insertion_point(field_mutable:milvus.proto.segcore.RetrieveRequest.ids)
  return ids_;
}
inline void RetrieveRequest::set_allocated_ids(::milvus::proto::schema::IDs* ids) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(ids_);
  }
  if (ids) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      ids = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, ids, submessage_arena);
    }
    
  } else {
    
  }
  ids_ = ids;
  // @@protoc_insertion_point(field_set_allocated:milvus.proto.segcore.RetrieveRequest.ids)
}

// repeated string output_fields = 2;
inline int RetrieveRequest::output_fields_size() const {
  return output_fields_.size();
}
inline void RetrieveRequest::clear_output_fields() {
  output_fields_.Clear();
}
inline const std::string& RetrieveRequest::output_fields(int index) const {
  // @@protoc_insertion_point(field_get:milvus.proto.segcore.RetrieveRequest.output_fields)
  return output_fields_.Get(index);
}
inline std::string* RetrieveRequest::mutable_output_fields(int index) {
  // @@protoc_insertion_point(field_mutable:milvus.proto.segcore.RetrieveRequest.output_fields)
  return output_fields_.Mutable(index);
}
inline void RetrieveRequest::set_output_fields(int index, const std::string& value) {
  // @@protoc_insertion_point(field_set:milvus.proto.segcore.RetrieveRequest.output_fields)
  output_fields_.Mutable(index)->assign(value);
}
inline void RetrieveRequest::set_output_fields(int index, std::string&& value) {
  // @@protoc_insertion_point(field_set:milvus.proto.segcore.RetrieveRequest.output_fields)
  output_fields_.Mutable(index)->assign(std::move(value));
}
inline void RetrieveRequest::set_output_fields(int index, const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  output_fields_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:milvus.proto.segcore.RetrieveRequest.output_fields)
}
inline void RetrieveRequest::set_output_fields(int index, const char* value, size_t size) {
  output_fields_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:milvus.proto.segcore.RetrieveRequest.output_fields)
}
inline std::string* RetrieveRequest::add_output_fields() {
  // @@protoc_insertion_point(field_add_mutable:milvus.proto.segcore.RetrieveRequest.output_fields)
  return output_fields_.Add();
}
inline void RetrieveRequest::add_output_fields(const std::string& value) {
  output_fields_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:milvus.proto.segcore.RetrieveRequest.output_fields)
}
inline void RetrieveRequest::add_output_fields(std::string&& value) {
  output_fields_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:milvus.proto.segcore.RetrieveRequest.output_fields)
}
inline void RetrieveRequest::add_output_fields(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  output_fields_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:milvus.proto.segcore.RetrieveRequest.output_fields)
}
inline void RetrieveRequest::add_output_fields(const char* value, size_t size) {
  output_fields_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:milvus.proto.segcore.RetrieveRequest.output_fields)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>&
RetrieveRequest::output_fields() const {
  // @@protoc_insertion_point(field_list:milvus.proto.segcore.RetrieveRequest.output_fields)
  return output_fields_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>*
RetrieveRequest::mutable_output_fields() {
  // @@protoc_insertion_point(field_mutable_list:milvus.proto.segcore.RetrieveRequest.output_fields)
  return &output_fields_;
}

// -------------------------------------------------------------------

// RetrieveResults

// .milvus.proto.schema.IDs ids = 1;
inline bool RetrieveResults::has_ids() const {
  return this != internal_default_instance() && ids_ != nullptr;
}
inline const ::milvus::proto::schema::IDs& RetrieveResults::ids() const {
  const ::milvus::proto::schema::IDs* p = ids_;
  // @@protoc_insertion_point(field_get:milvus.proto.segcore.RetrieveResults.ids)
  return p != nullptr ? *p : *reinterpret_cast<const ::milvus::proto::schema::IDs*>(
      &::milvus::proto::schema::_IDs_default_instance_);
}
inline ::milvus::proto::schema::IDs* RetrieveResults::release_ids() {
  // @@protoc_insertion_point(field_release:milvus.proto.segcore.RetrieveResults.ids)
  
  ::milvus::proto::schema::IDs* temp = ids_;
  ids_ = nullptr;
  return temp;
}
inline ::milvus::proto::schema::IDs* RetrieveResults::mutable_ids() {
  
  if (ids_ == nullptr) {
    auto* p = CreateMaybeMessage<::milvus::proto::schema::IDs>(GetArenaNoVirtual());
    ids_ = p;
  }
  // @@protoc_insertion_point(field_mutable:milvus.proto.segcore.RetrieveResults.ids)
  return ids_;
}
inline void RetrieveResults::set_allocated_ids(::milvus::proto::schema::IDs* ids) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(ids_);
  }
  if (ids) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      ids = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, ids, submessage_arena);
    }
    
  } else {
    
  }
  ids_ = ids;
  // @@protoc_insertion_point(field_set_allocated:milvus.proto.segcore.RetrieveResults.ids)
}

// repeated .milvus.proto.schema.FieldData fields_data = 2;
inline int RetrieveResults::fields_data_size() const {
  return fields_data_.size();
}
inline ::milvus::proto::schema::FieldData* RetrieveResults::mutable_fields_data(int index) {
  // @@protoc_insertion_point(field_mutable:milvus.proto.segcore.RetrieveResults.fields_data)
  return fields_data_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::milvus::proto::schema::FieldData >*
RetrieveResults::mutable_fields_data() {
  // @@protoc_insertion_point(field_mutable_list:milvus.proto.segcore.RetrieveResults.fields_data)
  return &fields_data_;
}
inline const ::milvus::proto::schema::FieldData& RetrieveResults::fields_data(int index) const {
  // @@protoc_insertion_point(field_get:milvus.proto.segcore.RetrieveResults.fields_data)
  return fields_data_.Get(index);
}
inline ::milvus::proto::schema::FieldData* RetrieveResults::add_fields_data() {
  // @@protoc_insertion_point(field_add:milvus.proto.segcore.RetrieveResults.fields_data)
  return fields_data_.Add();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::milvus::proto::schema::FieldData >&
RetrieveResults::fields_data() const {
  // @@protoc_insertion_point(field_list:milvus.proto.segcore.RetrieveResults.fields_data)
  return fields_data_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace segcore
}  // namespace proto
}  // namespace milvus

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_segcore_2eproto
