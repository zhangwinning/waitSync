#include <napi.h>
#include "uv.h"

using namespace Napi;

void WaitSync(const Napi::CallbackInfo &info) {
    Env env = info.Env();

    if (!info[0].IsNumber()) {
        const char* message = "Wrong arguments, the argument should be number";
        Napi::TypeError::New(env, message).ThrowAsJavaScriptException();
        return;
    }
    int msec = info[0].As<Napi::Number>().Int32Value();
    uv_sleep(msec);
}

Object Init(Napi::Env env, Napi::Object exports) {
    exports.Set(Napi::String::New(env, "waitSync"), Napi::Function::New(env, WaitSync));
    return exports;
}

NODE_API_MODULE(hello, Init)