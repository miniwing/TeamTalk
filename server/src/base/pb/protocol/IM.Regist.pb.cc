// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: IM.Regist.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "IM.Regist.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/io/zero_copy_stream_impl_lite.h>
// @@protoc_insertion_point(includes)

namespace IM {
namespace Login {

void protobuf_ShutdownFile_IM_2eRegist_2eproto() {
  delete IMRegistReq::default_instance_;
  delete IMRegistRes::default_instance_;
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
void protobuf_AddDesc_IM_2eRegist_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#else
void protobuf_AddDesc_IM_2eRegist_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#endif
  ::IM::BaseDefine::protobuf_AddDesc_IM_2eBaseDefine_2eproto();
  IMRegistReq::default_instance_ = new IMRegistReq();
  IMRegistRes::default_instance_ = new IMRegistRes();
  IMRegistReq::default_instance_->InitAsDefaultInstance();
  IMRegistRes::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_IM_2eRegist_2eproto);
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_IM_2eRegist_2eproto_once_);
void protobuf_AddDesc_IM_2eRegist_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_IM_2eRegist_2eproto_once_,
                 &protobuf_AddDesc_IM_2eRegist_2eproto_impl);
}
#else
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_IM_2eRegist_2eproto {
  StaticDescriptorInitializer_IM_2eRegist_2eproto() {
    protobuf_AddDesc_IM_2eRegist_2eproto();
  }
} static_descriptor_initializer_IM_2eRegist_2eproto_;
#endif
bool RegistResult_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
      return true;
    default:
      return false;
  }
}


// ===================================================================

#ifndef _MSC_VER
const int IMRegistReq::kUserNameFieldNumber;
const int IMRegistReq::kPasswordFieldNumber;
const int IMRegistReq::kClientVersionFieldNumber;
const int IMRegistReq::kClientTypeFieldNumber;
const int IMRegistReq::kAttachDataFieldNumber;
#endif  // !_MSC_VER

IMRegistReq::IMRegistReq()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:IM.Login.IMRegistReq)
}

void IMRegistReq::InitAsDefaultInstance() {
}

IMRegistReq::IMRegistReq(const IMRegistReq& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:IM.Login.IMRegistReq)
}

void IMRegistReq::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  user_name_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  password_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  client_version_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  client_type_ = 1;
  attach_data_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

IMRegistReq::~IMRegistReq() {
  // @@protoc_insertion_point(destructor:IM.Login.IMRegistReq)
  SharedDtor();
}

void IMRegistReq::SharedDtor() {
  if (user_name_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete user_name_;
  }
  if (password_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete password_;
  }
  if (client_version_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete client_version_;
  }
  if (attach_data_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete attach_data_;
  }
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void IMRegistReq::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const IMRegistReq& IMRegistReq::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_IM_2eRegist_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_IM_2eRegist_2eproto();
#endif
  return *default_instance_;
}

IMRegistReq* IMRegistReq::default_instance_ = NULL;

IMRegistReq* IMRegistReq::New() const {
  return new IMRegistReq;
}

void IMRegistReq::Clear() {
  if (_has_bits_[0 / 32] & 31) {
    if (has_user_name()) {
      if (user_name_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
        user_name_->clear();
      }
    }
    if (has_password()) {
      if (password_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
        password_->clear();
      }
    }
    if (has_client_version()) {
      if (client_version_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
        client_version_->clear();
      }
    }
    client_type_ = 1;
    if (has_attach_data()) {
      if (attach_data_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
        attach_data_->clear();
      }
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->clear();
}

bool IMRegistReq::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  ::google::protobuf::io::StringOutputStream unknown_fields_string(
      mutable_unknown_fields());
  ::google::protobuf::io::CodedOutputStream unknown_fields_stream(
      &unknown_fields_string);
  // @@protoc_insertion_point(parse_start:IM.Login.IMRegistReq)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(16383);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required string user_name = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_user_name()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_password;
        break;
      }

      // required string password = 2;
      case 2: {
        if (tag == 18) {
         parse_password:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_password()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(90)) goto parse_client_version;
        break;
      }

      // optional string client_version = 11;
      case 11: {
        if (tag == 90) {
         parse_client_version:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_client_version()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(96)) goto parse_client_type;
        break;
      }

      // required .IM.BaseDefine.ClientType client_type = 12;
      case 12: {
        if (tag == 96) {
         parse_client_type:
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::IM::BaseDefine::ClientType_IsValid(value)) {
            set_client_type(static_cast< ::IM::BaseDefine::ClientType >(value));
          } else {
            unknown_fields_stream.WriteVarint32(tag);
            unknown_fields_stream.WriteVarint32(value);
          }
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(162)) goto parse_attach_data;
        break;
      }

      // optional bytes attach_data = 20;
      case 20: {
        if (tag == 162) {
         parse_attach_data:
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_attach_data()));
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
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(
            input, tag, &unknown_fields_stream));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:IM.Login.IMRegistReq)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:IM.Login.IMRegistReq)
  return false;
#undef DO_
}

void IMRegistReq::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:IM.Login.IMRegistReq)
  // required string user_name = 1;
  if (has_user_name()) {
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->user_name(), output);
  }

  // required string password = 2;
  if (has_password()) {
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->password(), output);
  }

  // optional string client_version = 11;
  if (has_client_version()) {
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      11, this->client_version(), output);
  }

  // required .IM.BaseDefine.ClientType client_type = 12;
  if (has_client_type()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      12, this->client_type(), output);
  }

  // optional bytes attach_data = 20;
  if (has_attach_data()) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      20, this->attach_data(), output);
  }

  output->WriteRaw(unknown_fields().data(),
                   unknown_fields().size());
  // @@protoc_insertion_point(serialize_end:IM.Login.IMRegistReq)
}

int IMRegistReq::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required string user_name = 1;
    if (has_user_name()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->user_name());
    }

    // required string password = 2;
    if (has_password()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->password());
    }

    // optional string client_version = 11;
    if (has_client_version()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->client_version());
    }

    // required .IM.BaseDefine.ClientType client_type = 12;
    if (has_client_type()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->client_type());
    }

    // optional bytes attach_data = 20;
    if (has_attach_data()) {
      total_size += 2 +
        ::google::protobuf::internal::WireFormatLite::BytesSize(
          this->attach_data());
    }

  }
  total_size += unknown_fields().size();

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void IMRegistReq::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const IMRegistReq*>(&from));
}

void IMRegistReq::MergeFrom(const IMRegistReq& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_user_name()) {
      set_user_name(from.user_name());
    }
    if (from.has_password()) {
      set_password(from.password());
    }
    if (from.has_client_version()) {
      set_client_version(from.client_version());
    }
    if (from.has_client_type()) {
      set_client_type(from.client_type());
    }
    if (from.has_attach_data()) {
      set_attach_data(from.attach_data());
    }
  }
  mutable_unknown_fields()->append(from.unknown_fields());
}

void IMRegistReq::CopyFrom(const IMRegistReq& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool IMRegistReq::IsInitialized() const {
  if ((_has_bits_[0] & 0x0000000b) != 0x0000000b) return false;

  return true;
}

void IMRegistReq::Swap(IMRegistReq* other) {
  if (other != this) {
    std::swap(user_name_, other->user_name_);
    std::swap(password_, other->password_);
    std::swap(client_version_, other->client_version_);
    std::swap(client_type_, other->client_type_);
    std::swap(attach_data_, other->attach_data_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.swap(other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string IMRegistReq::GetTypeName() const {
  return "IM.Login.IMRegistReq";
}


// ===================================================================

#ifndef _MSC_VER
const int IMRegistRes::kServerTimeFieldNumber;
const int IMRegistRes::kUserNameFieldNumber;
const int IMRegistRes::kResultCodeFieldNumber;
const int IMRegistRes::kResultStringFieldNumber;
const int IMRegistRes::kAttachDataFieldNumber;
#endif  // !_MSC_VER

IMRegistRes::IMRegistRes()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:IM.Login.IMRegistRes)
}

void IMRegistRes::InitAsDefaultInstance() {
}

IMRegistRes::IMRegistRes(const IMRegistRes& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:IM.Login.IMRegistRes)
}

void IMRegistRes::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  server_time_ = 0u;
  user_name_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  result_code_ = 0;
  result_string_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  attach_data_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

IMRegistRes::~IMRegistRes() {
  // @@protoc_insertion_point(destructor:IM.Login.IMRegistRes)
  SharedDtor();
}

void IMRegistRes::SharedDtor() {
  if (user_name_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete user_name_;
  }
  if (result_string_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete result_string_;
  }
  if (attach_data_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete attach_data_;
  }
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void IMRegistRes::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const IMRegistRes& IMRegistRes::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_IM_2eRegist_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_IM_2eRegist_2eproto();
#endif
  return *default_instance_;
}

IMRegistRes* IMRegistRes::default_instance_ = NULL;

IMRegistRes* IMRegistRes::New() const {
  return new IMRegistRes;
}

void IMRegistRes::Clear() {
#define OFFSET_OF_FIELD_(f) (reinterpret_cast<char*>(      \
  &reinterpret_cast<IMRegistRes*>(16)->f) - \
   reinterpret_cast<char*>(16))

#define ZR_(first, last) do {                              \
    size_t f = OFFSET_OF_FIELD_(first);                    \
    size_t n = OFFSET_OF_FIELD_(last) - f + sizeof(last);  \
    ::memset(&first, 0, n);                                \
  } while (0)

  if (_has_bits_[0 / 32] & 31) {
    ZR_(server_time_, result_code_);
    if (has_user_name()) {
      if (user_name_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
        user_name_->clear();
      }
    }
    if (has_result_string()) {
      if (result_string_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
        result_string_->clear();
      }
    }
    if (has_attach_data()) {
      if (attach_data_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
        attach_data_->clear();
      }
    }
  }

#undef OFFSET_OF_FIELD_
#undef ZR_

  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->clear();
}

bool IMRegistRes::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  ::google::protobuf::io::StringOutputStream unknown_fields_string(
      mutable_unknown_fields());
  ::google::protobuf::io::CodedOutputStream unknown_fields_stream(
      &unknown_fields_string);
  // @@protoc_insertion_point(parse_start:IM.Login.IMRegistRes)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(16383);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required uint32 server_time = 1;
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &server_time_)));
          set_has_server_time();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_user_name;
        break;
      }

      // required string user_name = 2;
      case 2: {
        if (tag == 18) {
         parse_user_name:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_user_name()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(24)) goto parse_result_code;
        break;
      }

      // required .IM.Login.RegistResult result_code = 3;
      case 3: {
        if (tag == 24) {
         parse_result_code:
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::IM::Login::RegistResult_IsValid(value)) {
            set_result_code(static_cast< ::IM::Login::RegistResult >(value));
          } else {
            unknown_fields_stream.WriteVarint32(tag);
            unknown_fields_stream.WriteVarint32(value);
          }
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(34)) goto parse_result_string;
        break;
      }

      // optional string result_string = 4;
      case 4: {
        if (tag == 34) {
         parse_result_string:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_result_string()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(162)) goto parse_attach_data;
        break;
      }

      // optional bytes attach_data = 20;
      case 20: {
        if (tag == 162) {
         parse_attach_data:
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_attach_data()));
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
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(
            input, tag, &unknown_fields_stream));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:IM.Login.IMRegistRes)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:IM.Login.IMRegistRes)
  return false;
#undef DO_
}

void IMRegistRes::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:IM.Login.IMRegistRes)
  // required uint32 server_time = 1;
  if (has_server_time()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->server_time(), output);
  }

  // required string user_name = 2;
  if (has_user_name()) {
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->user_name(), output);
  }

  // required .IM.Login.RegistResult result_code = 3;
  if (has_result_code()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      3, this->result_code(), output);
  }

  // optional string result_string = 4;
  if (has_result_string()) {
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      4, this->result_string(), output);
  }

  // optional bytes attach_data = 20;
  if (has_attach_data()) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      20, this->attach_data(), output);
  }

  output->WriteRaw(unknown_fields().data(),
                   unknown_fields().size());
  // @@protoc_insertion_point(serialize_end:IM.Login.IMRegistRes)
}

int IMRegistRes::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required uint32 server_time = 1;
    if (has_server_time()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->server_time());
    }

    // required string user_name = 2;
    if (has_user_name()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->user_name());
    }

    // required .IM.Login.RegistResult result_code = 3;
    if (has_result_code()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->result_code());
    }

    // optional string result_string = 4;
    if (has_result_string()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->result_string());
    }

    // optional bytes attach_data = 20;
    if (has_attach_data()) {
      total_size += 2 +
        ::google::protobuf::internal::WireFormatLite::BytesSize(
          this->attach_data());
    }

  }
  total_size += unknown_fields().size();

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void IMRegistRes::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const IMRegistRes*>(&from));
}

void IMRegistRes::MergeFrom(const IMRegistRes& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_server_time()) {
      set_server_time(from.server_time());
    }
    if (from.has_user_name()) {
      set_user_name(from.user_name());
    }
    if (from.has_result_code()) {
      set_result_code(from.result_code());
    }
    if (from.has_result_string()) {
      set_result_string(from.result_string());
    }
    if (from.has_attach_data()) {
      set_attach_data(from.attach_data());
    }
  }
  mutable_unknown_fields()->append(from.unknown_fields());
}

void IMRegistRes::CopyFrom(const IMRegistRes& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool IMRegistRes::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000007) != 0x00000007) return false;

  return true;
}

void IMRegistRes::Swap(IMRegistRes* other) {
  if (other != this) {
    std::swap(server_time_, other->server_time_);
    std::swap(user_name_, other->user_name_);
    std::swap(result_code_, other->result_code_);
    std::swap(result_string_, other->result_string_);
    std::swap(attach_data_, other->attach_data_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.swap(other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string IMRegistRes::GetTypeName() const {
  return "IM.Login.IMRegistRes";
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace Login
}  // namespace IM

// @@protoc_insertion_point(global_scope)
