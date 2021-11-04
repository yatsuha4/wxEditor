#include "wxeditor/property/Choice.hpp"

namespace wxeditor::property {
  /**
   */
  Choice::Choice()
    : Choice(nullptr)
  {}
  /**
     コンストラクタ
  */
  Choice::Choice(const char** items)
    : items_(items), 
      index_(0)
  {}
  /**
   */
  Choice& Choice::operator=(const Choice& src) {
    index_ = src.index_;
    return *this;
  }
  /**
   */
  void Choice::setItem(const wxString& item) {
    for(size_t i = 0; items_[i]; i++) {
      if(item == items_[i]) {
        index_ = i;
        return;
      }
    }
    wxLogWarning("no such value, '%s'", item);
    index_ = 0;
  }
}
