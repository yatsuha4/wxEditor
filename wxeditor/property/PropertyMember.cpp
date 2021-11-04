#include "wxeditor/object/Object.hpp"
#include "wxeditor/property/Property.hpp"
#include "wxeditor/property/PropertyMember.hpp"

namespace wxeditor::property {
  /**
     コンストラクタ
  */
  PropertyMember::PropertyMember(const PropertyPtr& property)
    : super(property->getObject()->getType()), 
      property_(property)
  {
  }
}
