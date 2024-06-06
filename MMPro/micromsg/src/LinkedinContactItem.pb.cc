// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: LinkedinContactItem.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "LinkedinContactItem.pb.h"

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

namespace MMPro {
namespace micromsg {
class LinkedinContactItemDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<LinkedinContactItem> {
} _LinkedinContactItem_default_instance_;

namespace protobuf_LinkedinContactItem_2eproto {


namespace {

::google::protobuf::Metadata file_level_metadata[1];

}  // namespace

PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::ParseTableField
    const TableStruct::entries[] = {
  {0, 0, 0, ::google::protobuf::internal::kInvalidMask, 0, 0},
};

PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::AuxillaryParseTableField
    const TableStruct::aux[] = {
  ::google::protobuf::internal::AuxillaryParseTableField(),
};
PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::ParseTable const
    TableStruct::schema[] = {
  { NULL, NULL, 0, -1, -1, false },
};

const ::google::protobuf::uint32 TableStruct::offsets[] = {
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkedinContactItem, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkedinContactItem, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkedinContactItem, _linkedinname_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkedinContactItem, _linkedinmemberid_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkedinContactItem, _linkedinpublicurl_),
  0,
  1,
  2,
};

static const ::google::protobuf::internal::MigrationSchema schemas[] = {
  { 0, 8, sizeof(LinkedinContactItem)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&_LinkedinContactItem_default_instance_),
};

namespace {

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "LinkedinContactItem.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 1);
}

}  // namespace

void TableStruct::Shutdown() {
  _LinkedinContactItem_default_instance_.Shutdown();
  delete file_level_metadata[0].reflection;
}

void TableStruct::InitDefaultsImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
  _LinkedinContactItem_default_instance_.DefaultConstruct();
}

void InitDefaults() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &TableStruct::InitDefaultsImpl);
}
void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] = {
      "\n\031LinkedinContactItem.proto\022\016MMPro.micro"
      "msg\"c\n\023LinkedinContactItem\022\025\n\r_LinkedinN"
      "ame\030\001 \001(\t\022\031\n\021_LinkedinMemberID\030\002 \001(\t\022\032\n\022"
      "_LinkedinPublicUrl\030\003 \001(\t"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 144);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "LinkedinContactItem.proto", &protobuf_RegisterTypes);
  ::google::protobuf::internal::OnShutdown(&TableStruct::Shutdown);
}

void AddDescriptors() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;

}  // namespace protobuf_LinkedinContactItem_2eproto


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int LinkedinContactItem::kLinkedinNameFieldNumber;
const int LinkedinContactItem::kLinkedinMemberIDFieldNumber;
const int LinkedinContactItem::kLinkedinPublicUrlFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

LinkedinContactItem::LinkedinContactItem()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_LinkedinContactItem_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:MMPro.micromsg.LinkedinContactItem)
}
LinkedinContactItem::LinkedinContactItem(const LinkedinContactItem& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  _linkedinname_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has__linkedinname()) {
    _linkedinname_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from._linkedinname_);
  }
  _linkedinmemberid_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has__linkedinmemberid()) {
    _linkedinmemberid_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from._linkedinmemberid_);
  }
  _linkedinpublicurl_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has__linkedinpublicurl()) {
    _linkedinpublicurl_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from._linkedinpublicurl_);
  }
  // @@protoc_insertion_point(copy_constructor:MMPro.micromsg.LinkedinContactItem)
}

void LinkedinContactItem::SharedCtor() {
  _cached_size_ = 0;
  _linkedinname_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _linkedinmemberid_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _linkedinpublicurl_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

LinkedinContactItem::~LinkedinContactItem() {
  // @@protoc_insertion_point(destructor:MMPro.micromsg.LinkedinContactItem)
  SharedDtor();
}

void LinkedinContactItem::SharedDtor() {
  _linkedinname_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _linkedinmemberid_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _linkedinpublicurl_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void LinkedinContactItem::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* LinkedinContactItem::descriptor() {
  protobuf_LinkedinContactItem_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_LinkedinContactItem_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const LinkedinContactItem& LinkedinContactItem::default_instance() {
  protobuf_LinkedinContactItem_2eproto::InitDefaults();
  return *internal_default_instance();
}

LinkedinContactItem* LinkedinContactItem::New(::google::protobuf::Arena* arena) const {
  LinkedinContactItem* n = new LinkedinContactItem;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void LinkedinContactItem::Clear() {
// @@protoc_insertion_point(message_clear_start:MMPro.micromsg.LinkedinContactItem)
  if (_has_bits_[0 / 32] & 7u) {
    if (has__linkedinname()) {
      GOOGLE_DCHECK(!_linkedinname_.IsDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited()));
      (*_linkedinname_.UnsafeRawStringPointer())->clear();
    }
    if (has__linkedinmemberid()) {
      GOOGLE_DCHECK(!_linkedinmemberid_.IsDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited()));
      (*_linkedinmemberid_.UnsafeRawStringPointer())->clear();
    }
    if (has__linkedinpublicurl()) {
      GOOGLE_DCHECK(!_linkedinpublicurl_.IsDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited()));
      (*_linkedinpublicurl_.UnsafeRawStringPointer())->clear();
    }
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool LinkedinContactItem::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:MMPro.micromsg.LinkedinContactItem)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string _LinkedinName = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable__linkedinname()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->_linkedinname().data(), this->_linkedinname().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "MMPro.micromsg.LinkedinContactItem._LinkedinName");
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional string _LinkedinMemberID = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable__linkedinmemberid()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->_linkedinmemberid().data(), this->_linkedinmemberid().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "MMPro.micromsg.LinkedinContactItem._LinkedinMemberID");
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional string _LinkedinPublicUrl = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable__linkedinpublicurl()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->_linkedinpublicurl().data(), this->_linkedinpublicurl().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "MMPro.micromsg.LinkedinContactItem._LinkedinPublicUrl");
        } else {
          goto handle_unusual;
        }
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
  // @@protoc_insertion_point(parse_success:MMPro.micromsg.LinkedinContactItem)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:MMPro.micromsg.LinkedinContactItem)
  return false;
#undef DO_
}

void LinkedinContactItem::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:MMPro.micromsg.LinkedinContactItem)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional string _LinkedinName = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->_linkedinname().data(), this->_linkedinname().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "MMPro.micromsg.LinkedinContactItem._LinkedinName");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->_linkedinname(), output);
  }

  // optional string _LinkedinMemberID = 2;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->_linkedinmemberid().data(), this->_linkedinmemberid().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "MMPro.micromsg.LinkedinContactItem._LinkedinMemberID");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->_linkedinmemberid(), output);
  }

  // optional string _LinkedinPublicUrl = 3;
  if (cached_has_bits & 0x00000004u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->_linkedinpublicurl().data(), this->_linkedinpublicurl().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "MMPro.micromsg.LinkedinContactItem._LinkedinPublicUrl");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      3, this->_linkedinpublicurl(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:MMPro.micromsg.LinkedinContactItem)
}

::google::protobuf::uint8* LinkedinContactItem::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:MMPro.micromsg.LinkedinContactItem)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional string _LinkedinName = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->_linkedinname().data(), this->_linkedinname().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "MMPro.micromsg.LinkedinContactItem._LinkedinName");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->_linkedinname(), target);
  }

  // optional string _LinkedinMemberID = 2;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->_linkedinmemberid().data(), this->_linkedinmemberid().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "MMPro.micromsg.LinkedinContactItem._LinkedinMemberID");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->_linkedinmemberid(), target);
  }

  // optional string _LinkedinPublicUrl = 3;
  if (cached_has_bits & 0x00000004u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->_linkedinpublicurl().data(), this->_linkedinpublicurl().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "MMPro.micromsg.LinkedinContactItem._LinkedinPublicUrl");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->_linkedinpublicurl(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:MMPro.micromsg.LinkedinContactItem)
  return target;
}

size_t LinkedinContactItem::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:MMPro.micromsg.LinkedinContactItem)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  if (_has_bits_[0 / 32] & 7u) {
    // optional string _LinkedinName = 1;
    if (has__linkedinname()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->_linkedinname());
    }

    // optional string _LinkedinMemberID = 2;
    if (has__linkedinmemberid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->_linkedinmemberid());
    }

    // optional string _LinkedinPublicUrl = 3;
    if (has__linkedinpublicurl()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->_linkedinpublicurl());
    }

  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void LinkedinContactItem::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:MMPro.micromsg.LinkedinContactItem)
  GOOGLE_DCHECK_NE(&from, this);
  const LinkedinContactItem* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const LinkedinContactItem>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:MMPro.micromsg.LinkedinContactItem)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:MMPro.micromsg.LinkedinContactItem)
    MergeFrom(*source);
  }
}

void LinkedinContactItem::MergeFrom(const LinkedinContactItem& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:MMPro.micromsg.LinkedinContactItem)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 7u) {
    if (cached_has_bits & 0x00000001u) {
      set_has__linkedinname();
      _linkedinname_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from._linkedinname_);
    }
    if (cached_has_bits & 0x00000002u) {
      set_has__linkedinmemberid();
      _linkedinmemberid_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from._linkedinmemberid_);
    }
    if (cached_has_bits & 0x00000004u) {
      set_has__linkedinpublicurl();
      _linkedinpublicurl_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from._linkedinpublicurl_);
    }
  }
}

void LinkedinContactItem::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:MMPro.micromsg.LinkedinContactItem)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void LinkedinContactItem::CopyFrom(const LinkedinContactItem& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:MMPro.micromsg.LinkedinContactItem)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LinkedinContactItem::IsInitialized() const {
  return true;
}

void LinkedinContactItem::Swap(LinkedinContactItem* other) {
  if (other == this) return;
  InternalSwap(other);
}
void LinkedinContactItem::InternalSwap(LinkedinContactItem* other) {
  _linkedinname_.Swap(&other->_linkedinname_);
  _linkedinmemberid_.Swap(&other->_linkedinmemberid_);
  _linkedinpublicurl_.Swap(&other->_linkedinpublicurl_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata LinkedinContactItem::GetMetadata() const {
  protobuf_LinkedinContactItem_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_LinkedinContactItem_2eproto::file_level_metadata[kIndexInFileMessages];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// LinkedinContactItem

// optional string _LinkedinName = 1;
bool LinkedinContactItem::has__linkedinname() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void LinkedinContactItem::set_has__linkedinname() {
  _has_bits_[0] |= 0x00000001u;
}
void LinkedinContactItem::clear_has__linkedinname() {
  _has_bits_[0] &= ~0x00000001u;
}
void LinkedinContactItem::clear__linkedinname() {
  _linkedinname_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has__linkedinname();
}
const ::std::string& LinkedinContactItem::_linkedinname() const {
  // @@protoc_insertion_point(field_get:MMPro.micromsg.LinkedinContactItem._LinkedinName)
  return _linkedinname_.GetNoArena();
}
void LinkedinContactItem::set__linkedinname(const ::std::string& value) {
  set_has__linkedinname();
  _linkedinname_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:MMPro.micromsg.LinkedinContactItem._LinkedinName)
}
#if LANG_CXX11
void LinkedinContactItem::set__linkedinname(::std::string&& value) {
  set_has__linkedinname();
  _linkedinname_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:MMPro.micromsg.LinkedinContactItem._LinkedinName)
}
#endif
void LinkedinContactItem::set__linkedinname(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has__linkedinname();
  _linkedinname_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:MMPro.micromsg.LinkedinContactItem._LinkedinName)
}
void LinkedinContactItem::set__linkedinname(const char* value, size_t size) {
  set_has__linkedinname();
  _linkedinname_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:MMPro.micromsg.LinkedinContactItem._LinkedinName)
}
::std::string* LinkedinContactItem::mutable__linkedinname() {
  set_has__linkedinname();
  // @@protoc_insertion_point(field_mutable:MMPro.micromsg.LinkedinContactItem._LinkedinName)
  return _linkedinname_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* LinkedinContactItem::release__linkedinname() {
  // @@protoc_insertion_point(field_release:MMPro.micromsg.LinkedinContactItem._LinkedinName)
  clear_has__linkedinname();
  return _linkedinname_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void LinkedinContactItem::set_allocated__linkedinname(::std::string* _linkedinname) {
  if (_linkedinname != NULL) {
    set_has__linkedinname();
  } else {
    clear_has__linkedinname();
  }
  _linkedinname_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), _linkedinname);
  // @@protoc_insertion_point(field_set_allocated:MMPro.micromsg.LinkedinContactItem._LinkedinName)
}

// optional string _LinkedinMemberID = 2;
bool LinkedinContactItem::has__linkedinmemberid() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void LinkedinContactItem::set_has__linkedinmemberid() {
  _has_bits_[0] |= 0x00000002u;
}
void LinkedinContactItem::clear_has__linkedinmemberid() {
  _has_bits_[0] &= ~0x00000002u;
}
void LinkedinContactItem::clear__linkedinmemberid() {
  _linkedinmemberid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has__linkedinmemberid();
}
const ::std::string& LinkedinContactItem::_linkedinmemberid() const {
  // @@protoc_insertion_point(field_get:MMPro.micromsg.LinkedinContactItem._LinkedinMemberID)
  return _linkedinmemberid_.GetNoArena();
}
void LinkedinContactItem::set__linkedinmemberid(const ::std::string& value) {
  set_has__linkedinmemberid();
  _linkedinmemberid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:MMPro.micromsg.LinkedinContactItem._LinkedinMemberID)
}
#if LANG_CXX11
void LinkedinContactItem::set__linkedinmemberid(::std::string&& value) {
  set_has__linkedinmemberid();
  _linkedinmemberid_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:MMPro.micromsg.LinkedinContactItem._LinkedinMemberID)
}
#endif
void LinkedinContactItem::set__linkedinmemberid(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has__linkedinmemberid();
  _linkedinmemberid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:MMPro.micromsg.LinkedinContactItem._LinkedinMemberID)
}
void LinkedinContactItem::set__linkedinmemberid(const char* value, size_t size) {
  set_has__linkedinmemberid();
  _linkedinmemberid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:MMPro.micromsg.LinkedinContactItem._LinkedinMemberID)
}
::std::string* LinkedinContactItem::mutable__linkedinmemberid() {
  set_has__linkedinmemberid();
  // @@protoc_insertion_point(field_mutable:MMPro.micromsg.LinkedinContactItem._LinkedinMemberID)
  return _linkedinmemberid_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* LinkedinContactItem::release__linkedinmemberid() {
  // @@protoc_insertion_point(field_release:MMPro.micromsg.LinkedinContactItem._LinkedinMemberID)
  clear_has__linkedinmemberid();
  return _linkedinmemberid_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void LinkedinContactItem::set_allocated__linkedinmemberid(::std::string* _linkedinmemberid) {
  if (_linkedinmemberid != NULL) {
    set_has__linkedinmemberid();
  } else {
    clear_has__linkedinmemberid();
  }
  _linkedinmemberid_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), _linkedinmemberid);
  // @@protoc_insertion_point(field_set_allocated:MMPro.micromsg.LinkedinContactItem._LinkedinMemberID)
}

// optional string _LinkedinPublicUrl = 3;
bool LinkedinContactItem::has__linkedinpublicurl() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
void LinkedinContactItem::set_has__linkedinpublicurl() {
  _has_bits_[0] |= 0x00000004u;
}
void LinkedinContactItem::clear_has__linkedinpublicurl() {
  _has_bits_[0] &= ~0x00000004u;
}
void LinkedinContactItem::clear__linkedinpublicurl() {
  _linkedinpublicurl_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has__linkedinpublicurl();
}
const ::std::string& LinkedinContactItem::_linkedinpublicurl() const {
  // @@protoc_insertion_point(field_get:MMPro.micromsg.LinkedinContactItem._LinkedinPublicUrl)
  return _linkedinpublicurl_.GetNoArena();
}
void LinkedinContactItem::set__linkedinpublicurl(const ::std::string& value) {
  set_has__linkedinpublicurl();
  _linkedinpublicurl_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:MMPro.micromsg.LinkedinContactItem._LinkedinPublicUrl)
}
#if LANG_CXX11
void LinkedinContactItem::set__linkedinpublicurl(::std::string&& value) {
  set_has__linkedinpublicurl();
  _linkedinpublicurl_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:MMPro.micromsg.LinkedinContactItem._LinkedinPublicUrl)
}
#endif
void LinkedinContactItem::set__linkedinpublicurl(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has__linkedinpublicurl();
  _linkedinpublicurl_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:MMPro.micromsg.LinkedinContactItem._LinkedinPublicUrl)
}
void LinkedinContactItem::set__linkedinpublicurl(const char* value, size_t size) {
  set_has__linkedinpublicurl();
  _linkedinpublicurl_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:MMPro.micromsg.LinkedinContactItem._LinkedinPublicUrl)
}
::std::string* LinkedinContactItem::mutable__linkedinpublicurl() {
  set_has__linkedinpublicurl();
  // @@protoc_insertion_point(field_mutable:MMPro.micromsg.LinkedinContactItem._LinkedinPublicUrl)
  return _linkedinpublicurl_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* LinkedinContactItem::release__linkedinpublicurl() {
  // @@protoc_insertion_point(field_release:MMPro.micromsg.LinkedinContactItem._LinkedinPublicUrl)
  clear_has__linkedinpublicurl();
  return _linkedinpublicurl_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void LinkedinContactItem::set_allocated__linkedinpublicurl(::std::string* _linkedinpublicurl) {
  if (_linkedinpublicurl != NULL) {
    set_has__linkedinpublicurl();
  } else {
    clear_has__linkedinpublicurl();
  }
  _linkedinpublicurl_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), _linkedinpublicurl);
  // @@protoc_insertion_point(field_set_allocated:MMPro.micromsg.LinkedinContactItem._LinkedinPublicUrl)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace micromsg
}  // namespace MMPro

// @@protoc_insertion_point(global_scope)
