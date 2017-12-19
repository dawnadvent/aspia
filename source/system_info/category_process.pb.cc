// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: category_process.proto

#include "category_process.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/io/zero_copy_stream_impl_lite.h>
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)
namespace aspia {
namespace proto {
class Processes_ItemDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<Processes_Item>
      _instance;
} _Processes_Item_default_instance_;
class ProcessesDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<Processes>
      _instance;
} _Processes_default_instance_;
}  // namespace proto
}  // namespace aspia
namespace protobuf_category_5fprocess_2eproto {
void InitDefaultsProcesses_ItemImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  ::google::protobuf::internal::InitProtobufDefaultsForceUnique();
#else
  ::google::protobuf::internal::InitProtobufDefaults();
#endif  // GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  {
    void* ptr = &::aspia::proto::_Processes_Item_default_instance_;
    new (ptr) ::aspia::proto::Processes_Item();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::aspia::proto::Processes_Item::InitAsDefaultInstance();
}

void InitDefaultsProcesses_Item() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &InitDefaultsProcesses_ItemImpl);
}

void InitDefaultsProcessesImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  ::google::protobuf::internal::InitProtobufDefaultsForceUnique();
#else
  ::google::protobuf::internal::InitProtobufDefaults();
#endif  // GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  protobuf_category_5fprocess_2eproto::InitDefaultsProcesses_Item();
  {
    void* ptr = &::aspia::proto::_Processes_default_instance_;
    new (ptr) ::aspia::proto::Processes();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::aspia::proto::Processes::InitAsDefaultInstance();
}

void InitDefaultsProcesses() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &InitDefaultsProcessesImpl);
}

}  // namespace protobuf_category_5fprocess_2eproto
namespace aspia {
namespace proto {

// ===================================================================

void Processes_Item::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Processes_Item::kProcessNameFieldNumber;
const int Processes_Item::kFilePathFieldNumber;
const int Processes_Item::kUsedMemoryFieldNumber;
const int Processes_Item::kUsedSwapFieldNumber;
const int Processes_Item::kDescriptionFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Processes_Item::Processes_Item()
  : ::google::protobuf::MessageLite(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    ::protobuf_category_5fprocess_2eproto::InitDefaultsProcesses_Item();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:aspia.proto.Processes.Item)
}
Processes_Item::Processes_Item(const Processes_Item& from)
  : ::google::protobuf::MessageLite(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  process_name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.process_name().size() > 0) {
    process_name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.process_name_);
  }
  file_path_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.file_path().size() > 0) {
    file_path_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.file_path_);
  }
  description_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.description().size() > 0) {
    description_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.description_);
  }
  ::memcpy(&used_memory_, &from.used_memory_,
    static_cast<size_t>(reinterpret_cast<char*>(&used_swap_) -
    reinterpret_cast<char*>(&used_memory_)) + sizeof(used_swap_));
  // @@protoc_insertion_point(copy_constructor:aspia.proto.Processes.Item)
}

void Processes_Item::SharedCtor() {
  process_name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  file_path_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  description_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&used_memory_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&used_swap_) -
      reinterpret_cast<char*>(&used_memory_)) + sizeof(used_swap_));
  _cached_size_ = 0;
}

Processes_Item::~Processes_Item() {
  // @@protoc_insertion_point(destructor:aspia.proto.Processes.Item)
  SharedDtor();
}

void Processes_Item::SharedDtor() {
  process_name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  file_path_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  description_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void Processes_Item::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const Processes_Item& Processes_Item::default_instance() {
  ::protobuf_category_5fprocess_2eproto::InitDefaultsProcesses_Item();
  return *internal_default_instance();
}

Processes_Item* Processes_Item::New(::google::protobuf::Arena* arena) const {
  Processes_Item* n = new Processes_Item;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Processes_Item::Clear() {
// @@protoc_insertion_point(message_clear_start:aspia.proto.Processes.Item)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  process_name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  file_path_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  description_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&used_memory_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&used_swap_) -
      reinterpret_cast<char*>(&used_memory_)) + sizeof(used_swap_));
  _internal_metadata_.Clear();
}

bool Processes_Item::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  ::google::protobuf::internal::LiteUnknownFieldSetter unknown_fields_setter(
      &_internal_metadata_);
  ::google::protobuf::io::StringOutputStream unknown_fields_output(
      unknown_fields_setter.buffer());
  ::google::protobuf::io::CodedOutputStream unknown_fields_stream(
      &unknown_fields_output, false);
  // @@protoc_insertion_point(parse_start:aspia.proto.Processes.Item)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string process_name = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_process_name()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->process_name().data(), static_cast<int>(this->process_name().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "aspia.proto.Processes.Item.process_name"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string file_path = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_file_path()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->file_path().data(), static_cast<int>(this->file_path().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "aspia.proto.Processes.Item.file_path"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint64 used_memory = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(24u /* 24 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &used_memory_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint64 used_swap = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(32u /* 32 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &used_swap_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string description = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(42u /* 42 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_description()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->description().data(), static_cast<int>(this->description().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "aspia.proto.Processes.Item.description"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(
            input, tag, &unknown_fields_stream));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:aspia.proto.Processes.Item)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:aspia.proto.Processes.Item)
  return false;
#undef DO_
}

void Processes_Item::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:aspia.proto.Processes.Item)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string process_name = 1;
  if (this->process_name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->process_name().data(), static_cast<int>(this->process_name().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "aspia.proto.Processes.Item.process_name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->process_name(), output);
  }

  // string file_path = 2;
  if (this->file_path().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->file_path().data(), static_cast<int>(this->file_path().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "aspia.proto.Processes.Item.file_path");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->file_path(), output);
  }

  // uint64 used_memory = 3;
  if (this->used_memory() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(3, this->used_memory(), output);
  }

  // uint64 used_swap = 4;
  if (this->used_swap() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(4, this->used_swap(), output);
  }

  // string description = 5;
  if (this->description().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->description().data(), static_cast<int>(this->description().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "aspia.proto.Processes.Item.description");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      5, this->description(), output);
  }

  output->WriteRaw((::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()).data(),
                   static_cast<int>((::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()).size()));
  // @@protoc_insertion_point(serialize_end:aspia.proto.Processes.Item)
}

size_t Processes_Item::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:aspia.proto.Processes.Item)
  size_t total_size = 0;

  total_size += (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()).size();

  // string process_name = 1;
  if (this->process_name().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->process_name());
  }

  // string file_path = 2;
  if (this->file_path().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->file_path());
  }

  // string description = 5;
  if (this->description().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->description());
  }

  // uint64 used_memory = 3;
  if (this->used_memory() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt64Size(
        this->used_memory());
  }

  // uint64 used_swap = 4;
  if (this->used_swap() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt64Size(
        this->used_swap());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Processes_Item::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const Processes_Item*>(&from));
}

void Processes_Item::MergeFrom(const Processes_Item& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:aspia.proto.Processes.Item)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.process_name().size() > 0) {

    process_name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.process_name_);
  }
  if (from.file_path().size() > 0) {

    file_path_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.file_path_);
  }
  if (from.description().size() > 0) {

    description_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.description_);
  }
  if (from.used_memory() != 0) {
    set_used_memory(from.used_memory());
  }
  if (from.used_swap() != 0) {
    set_used_swap(from.used_swap());
  }
}

void Processes_Item::CopyFrom(const Processes_Item& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:aspia.proto.Processes.Item)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Processes_Item::IsInitialized() const {
  return true;
}

void Processes_Item::Swap(Processes_Item* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Processes_Item::InternalSwap(Processes_Item* other) {
  using std::swap;
  process_name_.Swap(&other->process_name_);
  file_path_.Swap(&other->file_path_);
  description_.Swap(&other->description_);
  swap(used_memory_, other->used_memory_);
  swap(used_swap_, other->used_swap_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::std::string Processes_Item::GetTypeName() const {
  return "aspia.proto.Processes.Item";
}


// ===================================================================

void Processes::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Processes::kItemFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Processes::Processes()
  : ::google::protobuf::MessageLite(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    ::protobuf_category_5fprocess_2eproto::InitDefaultsProcesses();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:aspia.proto.Processes)
}
Processes::Processes(const Processes& from)
  : ::google::protobuf::MessageLite(),
      _internal_metadata_(NULL),
      item_(from.item_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:aspia.proto.Processes)
}

void Processes::SharedCtor() {
  _cached_size_ = 0;
}

Processes::~Processes() {
  // @@protoc_insertion_point(destructor:aspia.proto.Processes)
  SharedDtor();
}

void Processes::SharedDtor() {
}

void Processes::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const Processes& Processes::default_instance() {
  ::protobuf_category_5fprocess_2eproto::InitDefaultsProcesses();
  return *internal_default_instance();
}

Processes* Processes::New(::google::protobuf::Arena* arena) const {
  Processes* n = new Processes;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Processes::Clear() {
// @@protoc_insertion_point(message_clear_start:aspia.proto.Processes)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  item_.Clear();
  _internal_metadata_.Clear();
}

bool Processes::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  ::google::protobuf::internal::LiteUnknownFieldSetter unknown_fields_setter(
      &_internal_metadata_);
  ::google::protobuf::io::StringOutputStream unknown_fields_output(
      unknown_fields_setter.buffer());
  ::google::protobuf::io::CodedOutputStream unknown_fields_stream(
      &unknown_fields_output, false);
  // @@protoc_insertion_point(parse_start:aspia.proto.Processes)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .aspia.proto.Processes.Item item = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(input, add_item()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(
            input, tag, &unknown_fields_stream));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:aspia.proto.Processes)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:aspia.proto.Processes)
  return false;
#undef DO_
}

void Processes::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:aspia.proto.Processes)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .aspia.proto.Processes.Item item = 1;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->item_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      1, this->item(static_cast<int>(i)), output);
  }

  output->WriteRaw((::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()).data(),
                   static_cast<int>((::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()).size()));
  // @@protoc_insertion_point(serialize_end:aspia.proto.Processes)
}

size_t Processes::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:aspia.proto.Processes)
  size_t total_size = 0;

  total_size += (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()).size();

  // repeated .aspia.proto.Processes.Item item = 1;
  {
    unsigned int count = static_cast<unsigned int>(this->item_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          this->item(static_cast<int>(i)));
    }
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Processes::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const Processes*>(&from));
}

void Processes::MergeFrom(const Processes& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:aspia.proto.Processes)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  item_.MergeFrom(from.item_);
}

void Processes::CopyFrom(const Processes& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:aspia.proto.Processes)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Processes::IsInitialized() const {
  return true;
}

void Processes::Swap(Processes* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Processes::InternalSwap(Processes* other) {
  using std::swap;
  item_.InternalSwap(&other->item_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::std::string Processes::GetTypeName() const {
  return "aspia.proto.Processes";
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace proto
}  // namespace aspia

// @@protoc_insertion_point(global_scope)