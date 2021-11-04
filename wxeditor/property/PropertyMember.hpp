#pragma once

#include "wxeditor/property/MemberBase.hpp"

namespace wxeditor::property {
  /**
     入れ子のメンバー
  */
  class PropertyMember
    : public MemberBase
  {
    using super = MemberBase;

   private:
    PropertyPtr property_;

   public:
    PropertyMember(const PropertyPtr& property);
    ~PropertyMember() override = default;

    WXEDITOR_GETTER(Property, property_);
  };
}
