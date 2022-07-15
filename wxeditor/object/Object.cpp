#include "wxeditor/object/Object.hpp"
#include "wxeditor/property/Property.hpp"

namespace wxeditor::object {
  /**
     コンストラクタ
     @param type 型名
  */
  Object::Object(const wxString& type)
    : type_(type)
  {
  }
  /**
     コピーコンストラクタ
     @param src コピー元
  */
  Object::Object(const Object& src)
    : type_(src.type_)
  {
    onCreate();
  }
  /**
   */
  PropertyPtr Object::generateProperty() {
    auto property = std::make_shared<Property>(shared_from_this());
    property->appendMember("Id", id_).setShow(false);
    return property;
  }
  /**
     新規IDを生成する
     @return 新規ID
  */
  wxString Object::GenerateId() {
    /*
    uuid_t id;
    uuid_generate(id);
    uuid_string_t strId;
    uuid_unparse_upper(id, strId);
    */
    return wxString();
  }
  /**
     新規に生成されたときの処理
  */
  void Object::onCreate() {
    id_ = GenerateId();
  }
}
