#pragma once

namespace wxeditor::property {
  /**
   */
  class Choice {
   private:
    const char** items_;
    size_t index_;

   public:
    Choice();
    Choice(const char** items);
    Choice(const Choice& src) = default;
    virtual ~Choice() = default;

    Choice& operator=(const Choice& src);

    WXEDITOR_GETTER(Items, items_);
    WXEDITOR_ACCESSOR(Index, index_);

    void setItem(const wxString& item);
  };
}
