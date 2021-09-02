// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: IM.Regist.proto

#ifndef PROTOBUF_IM_2eRegist_2eproto__INCLUDED
#define PROTOBUF_IM_2eRegist_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2006000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message_lite.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include "IM.BaseDefine.pb.h"
// @@protoc_insertion_point(includes)

namespace IM {
namespace Regist {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_IM_2eRegist_2eproto();
void protobuf_AssignDesc_IM_2eRegist_2eproto();
void protobuf_ShutdownFile_IM_2eRegist_2eproto();

class IMRegistReq;
class IMRegistRes;

// ===================================================================

class IMRegistReq : public ::google::protobuf::MessageLite {
 public:
  IMRegistReq();
  virtual ~IMRegistReq();

  IMRegistReq(const IMRegistReq& from);

  inline IMRegistReq& operator=(const IMRegistReq& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::std::string& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::std::string* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const IMRegistReq& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const IMRegistReq* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(IMRegistReq* other);

  // implements Message ----------------------------------------------

  IMRegistReq* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const IMRegistReq& from);
  void MergeFrom(const IMRegistReq& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  void DiscardUnknownFields();
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::std::string GetTypeName() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required string user_name = 1;
  inline bool has_user_name() const;
  inline void clear_user_name();
  static const int kUserNameFieldNumber = 1;
  inline const ::std::string& user_name() const;
  inline void set_user_name(const ::std::string& value);
  inline void set_user_name(const char* value);
  inline void set_user_name(const char* value, size_t size);
  inline ::std::string* mutable_user_name();
  inline ::std::string* release_user_name();
  inline void set_allocated_user_name(::std::string* user_name);

  // required string password = 2;
  inline bool has_password() const;
  inline void clear_password();
  static const int kPasswordFieldNumber = 2;
  inline const ::std::string& password() const;
  inline void set_password(const ::std::string& value);
  inline void set_password(const char* value);
  inline void set_password(const char* value, size_t size);
  inline ::std::string* mutable_password();
  inline ::std::string* release_password();
  inline void set_allocated_password(::std::string* password);

  // required .IM.BaseDefine.UserStatType online_status = 3;
  inline bool has_online_status() const;
  inline void clear_online_status();
  static const int kOnlineStatusFieldNumber = 3;
  inline ::IM::BaseDefine::UserStatType online_status() const;
  inline void set_online_status(::IM::BaseDefine::UserStatType value);

  // required .IM.BaseDefine.ClientType client_type = 4;
  inline bool has_client_type() const;
  inline void clear_client_type();
  static const int kClientTypeFieldNumber = 4;
  inline ::IM::BaseDefine::ClientType client_type() const;
  inline void set_client_type(::IM::BaseDefine::ClientType value);

  // optional string client_version = 5;
  inline bool has_client_version() const;
  inline void clear_client_version();
  static const int kClientVersionFieldNumber = 5;
  inline const ::std::string& client_version() const;
  inline void set_client_version(const ::std::string& value);
  inline void set_client_version(const char* value);
  inline void set_client_version(const char* value, size_t size);
  inline ::std::string* mutable_client_version();
  inline ::std::string* release_client_version();
  inline void set_allocated_client_version(::std::string* client_version);

  // @@protoc_insertion_point(class_scope:IM.Regist.IMRegistReq)
 private:
  inline void set_has_user_name();
  inline void clear_has_user_name();
  inline void set_has_password();
  inline void clear_has_password();
  inline void set_has_online_status();
  inline void clear_has_online_status();
  inline void set_has_client_type();
  inline void clear_has_client_type();
  inline void set_has_client_version();
  inline void clear_has_client_version();

  ::std::string _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::std::string* user_name_;
  ::std::string* password_;
  int online_status_;
  int client_type_;
  ::std::string* client_version_;
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_IM_2eRegist_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_IM_2eRegist_2eproto();
  #endif
  friend void protobuf_AssignDesc_IM_2eRegist_2eproto();
  friend void protobuf_ShutdownFile_IM_2eRegist_2eproto();

  void InitAsDefaultInstance();
  static IMRegistReq* default_instance_;
};
// -------------------------------------------------------------------

class IMRegistRes : public ::google::protobuf::MessageLite {
 public:
  IMRegistRes();
  virtual ~IMRegistRes();

  IMRegistRes(const IMRegistRes& from);

  inline IMRegistRes& operator=(const IMRegistRes& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::std::string& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::std::string* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const IMRegistRes& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const IMRegistRes* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(IMRegistRes* other);

  // implements Message ----------------------------------------------

  IMRegistRes* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const IMRegistRes& from);
  void MergeFrom(const IMRegistRes& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  void DiscardUnknownFields();
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::std::string GetTypeName() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required uint32 server_time = 1;
  inline bool has_server_time() const;
  inline void clear_server_time();
  static const int kServerTimeFieldNumber = 1;
  inline ::google::protobuf::uint32 server_time() const;
  inline void set_server_time(::google::protobuf::uint32 value);

  // required .IM.BaseDefine.ResultType result_code = 2;
  inline bool has_result_code() const;
  inline void clear_result_code();
  static const int kResultCodeFieldNumber = 2;
  inline ::IM::BaseDefine::ResultType result_code() const;
  inline void set_result_code(::IM::BaseDefine::ResultType value);

  // optional string result_string = 3;
  inline bool has_result_string() const;
  inline void clear_result_string();
  static const int kResultStringFieldNumber = 3;
  inline const ::std::string& result_string() const;
  inline void set_result_string(const ::std::string& value);
  inline void set_result_string(const char* value);
  inline void set_result_string(const char* value, size_t size);
  inline ::std::string* mutable_result_string();
  inline ::std::string* release_result_string();
  inline void set_allocated_result_string(::std::string* result_string);

  // optional .IM.BaseDefine.UserStatType online_status = 4;
  inline bool has_online_status() const;
  inline void clear_online_status();
  static const int kOnlineStatusFieldNumber = 4;
  inline ::IM::BaseDefine::UserStatType online_status() const;
  inline void set_online_status(::IM::BaseDefine::UserStatType value);

  // optional .IM.BaseDefine.UserInfo user_info = 5;
  inline bool has_user_info() const;
  inline void clear_user_info();
  static const int kUserInfoFieldNumber = 5;
  inline const ::IM::BaseDefine::UserInfo& user_info() const;
  inline ::IM::BaseDefine::UserInfo* mutable_user_info();
  inline ::IM::BaseDefine::UserInfo* release_user_info();
  inline void set_allocated_user_info(::IM::BaseDefine::UserInfo* user_info);

  // @@protoc_insertion_point(class_scope:IM.Regist.IMRegistRes)
 private:
  inline void set_has_server_time();
  inline void clear_has_server_time();
  inline void set_has_result_code();
  inline void clear_has_result_code();
  inline void set_has_result_string();
  inline void clear_has_result_string();
  inline void set_has_online_status();
  inline void clear_has_online_status();
  inline void set_has_user_info();
  inline void clear_has_user_info();

  ::std::string _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::uint32 server_time_;
  int result_code_;
  ::std::string* result_string_;
  ::IM::BaseDefine::UserInfo* user_info_;
  int online_status_;
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_IM_2eRegist_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_IM_2eRegist_2eproto();
  #endif
  friend void protobuf_AssignDesc_IM_2eRegist_2eproto();
  friend void protobuf_ShutdownFile_IM_2eRegist_2eproto();

  void InitAsDefaultInstance();
  static IMRegistRes* default_instance_;
};
// ===================================================================


// ===================================================================

// IMRegistReq

// required string user_name = 1;
inline bool IMRegistReq::has_user_name() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void IMRegistReq::set_has_user_name() {
  _has_bits_[0] |= 0x00000001u;
}
inline void IMRegistReq::clear_has_user_name() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void IMRegistReq::clear_user_name() {
  if (user_name_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    user_name_->clear();
  }
  clear_has_user_name();
}
inline const ::std::string& IMRegistReq::user_name() const {
  // @@protoc_insertion_point(field_get:IM.Regist.IMRegistReq.user_name)
  return *user_name_;
}
inline void IMRegistReq::set_user_name(const ::std::string& value) {
  set_has_user_name();
  if (user_name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    user_name_ = new ::std::string;
  }
  user_name_->assign(value);
  // @@protoc_insertion_point(field_set:IM.Regist.IMRegistReq.user_name)
}
inline void IMRegistReq::set_user_name(const char* value) {
  set_has_user_name();
  if (user_name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    user_name_ = new ::std::string;
  }
  user_name_->assign(value);
  // @@protoc_insertion_point(field_set_char:IM.Regist.IMRegistReq.user_name)
}
inline void IMRegistReq::set_user_name(const char* value, size_t size) {
  set_has_user_name();
  if (user_name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    user_name_ = new ::std::string;
  }
  user_name_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:IM.Regist.IMRegistReq.user_name)
}
inline ::std::string* IMRegistReq::mutable_user_name() {
  set_has_user_name();
  if (user_name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    user_name_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:IM.Regist.IMRegistReq.user_name)
  return user_name_;
}
inline ::std::string* IMRegistReq::release_user_name() {
  clear_has_user_name();
  if (user_name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = user_name_;
    user_name_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void IMRegistReq::set_allocated_user_name(::std::string* user_name) {
  if (user_name_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete user_name_;
  }
  if (user_name) {
    set_has_user_name();
    user_name_ = user_name;
  } else {
    clear_has_user_name();
    user_name_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:IM.Regist.IMRegistReq.user_name)
}

// required string password = 2;
inline bool IMRegistReq::has_password() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void IMRegistReq::set_has_password() {
  _has_bits_[0] |= 0x00000002u;
}
inline void IMRegistReq::clear_has_password() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void IMRegistReq::clear_password() {
  if (password_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    password_->clear();
  }
  clear_has_password();
}
inline const ::std::string& IMRegistReq::password() const {
  // @@protoc_insertion_point(field_get:IM.Regist.IMRegistReq.password)
  return *password_;
}
inline void IMRegistReq::set_password(const ::std::string& value) {
  set_has_password();
  if (password_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    password_ = new ::std::string;
  }
  password_->assign(value);
  // @@protoc_insertion_point(field_set:IM.Regist.IMRegistReq.password)
}
inline void IMRegistReq::set_password(const char* value) {
  set_has_password();
  if (password_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    password_ = new ::std::string;
  }
  password_->assign(value);
  // @@protoc_insertion_point(field_set_char:IM.Regist.IMRegistReq.password)
}
inline void IMRegistReq::set_password(const char* value, size_t size) {
  set_has_password();
  if (password_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    password_ = new ::std::string;
  }
  password_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:IM.Regist.IMRegistReq.password)
}
inline ::std::string* IMRegistReq::mutable_password() {
  set_has_password();
  if (password_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    password_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:IM.Regist.IMRegistReq.password)
  return password_;
}
inline ::std::string* IMRegistReq::release_password() {
  clear_has_password();
  if (password_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = password_;
    password_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void IMRegistReq::set_allocated_password(::std::string* password) {
  if (password_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete password_;
  }
  if (password) {
    set_has_password();
    password_ = password;
  } else {
    clear_has_password();
    password_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:IM.Regist.IMRegistReq.password)
}

// required .IM.BaseDefine.UserStatType online_status = 3;
inline bool IMRegistReq::has_online_status() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void IMRegistReq::set_has_online_status() {
  _has_bits_[0] |= 0x00000004u;
}
inline void IMRegistReq::clear_has_online_status() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void IMRegistReq::clear_online_status() {
  online_status_ = 1;
  clear_has_online_status();
}
inline ::IM::BaseDefine::UserStatType IMRegistReq::online_status() const {
  // @@protoc_insertion_point(field_get:IM.Regist.IMRegistReq.online_status)
  return static_cast< ::IM::BaseDefine::UserStatType >(online_status_);
}
inline void IMRegistReq::set_online_status(::IM::BaseDefine::UserStatType value) {
  assert(::IM::BaseDefine::UserStatType_IsValid(value));
  set_has_online_status();
  online_status_ = value;
  // @@protoc_insertion_point(field_set:IM.Regist.IMRegistReq.online_status)
}

// required .IM.BaseDefine.ClientType client_type = 4;
inline bool IMRegistReq::has_client_type() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void IMRegistReq::set_has_client_type() {
  _has_bits_[0] |= 0x00000008u;
}
inline void IMRegistReq::clear_has_client_type() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void IMRegistReq::clear_client_type() {
  client_type_ = 1;
  clear_has_client_type();
}
inline ::IM::BaseDefine::ClientType IMRegistReq::client_type() const {
  // @@protoc_insertion_point(field_get:IM.Regist.IMRegistReq.client_type)
  return static_cast< ::IM::BaseDefine::ClientType >(client_type_);
}
inline void IMRegistReq::set_client_type(::IM::BaseDefine::ClientType value) {
  assert(::IM::BaseDefine::ClientType_IsValid(value));
  set_has_client_type();
  client_type_ = value;
  // @@protoc_insertion_point(field_set:IM.Regist.IMRegistReq.client_type)
}

// optional string client_version = 5;
inline bool IMRegistReq::has_client_version() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void IMRegistReq::set_has_client_version() {
  _has_bits_[0] |= 0x00000010u;
}
inline void IMRegistReq::clear_has_client_version() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void IMRegistReq::clear_client_version() {
  if (client_version_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    client_version_->clear();
  }
  clear_has_client_version();
}
inline const ::std::string& IMRegistReq::client_version() const {
  // @@protoc_insertion_point(field_get:IM.Regist.IMRegistReq.client_version)
  return *client_version_;
}
inline void IMRegistReq::set_client_version(const ::std::string& value) {
  set_has_client_version();
  if (client_version_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    client_version_ = new ::std::string;
  }
  client_version_->assign(value);
  // @@protoc_insertion_point(field_set:IM.Regist.IMRegistReq.client_version)
}
inline void IMRegistReq::set_client_version(const char* value) {
  set_has_client_version();
  if (client_version_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    client_version_ = new ::std::string;
  }
  client_version_->assign(value);
  // @@protoc_insertion_point(field_set_char:IM.Regist.IMRegistReq.client_version)
}
inline void IMRegistReq::set_client_version(const char* value, size_t size) {
  set_has_client_version();
  if (client_version_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    client_version_ = new ::std::string;
  }
  client_version_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:IM.Regist.IMRegistReq.client_version)
}
inline ::std::string* IMRegistReq::mutable_client_version() {
  set_has_client_version();
  if (client_version_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    client_version_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:IM.Regist.IMRegistReq.client_version)
  return client_version_;
}
inline ::std::string* IMRegistReq::release_client_version() {
  clear_has_client_version();
  if (client_version_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = client_version_;
    client_version_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void IMRegistReq::set_allocated_client_version(::std::string* client_version) {
  if (client_version_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete client_version_;
  }
  if (client_version) {
    set_has_client_version();
    client_version_ = client_version;
  } else {
    clear_has_client_version();
    client_version_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:IM.Regist.IMRegistReq.client_version)
}

// -------------------------------------------------------------------

// IMRegistRes

// required uint32 server_time = 1;
inline bool IMRegistRes::has_server_time() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void IMRegistRes::set_has_server_time() {
  _has_bits_[0] |= 0x00000001u;
}
inline void IMRegistRes::clear_has_server_time() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void IMRegistRes::clear_server_time() {
  server_time_ = 0u;
  clear_has_server_time();
}
inline ::google::protobuf::uint32 IMRegistRes::server_time() const {
  // @@protoc_insertion_point(field_get:IM.Regist.IMRegistRes.server_time)
  return server_time_;
}
inline void IMRegistRes::set_server_time(::google::protobuf::uint32 value) {
  set_has_server_time();
  server_time_ = value;
  // @@protoc_insertion_point(field_set:IM.Regist.IMRegistRes.server_time)
}

// required .IM.BaseDefine.ResultType result_code = 2;
inline bool IMRegistRes::has_result_code() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void IMRegistRes::set_has_result_code() {
  _has_bits_[0] |= 0x00000002u;
}
inline void IMRegistRes::clear_has_result_code() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void IMRegistRes::clear_result_code() {
  result_code_ = 0;
  clear_has_result_code();
}
inline ::IM::BaseDefine::ResultType IMRegistRes::result_code() const {
  // @@protoc_insertion_point(field_get:IM.Regist.IMRegistRes.result_code)
  return static_cast< ::IM::BaseDefine::ResultType >(result_code_);
}
inline void IMRegistRes::set_result_code(::IM::BaseDefine::ResultType value) {
  assert(::IM::BaseDefine::ResultType_IsValid(value));
  set_has_result_code();
  result_code_ = value;
  // @@protoc_insertion_point(field_set:IM.Regist.IMRegistRes.result_code)
}

// optional string result_string = 3;
inline bool IMRegistRes::has_result_string() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void IMRegistRes::set_has_result_string() {
  _has_bits_[0] |= 0x00000004u;
}
inline void IMRegistRes::clear_has_result_string() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void IMRegistRes::clear_result_string() {
  if (result_string_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    result_string_->clear();
  }
  clear_has_result_string();
}
inline const ::std::string& IMRegistRes::result_string() const {
  // @@protoc_insertion_point(field_get:IM.Regist.IMRegistRes.result_string)
  return *result_string_;
}
inline void IMRegistRes::set_result_string(const ::std::string& value) {
  set_has_result_string();
  if (result_string_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    result_string_ = new ::std::string;
  }
  result_string_->assign(value);
  // @@protoc_insertion_point(field_set:IM.Regist.IMRegistRes.result_string)
}
inline void IMRegistRes::set_result_string(const char* value) {
  set_has_result_string();
  if (result_string_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    result_string_ = new ::std::string;
  }
  result_string_->assign(value);
  // @@protoc_insertion_point(field_set_char:IM.Regist.IMRegistRes.result_string)
}
inline void IMRegistRes::set_result_string(const char* value, size_t size) {
  set_has_result_string();
  if (result_string_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    result_string_ = new ::std::string;
  }
  result_string_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:IM.Regist.IMRegistRes.result_string)
}
inline ::std::string* IMRegistRes::mutable_result_string() {
  set_has_result_string();
  if (result_string_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    result_string_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:IM.Regist.IMRegistRes.result_string)
  return result_string_;
}
inline ::std::string* IMRegistRes::release_result_string() {
  clear_has_result_string();
  if (result_string_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = result_string_;
    result_string_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void IMRegistRes::set_allocated_result_string(::std::string* result_string) {
  if (result_string_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete result_string_;
  }
  if (result_string) {
    set_has_result_string();
    result_string_ = result_string;
  } else {
    clear_has_result_string();
    result_string_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:IM.Regist.IMRegistRes.result_string)
}

// optional .IM.BaseDefine.UserStatType online_status = 4;
inline bool IMRegistRes::has_online_status() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void IMRegistRes::set_has_online_status() {
  _has_bits_[0] |= 0x00000008u;
}
inline void IMRegistRes::clear_has_online_status() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void IMRegistRes::clear_online_status() {
  online_status_ = 1;
  clear_has_online_status();
}
inline ::IM::BaseDefine::UserStatType IMRegistRes::online_status() const {
  // @@protoc_insertion_point(field_get:IM.Regist.IMRegistRes.online_status)
  return static_cast< ::IM::BaseDefine::UserStatType >(online_status_);
}
inline void IMRegistRes::set_online_status(::IM::BaseDefine::UserStatType value) {
  assert(::IM::BaseDefine::UserStatType_IsValid(value));
  set_has_online_status();
  online_status_ = value;
  // @@protoc_insertion_point(field_set:IM.Regist.IMRegistRes.online_status)
}

// optional .IM.BaseDefine.UserInfo user_info = 5;
inline bool IMRegistRes::has_user_info() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void IMRegistRes::set_has_user_info() {
  _has_bits_[0] |= 0x00000010u;
}
inline void IMRegistRes::clear_has_user_info() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void IMRegistRes::clear_user_info() {
  if (user_info_ != NULL) user_info_->::IM::BaseDefine::UserInfo::Clear();
  clear_has_user_info();
}
inline const ::IM::BaseDefine::UserInfo& IMRegistRes::user_info() const {
  // @@protoc_insertion_point(field_get:IM.Regist.IMRegistRes.user_info)
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  return user_info_ != NULL ? *user_info_ : *default_instance().user_info_;
#else
  return user_info_ != NULL ? *user_info_ : *default_instance_->user_info_;
#endif
}
inline ::IM::BaseDefine::UserInfo* IMRegistRes::mutable_user_info() {
  set_has_user_info();
  if (user_info_ == NULL) user_info_ = new ::IM::BaseDefine::UserInfo;
  // @@protoc_insertion_point(field_mutable:IM.Regist.IMRegistRes.user_info)
  return user_info_;
}
inline ::IM::BaseDefine::UserInfo* IMRegistRes::release_user_info() {
  clear_has_user_info();
  ::IM::BaseDefine::UserInfo* temp = user_info_;
  user_info_ = NULL;
  return temp;
}
inline void IMRegistRes::set_allocated_user_info(::IM::BaseDefine::UserInfo* user_info) {
  delete user_info_;
  user_info_ = user_info;
  if (user_info) {
    set_has_user_info();
  } else {
    clear_has_user_info();
  }
  // @@protoc_insertion_point(field_set_allocated:IM.Regist.IMRegistRes.user_info)
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace Regist
}  // namespace IM

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_IM_2eRegist_2eproto__INCLUDED
