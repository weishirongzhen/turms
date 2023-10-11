// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: request/storage/update_message_attachment_info_request.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_request_2fstorage_2fupdate_5fmessage_5fattachment_5finfo_5frequest_2eproto_2epb_2eh
#define GOOGLE_PROTOBUF_INCLUDED_request_2fstorage_2fupdate_5fmessage_5fattachment_5finfo_5frequest_2eproto_2epb_2eh

#include <limits>
#include <string>
#include <type_traits>

#include "google/protobuf/port_def.inc"
#if PROTOBUF_VERSION < 4024000
#error "This file was generated by a newer version of protoc which is"
#error "incompatible with your Protocol Buffer headers. Please update"
#error "your headers."
#endif  // PROTOBUF_VERSION

#if 4024000 < PROTOBUF_MIN_PROTOC_VERSION
#error "This file was generated by an older version of protoc which is"
#error "incompatible with your Protocol Buffer headers. Please"
#error "regenerate this file with a newer version of protoc."
#endif  // PROTOBUF_MIN_PROTOC_VERSION
#include "google/protobuf/port_undef.inc"
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/arena.h"
#include "google/protobuf/arenastring.h"
#include "google/protobuf/generated_message_tctable_decl.h"
#include "google/protobuf/generated_message_util.h"
#include "google/protobuf/metadata_lite.h"
#include "google/protobuf/message_lite.h"
#include "google/protobuf/repeated_field.h"  // IWYU pragma: export
#include "google/protobuf/extension_set.h"  // IWYU pragma: export
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"

#define PROTOBUF_INTERNAL_EXPORT_request_2fstorage_2fupdate_5fmessage_5fattachment_5finfo_5frequest_2eproto

namespace google {
namespace protobuf {
namespace internal {
class AnyMetadata;
}  // namespace internal
}  // namespace protobuf
}  // namespace google

// Internal implementation detail -- do not use these members.
struct TableStruct_request_2fstorage_2fupdate_5fmessage_5fattachment_5finfo_5frequest_2eproto {
  static const ::uint32_t offsets[];
};
namespace turms {
namespace client {
namespace model {
namespace proto {
class UpdateMessageAttachmentInfoRequest;
struct UpdateMessageAttachmentInfoRequestDefaultTypeInternal;
extern UpdateMessageAttachmentInfoRequestDefaultTypeInternal _UpdateMessageAttachmentInfoRequest_default_instance_;
}  // namespace proto
}  // namespace model
}  // namespace client
}  // namespace turms
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google

namespace turms {
namespace client {
namespace model {
namespace proto {

// ===================================================================


// -------------------------------------------------------------------

class UpdateMessageAttachmentInfoRequest final :
    public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:turms.client.model.proto.UpdateMessageAttachmentInfoRequest) */ {
 public:
  inline UpdateMessageAttachmentInfoRequest() : UpdateMessageAttachmentInfoRequest(nullptr) {}
  ~UpdateMessageAttachmentInfoRequest() override;
  template<typename = void>
  explicit PROTOBUF_CONSTEXPR UpdateMessageAttachmentInfoRequest(::google::protobuf::internal::ConstantInitialized);

  UpdateMessageAttachmentInfoRequest(const UpdateMessageAttachmentInfoRequest& from);
  UpdateMessageAttachmentInfoRequest(UpdateMessageAttachmentInfoRequest&& from) noexcept
    : UpdateMessageAttachmentInfoRequest() {
    *this = ::std::move(from);
  }

  inline UpdateMessageAttachmentInfoRequest& operator=(const UpdateMessageAttachmentInfoRequest& from) {
    CopyFrom(from);
    return *this;
  }
  inline UpdateMessageAttachmentInfoRequest& operator=(UpdateMessageAttachmentInfoRequest&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const std::string& unknown_fields() const {
    return _internal_metadata_.unknown_fields<std::string>(::google::protobuf::internal::GetEmptyString);
  }
  inline std::string* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields<std::string>();
  }

  static const UpdateMessageAttachmentInfoRequest& default_instance() {
    return *internal_default_instance();
  }
  static inline const UpdateMessageAttachmentInfoRequest* internal_default_instance() {
    return reinterpret_cast<const UpdateMessageAttachmentInfoRequest*>(
               &_UpdateMessageAttachmentInfoRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(UpdateMessageAttachmentInfoRequest& a, UpdateMessageAttachmentInfoRequest& b) {
    a.Swap(&b);
  }
  inline void Swap(UpdateMessageAttachmentInfoRequest* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::google::protobuf::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(UpdateMessageAttachmentInfoRequest* other) {
    if (other == this) return;
    ABSL_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  UpdateMessageAttachmentInfoRequest* New(::google::protobuf::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<UpdateMessageAttachmentInfoRequest>(arena);
  }
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)  final;
  void CopyFrom(const UpdateMessageAttachmentInfoRequest& from);
  void MergeFrom(const UpdateMessageAttachmentInfoRequest& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  ::size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::google::protobuf::internal::ParseContext* ctx) final;
  ::uint8_t* _InternalSerialize(
      ::uint8_t* target, ::google::protobuf::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::google::protobuf::Arena* arena);
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(UpdateMessageAttachmentInfoRequest* other);

  private:
  friend class ::google::protobuf::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() {
    return "turms.client.model.proto.UpdateMessageAttachmentInfoRequest";
  }
  protected:
  explicit UpdateMessageAttachmentInfoRequest(::google::protobuf::Arena* arena);
  public:

  std::string GetTypeName() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kAttachmentIdStrFieldNumber = 2,
    kAttachmentIdNumFieldNumber = 1,
    kUserIdToShareWithFieldNumber = 3,
    kUserIdToUnshareWithFieldNumber = 4,
    kGroupIdToShareWithFieldNumber = 5,
    kGroupIdToUnshareWithFieldNumber = 6,
  };
  // optional string attachment_id_str = 2;
  bool has_attachment_id_str() const;
  void clear_attachment_id_str() ;
  const std::string& attachment_id_str() const;
  template <typename Arg_ = const std::string&, typename... Args_>
  void set_attachment_id_str(Arg_&& arg, Args_... args);
  std::string* mutable_attachment_id_str();
  PROTOBUF_NODISCARD std::string* release_attachment_id_str();
  void set_allocated_attachment_id_str(std::string* ptr);

  private:
  const std::string& _internal_attachment_id_str() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_attachment_id_str(
      const std::string& value);
  std::string* _internal_mutable_attachment_id_str();

  public:
  // optional int64 attachment_id_num = 1;
  bool has_attachment_id_num() const;
  void clear_attachment_id_num() ;
  ::int64_t attachment_id_num() const;
  void set_attachment_id_num(::int64_t value);

  private:
  ::int64_t _internal_attachment_id_num() const;
  void _internal_set_attachment_id_num(::int64_t value);

  public:
  // optional int64 user_id_to_share_with = 3;
  bool has_user_id_to_share_with() const;
  void clear_user_id_to_share_with() ;
  ::int64_t user_id_to_share_with() const;
  void set_user_id_to_share_with(::int64_t value);

  private:
  ::int64_t _internal_user_id_to_share_with() const;
  void _internal_set_user_id_to_share_with(::int64_t value);

  public:
  // optional int64 user_id_to_unshare_with = 4;
  bool has_user_id_to_unshare_with() const;
  void clear_user_id_to_unshare_with() ;
  ::int64_t user_id_to_unshare_with() const;
  void set_user_id_to_unshare_with(::int64_t value);

  private:
  ::int64_t _internal_user_id_to_unshare_with() const;
  void _internal_set_user_id_to_unshare_with(::int64_t value);

  public:
  // optional int64 group_id_to_share_with = 5;
  bool has_group_id_to_share_with() const;
  void clear_group_id_to_share_with() ;
  ::int64_t group_id_to_share_with() const;
  void set_group_id_to_share_with(::int64_t value);

  private:
  ::int64_t _internal_group_id_to_share_with() const;
  void _internal_set_group_id_to_share_with(::int64_t value);

  public:
  // optional int64 group_id_to_unshare_with = 6;
  bool has_group_id_to_unshare_with() const;
  void clear_group_id_to_unshare_with() ;
  ::int64_t group_id_to_unshare_with() const;
  void set_group_id_to_unshare_with(::int64_t value);

  private:
  ::int64_t _internal_group_id_to_unshare_with() const;
  void _internal_set_group_id_to_unshare_with(::int64_t value);

  public:
  // @@protoc_insertion_point(class_scope:turms.client.model.proto.UpdateMessageAttachmentInfoRequest)
 private:
  class _Internal;

  friend class ::google::protobuf::internal::TcParser;
  static const ::google::protobuf::internal::TcParseTable<3, 6, 0, 85, 2> _table_;
  template <typename T> friend class ::google::protobuf::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::google::protobuf::internal::HasBits<1> _has_bits_;
    mutable ::google::protobuf::internal::CachedSize _cached_size_;
    ::google::protobuf::internal::ArenaStringPtr attachment_id_str_;
    ::int64_t attachment_id_num_;
    ::int64_t user_id_to_share_with_;
    ::int64_t user_id_to_unshare_with_;
    ::int64_t group_id_to_share_with_;
    ::int64_t group_id_to_unshare_with_;
    PROTOBUF_TSAN_DECLARE_MEMBER;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_request_2fstorage_2fupdate_5fmessage_5fattachment_5finfo_5frequest_2eproto;
};

// ===================================================================




// ===================================================================


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// UpdateMessageAttachmentInfoRequest

// optional int64 attachment_id_num = 1;
inline bool UpdateMessageAttachmentInfoRequest::has_attachment_id_num() const {
  bool value = (_impl_._has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline void UpdateMessageAttachmentInfoRequest::clear_attachment_id_num() {
  _impl_.attachment_id_num_ = ::int64_t{0};
  _impl_._has_bits_[0] &= ~0x00000002u;
}
inline ::int64_t UpdateMessageAttachmentInfoRequest::attachment_id_num() const {
  // @@protoc_insertion_point(field_get:turms.client.model.proto.UpdateMessageAttachmentInfoRequest.attachment_id_num)
  return _internal_attachment_id_num();
}
inline void UpdateMessageAttachmentInfoRequest::set_attachment_id_num(::int64_t value) {
  _internal_set_attachment_id_num(value);
  // @@protoc_insertion_point(field_set:turms.client.model.proto.UpdateMessageAttachmentInfoRequest.attachment_id_num)
}
inline ::int64_t UpdateMessageAttachmentInfoRequest::_internal_attachment_id_num() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.attachment_id_num_;
}
inline void UpdateMessageAttachmentInfoRequest::_internal_set_attachment_id_num(::int64_t value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_._has_bits_[0] |= 0x00000002u;
  _impl_.attachment_id_num_ = value;
}

// optional string attachment_id_str = 2;
inline bool UpdateMessageAttachmentInfoRequest::has_attachment_id_str() const {
  bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline void UpdateMessageAttachmentInfoRequest::clear_attachment_id_str() {
  _impl_.attachment_id_str_.ClearToEmpty();
  _impl_._has_bits_[0] &= ~0x00000001u;
}
inline const std::string& UpdateMessageAttachmentInfoRequest::attachment_id_str() const {
  // @@protoc_insertion_point(field_get:turms.client.model.proto.UpdateMessageAttachmentInfoRequest.attachment_id_str)
  return _internal_attachment_id_str();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void UpdateMessageAttachmentInfoRequest::set_attachment_id_str(Arg_&& arg,
                                                     Args_... args) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_._has_bits_[0] |= 0x00000001u;
  _impl_.attachment_id_str_.Set(static_cast<Arg_&&>(arg), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:turms.client.model.proto.UpdateMessageAttachmentInfoRequest.attachment_id_str)
}
inline std::string* UpdateMessageAttachmentInfoRequest::mutable_attachment_id_str() {
  std::string* _s = _internal_mutable_attachment_id_str();
  // @@protoc_insertion_point(field_mutable:turms.client.model.proto.UpdateMessageAttachmentInfoRequest.attachment_id_str)
  return _s;
}
inline const std::string& UpdateMessageAttachmentInfoRequest::_internal_attachment_id_str() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.attachment_id_str_.Get();
}
inline void UpdateMessageAttachmentInfoRequest::_internal_set_attachment_id_str(const std::string& value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_._has_bits_[0] |= 0x00000001u;
  _impl_.attachment_id_str_.Set(value, GetArenaForAllocation());
}
inline std::string* UpdateMessageAttachmentInfoRequest::_internal_mutable_attachment_id_str() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_._has_bits_[0] |= 0x00000001u;
  return _impl_.attachment_id_str_.Mutable( GetArenaForAllocation());
}
inline std::string* UpdateMessageAttachmentInfoRequest::release_attachment_id_str() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  // @@protoc_insertion_point(field_release:turms.client.model.proto.UpdateMessageAttachmentInfoRequest.attachment_id_str)
  if ((_impl_._has_bits_[0] & 0x00000001u) == 0) {
    return nullptr;
  }
  _impl_._has_bits_[0] &= ~0x00000001u;
  auto* released = _impl_.attachment_id_str_.Release();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.attachment_id_str_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  return released;
}
inline void UpdateMessageAttachmentInfoRequest::set_allocated_attachment_id_str(std::string* value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  if (value != nullptr) {
    _impl_._has_bits_[0] |= 0x00000001u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000001u;
  }
  _impl_.attachment_id_str_.SetAllocated(value, GetArenaForAllocation());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.attachment_id_str_.IsDefault()) {
          _impl_.attachment_id_str_.Set("", GetArenaForAllocation());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:turms.client.model.proto.UpdateMessageAttachmentInfoRequest.attachment_id_str)
}

// optional int64 user_id_to_share_with = 3;
inline bool UpdateMessageAttachmentInfoRequest::has_user_id_to_share_with() const {
  bool value = (_impl_._has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline void UpdateMessageAttachmentInfoRequest::clear_user_id_to_share_with() {
  _impl_.user_id_to_share_with_ = ::int64_t{0};
  _impl_._has_bits_[0] &= ~0x00000004u;
}
inline ::int64_t UpdateMessageAttachmentInfoRequest::user_id_to_share_with() const {
  // @@protoc_insertion_point(field_get:turms.client.model.proto.UpdateMessageAttachmentInfoRequest.user_id_to_share_with)
  return _internal_user_id_to_share_with();
}
inline void UpdateMessageAttachmentInfoRequest::set_user_id_to_share_with(::int64_t value) {
  _internal_set_user_id_to_share_with(value);
  // @@protoc_insertion_point(field_set:turms.client.model.proto.UpdateMessageAttachmentInfoRequest.user_id_to_share_with)
}
inline ::int64_t UpdateMessageAttachmentInfoRequest::_internal_user_id_to_share_with() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.user_id_to_share_with_;
}
inline void UpdateMessageAttachmentInfoRequest::_internal_set_user_id_to_share_with(::int64_t value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_._has_bits_[0] |= 0x00000004u;
  _impl_.user_id_to_share_with_ = value;
}

// optional int64 user_id_to_unshare_with = 4;
inline bool UpdateMessageAttachmentInfoRequest::has_user_id_to_unshare_with() const {
  bool value = (_impl_._has_bits_[0] & 0x00000008u) != 0;
  return value;
}
inline void UpdateMessageAttachmentInfoRequest::clear_user_id_to_unshare_with() {
  _impl_.user_id_to_unshare_with_ = ::int64_t{0};
  _impl_._has_bits_[0] &= ~0x00000008u;
}
inline ::int64_t UpdateMessageAttachmentInfoRequest::user_id_to_unshare_with() const {
  // @@protoc_insertion_point(field_get:turms.client.model.proto.UpdateMessageAttachmentInfoRequest.user_id_to_unshare_with)
  return _internal_user_id_to_unshare_with();
}
inline void UpdateMessageAttachmentInfoRequest::set_user_id_to_unshare_with(::int64_t value) {
  _internal_set_user_id_to_unshare_with(value);
  // @@protoc_insertion_point(field_set:turms.client.model.proto.UpdateMessageAttachmentInfoRequest.user_id_to_unshare_with)
}
inline ::int64_t UpdateMessageAttachmentInfoRequest::_internal_user_id_to_unshare_with() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.user_id_to_unshare_with_;
}
inline void UpdateMessageAttachmentInfoRequest::_internal_set_user_id_to_unshare_with(::int64_t value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_._has_bits_[0] |= 0x00000008u;
  _impl_.user_id_to_unshare_with_ = value;
}

// optional int64 group_id_to_share_with = 5;
inline bool UpdateMessageAttachmentInfoRequest::has_group_id_to_share_with() const {
  bool value = (_impl_._has_bits_[0] & 0x00000010u) != 0;
  return value;
}
inline void UpdateMessageAttachmentInfoRequest::clear_group_id_to_share_with() {
  _impl_.group_id_to_share_with_ = ::int64_t{0};
  _impl_._has_bits_[0] &= ~0x00000010u;
}
inline ::int64_t UpdateMessageAttachmentInfoRequest::group_id_to_share_with() const {
  // @@protoc_insertion_point(field_get:turms.client.model.proto.UpdateMessageAttachmentInfoRequest.group_id_to_share_with)
  return _internal_group_id_to_share_with();
}
inline void UpdateMessageAttachmentInfoRequest::set_group_id_to_share_with(::int64_t value) {
  _internal_set_group_id_to_share_with(value);
  // @@protoc_insertion_point(field_set:turms.client.model.proto.UpdateMessageAttachmentInfoRequest.group_id_to_share_with)
}
inline ::int64_t UpdateMessageAttachmentInfoRequest::_internal_group_id_to_share_with() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.group_id_to_share_with_;
}
inline void UpdateMessageAttachmentInfoRequest::_internal_set_group_id_to_share_with(::int64_t value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_._has_bits_[0] |= 0x00000010u;
  _impl_.group_id_to_share_with_ = value;
}

// optional int64 group_id_to_unshare_with = 6;
inline bool UpdateMessageAttachmentInfoRequest::has_group_id_to_unshare_with() const {
  bool value = (_impl_._has_bits_[0] & 0x00000020u) != 0;
  return value;
}
inline void UpdateMessageAttachmentInfoRequest::clear_group_id_to_unshare_with() {
  _impl_.group_id_to_unshare_with_ = ::int64_t{0};
  _impl_._has_bits_[0] &= ~0x00000020u;
}
inline ::int64_t UpdateMessageAttachmentInfoRequest::group_id_to_unshare_with() const {
  // @@protoc_insertion_point(field_get:turms.client.model.proto.UpdateMessageAttachmentInfoRequest.group_id_to_unshare_with)
  return _internal_group_id_to_unshare_with();
}
inline void UpdateMessageAttachmentInfoRequest::set_group_id_to_unshare_with(::int64_t value) {
  _internal_set_group_id_to_unshare_with(value);
  // @@protoc_insertion_point(field_set:turms.client.model.proto.UpdateMessageAttachmentInfoRequest.group_id_to_unshare_with)
}
inline ::int64_t UpdateMessageAttachmentInfoRequest::_internal_group_id_to_unshare_with() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.group_id_to_unshare_with_;
}
inline void UpdateMessageAttachmentInfoRequest::_internal_set_group_id_to_unshare_with(::int64_t value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_._has_bits_[0] |= 0x00000020u;
  _impl_.group_id_to_unshare_with_ = value;
}

#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)
}  // namespace proto
}  // namespace model
}  // namespace client
}  // namespace turms


// @@protoc_insertion_point(global_scope)

#include "google/protobuf/port_undef.inc"

#endif  // GOOGLE_PROTOBUF_INCLUDED_request_2fstorage_2fupdate_5fmessage_5fattachment_5finfo_5frequest_2eproto_2epb_2eh