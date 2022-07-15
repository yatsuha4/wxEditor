#include "wxeditor/object/Object.hpp"
#include "wxeditor/property/Property.hpp"

namespace wxeditor::property {
  /**
     コンストラクタ
  */
  Property::Property(const ObjectPtr& object)
    : object_(object)
  {
  }
  /**
   */
  const wxString& Property::getName() const {
    return object_->getType();
  }
  /**
     メンバーを追加する
     @param member 追加するメンバー
  */
  void Property::appendMember(const MemberBasePtr& member) {
    members_.push_back(member);
  }
  /**
   */
  void Property::appendMember(const wxString& name, glm::ivec2& value) {
    appendMember(name + ".x", value.x);
    appendMember(name + ".y", value.y);
  }
  /**
   */
  void Property::appendMember(const wxString& name, glm::dvec2& value) {
    appendMember(name + ".x", value.x);
    appendMember(name + ".y", value.y);
  }
  /**
   */
  Member<Choice>& Property::appendChoice(const wxString& name, Choice& value) {
    return appendMember<Choice>(name, value);
  }
}
