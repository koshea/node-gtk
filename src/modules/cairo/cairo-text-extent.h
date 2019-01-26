
#pragma once

#include <nan.h>
#include <node.h>
#include <girepository.h>
#include <glib.h>
#include <cairo.h>

namespace GNodeJS {

namespace Cairo {


class TextExtent: public Nan::ObjectWrap {
  public:
    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target);
    static NAN_METHOD(New);
    static NAN_GETTER(GetXBearing);
    static NAN_GETTER(GetYBearing);
    static NAN_GETTER(GetWidth);
    static NAN_GETTER(GetHeight);
    static NAN_GETTER(GetXAdvance);
    static NAN_GETTER(GetYAdvance);
    static NAN_SETTER(SetXBearing);
    static NAN_SETTER(SetYBearing);
    static NAN_SETTER(SetWidth);
    static NAN_SETTER(SetHeight);
    static NAN_SETTER(SetXAdvance);
    static NAN_SETTER(SetYAdvance);

    TextExtent(cairo_text_extents_t* data);
    ~TextExtent();

    cairo_text_extents_t* _data;
};


}; // Cairo

}; // GNodeJS
