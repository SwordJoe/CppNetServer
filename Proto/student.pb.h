// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: student.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_student_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_student_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3017000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3017000 < PROTOBUF_MIN_PROTOC_VERSION
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
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_student_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_student_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_student_2eproto;
class Student;
struct StudentDefaultTypeInternal;
extern StudentDefaultTypeInternal _Student_default_instance_;
PROTOBUF_NAMESPACE_OPEN
template<> ::Student* Arena::CreateMaybeMessage<::Student>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

// ===================================================================

class Student final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:Student) */ {
 public:
  inline Student() : Student(nullptr) {}
  ~Student() override;
  explicit constexpr Student(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  Student(const Student& from);
  Student(Student&& from) noexcept
    : Student() {
    *this = ::std::move(from);
  }

  inline Student& operator=(const Student& from) {
    CopyFrom(from);
    return *this;
  }
  inline Student& operator=(Student&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const Student& default_instance() {
    return *internal_default_instance();
  }
  static inline const Student* internal_default_instance() {
    return reinterpret_cast<const Student*>(
               &_Student_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Student& a, Student& b) {
    a.Swap(&b);
  }
  inline void Swap(Student* other) {
    if (other == this) return;
    if (GetOwningArena() == other->GetOwningArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Student* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Student* New() const final {
    return new Student();
  }

  Student* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Student>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Student& from);
  void MergeFrom(const Student& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Student* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "Student";
  }
  protected:
  explicit Student(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kNameFieldNumber = 2,
    kIdFieldNumber = 1,
    kChineseFieldNumber = 3,
    kMathFieldNumber = 4,
    kEnglishFieldNumber = 5,
  };
  // string name = 2;
  void clear_name();
  const std::string& name() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_name(ArgT0&& arg0, ArgT... args);
  std::string* mutable_name();
  PROTOBUF_FUTURE_MUST_USE_RESULT std::string* release_name();
  void set_allocated_name(std::string* name);
  private:
  const std::string& _internal_name() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_name(const std::string& value);
  std::string* _internal_mutable_name();
  public:

  // int32 id = 1;
  void clear_id();
  ::PROTOBUF_NAMESPACE_ID::int32 id() const;
  void set_id(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_id() const;
  void _internal_set_id(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // int32 chinese = 3;
  void clear_chinese();
  ::PROTOBUF_NAMESPACE_ID::int32 chinese() const;
  void set_chinese(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_chinese() const;
  void _internal_set_chinese(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // int32 math = 4;
  void clear_math();
  ::PROTOBUF_NAMESPACE_ID::int32 math() const;
  void set_math(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_math() const;
  void _internal_set_math(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // int32 english = 5;
  void clear_english();
  ::PROTOBUF_NAMESPACE_ID::int32 english() const;
  void set_english(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_english() const;
  void _internal_set_english(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // @@protoc_insertion_point(class_scope:Student)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr name_;
  ::PROTOBUF_NAMESPACE_ID::int32 id_;
  ::PROTOBUF_NAMESPACE_ID::int32 chinese_;
  ::PROTOBUF_NAMESPACE_ID::int32 math_;
  ::PROTOBUF_NAMESPACE_ID::int32 english_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_student_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Student

// int32 id = 1;
inline void Student::clear_id() {
  id_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Student::_internal_id() const {
  return id_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Student::id() const {
  // @@protoc_insertion_point(field_get:Student.id)
  return _internal_id();
}
inline void Student::_internal_set_id(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  id_ = value;
}
inline void Student::set_id(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_id(value);
  // @@protoc_insertion_point(field_set:Student.id)
}

// string name = 2;
inline void Student::clear_name() {
  name_.ClearToEmpty();
}
inline const std::string& Student::name() const {
  // @@protoc_insertion_point(field_get:Student.name)
  return _internal_name();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void Student::set_name(ArgT0&& arg0, ArgT... args) {
 
 name_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:Student.name)
}
inline std::string* Student::mutable_name() {
  // @@protoc_insertion_point(field_mutable:Student.name)
  return _internal_mutable_name();
}
inline const std::string& Student::_internal_name() const {
  return name_.Get();
}
inline void Student::_internal_set_name(const std::string& value) {
  
  name_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArenaForAllocation());
}
inline std::string* Student::_internal_mutable_name() {
  
  return name_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
}
inline std::string* Student::release_name() {
  // @@protoc_insertion_point(field_release:Student.name)
  return name_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaForAllocation());
}
inline void Student::set_allocated_name(std::string* name) {
  if (name != nullptr) {
    
  } else {
    
  }
  name_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), name,
      GetArenaForAllocation());
  // @@protoc_insertion_point(field_set_allocated:Student.name)
}

// int32 chinese = 3;
inline void Student::clear_chinese() {
  chinese_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Student::_internal_chinese() const {
  return chinese_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Student::chinese() const {
  // @@protoc_insertion_point(field_get:Student.chinese)
  return _internal_chinese();
}
inline void Student::_internal_set_chinese(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  chinese_ = value;
}
inline void Student::set_chinese(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_chinese(value);
  // @@protoc_insertion_point(field_set:Student.chinese)
}

// int32 math = 4;
inline void Student::clear_math() {
  math_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Student::_internal_math() const {
  return math_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Student::math() const {
  // @@protoc_insertion_point(field_get:Student.math)
  return _internal_math();
}
inline void Student::_internal_set_math(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  math_ = value;
}
inline void Student::set_math(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_math(value);
  // @@protoc_insertion_point(field_set:Student.math)
}

// int32 english = 5;
inline void Student::clear_english() {
  english_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Student::_internal_english() const {
  return english_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Student::english() const {
  // @@protoc_insertion_point(field_get:Student.english)
  return _internal_english();
}
inline void Student::_internal_set_english(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  english_ = value;
}
inline void Student::set_english(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_english(value);
  // @@protoc_insertion_point(field_set:Student.english)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_student_2eproto