#if defined(__ENVIRONMENT_MAC_OS_X_VERSION_MIN_REQUIRED__)
#define WXEDITOR_PLATFORM "mac"
#define WXEDITOR_PLATFORM_MAC

#elif defined(_WIN64)
#define WXEDITOR_PLATFORM "windows"
#define WXEDITOR_PLATFORM_WINDOWS
#define STRICT

#else
#error "not support platform"
#endif
/**
   wxWidgets
*/
#if defined(WXEDITOR_PLATFORM_MAC)
#define _FILE_OFFSET_BITS 64
#define __WXMAC__
#define __WXOSX__
#define __WXOSX_COCOA__
#endif

#include <wx/wx.h>
/**
   GLM
*/
#include <glm/glm.hpp>
/**
   C++
*/
/**
   マクロ定義
*/
#define WXEDITOR_DECLARE_CLASS(klass)                           \
  class klass;                                                  \
  using klass##Ptr = std::shared_ptr<klass>;                    \
  using Const##klass##Ptr = std::shared_ptr<const klass>;

#define WXEDITOR_SETTER(name, var)                                      \
  auto set##name(const decltype(var)& value) -> decltype(*this)& {      \
    var = value;                                                        \
    return *this;                                                       \
  }                                                                     \
  decltype(var)& get##name() {                                          \
    return var;                                                         \
  }
#define WXEDITOR_GETTER(name, var)              \
  const decltype(var)& get##name() const {      \
    return var;                                 \
  }
#define WXEDITOR_IS_GETTER(name, var)           \
  bool is##name() const {                       \
    return var;                                 \
  }
#define WXEDITOR_CAN_GETTER(name, var)          \
  bool can##name() const {                      \
    return var;                                 \
  }
#define WXEDITOR_ACCESSOR(name, var)            \
  WXEDITOR_SETTER(name, var);                   \
  WXEDITOR_GETTER(name, var);
#define WXEDITOR_IS_ACCESSOR(name, var)         \
  WXEDITOR_SETTER(name, var);                   \
  WXEDITOR_IS_GETTER(name, var);
#define WXEDITOR_CAN_ACCESSOR(name, var)        \
  WXEDITOR_SETTER(name, var);                   \
  WXEDITOR_CAN_GETTER(name, var);
/**
   クラス宣言
*/
namespace wxeditor {
  namespace object {
    WXEDITOR_DECLARE_CLASS(Object);
  }
  using namespace object;

  namespace property {
    WXEDITOR_DECLARE_CLASS(Choice);
    WXEDITOR_DECLARE_CLASS(MemberBase);
    WXEDITOR_DECLARE_CLASS(Property);
    WXEDITOR_DECLARE_CLASS(PropertyMember);
  }
  using namespace property;
}
