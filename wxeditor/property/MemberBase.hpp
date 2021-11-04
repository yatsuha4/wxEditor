#pragma once

namespace wxeditor::property {
  /**
     メンバー基底クラス
  */
  class MemberBase {
   private:
    wxString name_;
    wxString label_;
    bool show_;
    bool readOnly_;

   public:
    MemberBase(const wxString& name);
    virtual ~MemberBase() = default;

    WXEDITOR_GETTER(Name, name_);
    WXEDITOR_ACCESSOR(Label, label_);
    WXEDITOR_IS_ACCESSOR(Show, show_);
    WXEDITOR_IS_ACCESSOR(ReadOnly, readOnly_);

    wxString getUniqueName() const;
  };
}
