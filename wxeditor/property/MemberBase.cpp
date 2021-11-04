#include "wxeditor/property/MemberBase.hpp"

namespace wxeditor::property {
  /**
     コンストラクタ
  */
  MemberBase::MemberBase(const wxString& name)
    : name_(name), 
      label_(name), 
      show_(true), 
      readOnly_(false)
  {
  }
  /**
   */
  wxString MemberBase::getUniqueName() const {
    return wxString::Format("%s.%p", name_, this);
  }
}
