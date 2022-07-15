#pragma once

namespace wxeditor::object {
  /**
     オブジェクト基底クラス
  */
  class Object
    : public std::enable_shared_from_this<Object>
  {
   private:
    wxString type_;
    wxString id_;

   public:
    Object(const wxString& type);
    Object(const Object& src);
    virtual ~Object() = default;

    WXEDITOR_GETTER(Type, type_);
    WXEDITOR_ACCESSOR(Id, id_);

    virtual PropertyPtr generateProperty();
    virtual void onUpdateProperty() {}

    template<class T, class... Args>
    static std::shared_ptr<T> Create(Args&&... args) {
      auto object = std::make_shared<T>(args...);
      object->onCreate();
      return object;
    }

    static wxString GenerateId();

   protected:
    virtual void onCreate();
  };
}
