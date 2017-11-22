// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: hand.proto

#ifndef PROTOBUF_hand_2eproto__INCLUDED
#define PROTOBUF_hand_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3004000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3004000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/message_lite.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
// @@protoc_insertion_point(includes)
namespace atheer {
class Finger;
class FingerDefaultTypeInternal;
extern FingerDefaultTypeInternal _Finger_default_instance_;
class Hand;
class HandDefaultTypeInternal;
extern HandDefaultTypeInternal _Hand_default_instance_;
class HandEvent;
class HandEventDefaultTypeInternal;
extern HandEventDefaultTypeInternal _HandEvent_default_instance_;
class Point3D;
class Point3DDefaultTypeInternal;
extern Point3DDefaultTypeInternal _Point3D_default_instance_;
}  // namespace atheer

namespace atheer {

namespace protobuf_hand_2eproto {
// Internal implementation detail -- do not call these.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[];
  static const ::google::protobuf::uint32 offsets[];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static void InitDefaultsImpl();
};
void AddDescriptors();
void InitDefaults();
}  // namespace protobuf_hand_2eproto

// ===================================================================

class HandEvent : public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:atheer.HandEvent) */ {
 public:
  HandEvent();
  virtual ~HandEvent();

  HandEvent(const HandEvent& from);

  inline HandEvent& operator=(const HandEvent& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  HandEvent(HandEvent&& from) noexcept
    : HandEvent() {
    *this = ::std::move(from);
  }

  inline HandEvent& operator=(HandEvent&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const HandEvent& default_instance();

  static inline const HandEvent* internal_default_instance() {
    return reinterpret_cast<const HandEvent*>(
               &_HandEvent_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(HandEvent* other);
  friend void swap(HandEvent& a, HandEvent& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline HandEvent* New() const PROTOBUF_FINAL { return New(NULL); }

  HandEvent* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)
    PROTOBUF_FINAL;
  void CopyFrom(const HandEvent& from);
  void MergeFrom(const HandEvent& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  void DiscardUnknownFields();
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(HandEvent* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::std::string GetTypeName() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated .atheer.Hand hands = 1;
  int hands_size() const;
  void clear_hands();
  static const int kHandsFieldNumber = 1;
  const ::atheer::Hand& hands(int index) const;
  ::atheer::Hand* mutable_hands(int index);
  ::atheer::Hand* add_hands();
  ::google::protobuf::RepeatedPtrField< ::atheer::Hand >*
      mutable_hands();
  const ::google::protobuf::RepeatedPtrField< ::atheer::Hand >&
      hands() const;

  // @@protoc_insertion_point(class_scope:atheer.HandEvent)
 private:

  ::google::protobuf::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::atheer::Hand > hands_;
  mutable int _cached_size_;
  friend struct protobuf_hand_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class Hand : public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:atheer.Hand) */ {
 public:
  Hand();
  virtual ~Hand();

  Hand(const Hand& from);

  inline Hand& operator=(const Hand& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Hand(Hand&& from) noexcept
    : Hand() {
    *this = ::std::move(from);
  }

  inline Hand& operator=(Hand&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const Hand& default_instance();

  static inline const Hand* internal_default_instance() {
    return reinterpret_cast<const Hand*>(
               &_Hand_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    1;

  void Swap(Hand* other);
  friend void swap(Hand& a, Hand& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Hand* New() const PROTOBUF_FINAL { return New(NULL); }

  Hand* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)
    PROTOBUF_FINAL;
  void CopyFrom(const Hand& from);
  void MergeFrom(const Hand& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  void DiscardUnknownFields();
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(Hand* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::std::string GetTypeName() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated .atheer.Finger fingers = 2;
  int fingers_size() const;
  void clear_fingers();
  static const int kFingersFieldNumber = 2;
  const ::atheer::Finger& fingers(int index) const;
  ::atheer::Finger* mutable_fingers(int index);
  ::atheer::Finger* add_fingers();
  ::google::protobuf::RepeatedPtrField< ::atheer::Finger >*
      mutable_fingers();
  const ::google::protobuf::RepeatedPtrField< ::atheer::Finger >&
      fingers() const;

  // @@protoc_insertion_point(class_scope:atheer.Hand)
 private:

  ::google::protobuf::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::atheer::Finger > fingers_;
  mutable int _cached_size_;
  friend struct protobuf_hand_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class Finger : public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:atheer.Finger) */ {
 public:
  Finger();
  virtual ~Finger();

  Finger(const Finger& from);

  inline Finger& operator=(const Finger& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Finger(Finger&& from) noexcept
    : Finger() {
    *this = ::std::move(from);
  }

  inline Finger& operator=(Finger&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const Finger& default_instance();

  static inline const Finger* internal_default_instance() {
    return reinterpret_cast<const Finger*>(
               &_Finger_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    2;

  void Swap(Finger* other);
  friend void swap(Finger& a, Finger& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Finger* New() const PROTOBUF_FINAL { return New(NULL); }

  Finger* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)
    PROTOBUF_FINAL;
  void CopyFrom(const Finger& from);
  void MergeFrom(const Finger& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  void DiscardUnknownFields();
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(Finger* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::std::string GetTypeName() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // .atheer.Point3D tip = 2;
  bool has_tip() const;
  void clear_tip();
  static const int kTipFieldNumber = 2;
  const ::atheer::Point3D& tip() const;
  ::atheer::Point3D* mutable_tip();
  ::atheer::Point3D* release_tip();
  void set_allocated_tip(::atheer::Point3D* tip);

  // int32 id = 1;
  void clear_id();
  static const int kIdFieldNumber = 1;
  ::google::protobuf::int32 id() const;
  void set_id(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:atheer.Finger)
 private:

  ::google::protobuf::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::atheer::Point3D* tip_;
  ::google::protobuf::int32 id_;
  mutable int _cached_size_;
  friend struct protobuf_hand_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class Point3D : public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:atheer.Point3D) */ {
 public:
  Point3D();
  virtual ~Point3D();

  Point3D(const Point3D& from);

  inline Point3D& operator=(const Point3D& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Point3D(Point3D&& from) noexcept
    : Point3D() {
    *this = ::std::move(from);
  }

  inline Point3D& operator=(Point3D&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const Point3D& default_instance();

  static inline const Point3D* internal_default_instance() {
    return reinterpret_cast<const Point3D*>(
               &_Point3D_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    3;

  void Swap(Point3D* other);
  friend void swap(Point3D& a, Point3D& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Point3D* New() const PROTOBUF_FINAL { return New(NULL); }

  Point3D* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)
    PROTOBUF_FINAL;
  void CopyFrom(const Point3D& from);
  void MergeFrom(const Point3D& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  void DiscardUnknownFields();
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(Point3D* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::std::string GetTypeName() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // float x = 1;
  void clear_x();
  static const int kXFieldNumber = 1;
  float x() const;
  void set_x(float value);

  // float y = 2;
  void clear_y();
  static const int kYFieldNumber = 2;
  float y() const;
  void set_y(float value);

  // float z = 3;
  void clear_z();
  static const int kZFieldNumber = 3;
  float z() const;
  void set_z(float value);

  // @@protoc_insertion_point(class_scope:atheer.Point3D)
 private:

  ::google::protobuf::internal::InternalMetadataWithArenaLite _internal_metadata_;
  float x_;
  float y_;
  float z_;
  mutable int _cached_size_;
  friend struct protobuf_hand_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// HandEvent

// repeated .atheer.Hand hands = 1;
inline int HandEvent::hands_size() const {
  return hands_.size();
}
inline void HandEvent::clear_hands() {
  hands_.Clear();
}
inline const ::atheer::Hand& HandEvent::hands(int index) const {
  // @@protoc_insertion_point(field_get:atheer.HandEvent.hands)
  return hands_.Get(index);
}
inline ::atheer::Hand* HandEvent::mutable_hands(int index) {
  // @@protoc_insertion_point(field_mutable:atheer.HandEvent.hands)
  return hands_.Mutable(index);
}
inline ::atheer::Hand* HandEvent::add_hands() {
  // @@protoc_insertion_point(field_add:atheer.HandEvent.hands)
  return hands_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::atheer::Hand >*
HandEvent::mutable_hands() {
  // @@protoc_insertion_point(field_mutable_list:atheer.HandEvent.hands)
  return &hands_;
}
inline const ::google::protobuf::RepeatedPtrField< ::atheer::Hand >&
HandEvent::hands() const {
  // @@protoc_insertion_point(field_list:atheer.HandEvent.hands)
  return hands_;
}

// -------------------------------------------------------------------

// Hand

// repeated .atheer.Finger fingers = 2;
inline int Hand::fingers_size() const {
  return fingers_.size();
}
inline void Hand::clear_fingers() {
  fingers_.Clear();
}
inline const ::atheer::Finger& Hand::fingers(int index) const {
  // @@protoc_insertion_point(field_get:atheer.Hand.fingers)
  return fingers_.Get(index);
}
inline ::atheer::Finger* Hand::mutable_fingers(int index) {
  // @@protoc_insertion_point(field_mutable:atheer.Hand.fingers)
  return fingers_.Mutable(index);
}
inline ::atheer::Finger* Hand::add_fingers() {
  // @@protoc_insertion_point(field_add:atheer.Hand.fingers)
  return fingers_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::atheer::Finger >*
Hand::mutable_fingers() {
  // @@protoc_insertion_point(field_mutable_list:atheer.Hand.fingers)
  return &fingers_;
}
inline const ::google::protobuf::RepeatedPtrField< ::atheer::Finger >&
Hand::fingers() const {
  // @@protoc_insertion_point(field_list:atheer.Hand.fingers)
  return fingers_;
}

// -------------------------------------------------------------------

// Finger

// int32 id = 1;
inline void Finger::clear_id() {
  id_ = 0;
}
inline ::google::protobuf::int32 Finger::id() const {
  // @@protoc_insertion_point(field_get:atheer.Finger.id)
  return id_;
}
inline void Finger::set_id(::google::protobuf::int32 value) {
  
  id_ = value;
  // @@protoc_insertion_point(field_set:atheer.Finger.id)
}

// .atheer.Point3D tip = 2;
inline bool Finger::has_tip() const {
  return this != internal_default_instance() && tip_ != NULL;
}
inline void Finger::clear_tip() {
  if (GetArenaNoVirtual() == NULL && tip_ != NULL) delete tip_;
  tip_ = NULL;
}
inline const ::atheer::Point3D& Finger::tip() const {
  const ::atheer::Point3D* p = tip_;
  // @@protoc_insertion_point(field_get:atheer.Finger.tip)
  return p != NULL ? *p : *reinterpret_cast<const ::atheer::Point3D*>(
      &::atheer::_Point3D_default_instance_);
}
inline ::atheer::Point3D* Finger::mutable_tip() {
  
  if (tip_ == NULL) {
    tip_ = new ::atheer::Point3D;
  }
  // @@protoc_insertion_point(field_mutable:atheer.Finger.tip)
  return tip_;
}
inline ::atheer::Point3D* Finger::release_tip() {
  // @@protoc_insertion_point(field_release:atheer.Finger.tip)
  
  ::atheer::Point3D* temp = tip_;
  tip_ = NULL;
  return temp;
}
inline void Finger::set_allocated_tip(::atheer::Point3D* tip) {
  delete tip_;
  tip_ = tip;
  if (tip) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:atheer.Finger.tip)
}

// -------------------------------------------------------------------

// Point3D

// float x = 1;
inline void Point3D::clear_x() {
  x_ = 0;
}
inline float Point3D::x() const {
  // @@protoc_insertion_point(field_get:atheer.Point3D.x)
  return x_;
}
inline void Point3D::set_x(float value) {
  
  x_ = value;
  // @@protoc_insertion_point(field_set:atheer.Point3D.x)
}

// float y = 2;
inline void Point3D::clear_y() {
  y_ = 0;
}
inline float Point3D::y() const {
  // @@protoc_insertion_point(field_get:atheer.Point3D.y)
  return y_;
}
inline void Point3D::set_y(float value) {
  
  y_ = value;
  // @@protoc_insertion_point(field_set:atheer.Point3D.y)
}

// float z = 3;
inline void Point3D::clear_z() {
  z_ = 0;
}
inline float Point3D::z() const {
  // @@protoc_insertion_point(field_get:atheer.Point3D.z)
  return z_;
}
inline void Point3D::set_z(float value) {
  
  z_ = value;
  // @@protoc_insertion_point(field_set:atheer.Point3D.z)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


}  // namespace atheer

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_hand_2eproto__INCLUDED
