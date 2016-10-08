#ifndef __PluginFyberJS_h__
#define __PluginFyberJS_h__

#include "jsapi.h"
#include "jsfriendapi.h"


extern JSClass  *jsb_sdkbox_PluginFyber_class;
extern JSObject *jsb_sdkbox_PluginFyber_prototype;

#if MOZJS_MAJOR_VERSION >= 33
void js_register_PluginFyberJS_PluginFyber(JSContext *cx, JS::HandleObject global);
void register_all_PluginFyberJS(JSContext* cx, JS::HandleObject obj);
#else
void js_register_PluginFyberJS_PluginFyber(JSContext *cx, JSObject* global);
void register_all_PluginFyberJS(JSContext* cx, JSObject* obj);
#endif

bool js_PluginFyberJS_PluginFyber_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_PluginFyberJS_PluginFyber_finalize(JSContext *cx, JSObject *obj);
#if defined(MOZJS_MAJOR_VERSION)
bool js_PluginFyberJS_PluginFyber_setZipcode(JSContext *cx, uint32_t argc, jsval *vp);
#elif defined(JS_VERSION)
JSBool js_PluginFyberJS_PluginFyber_setZipcode(JSContext *cx, uint32_t argc, jsval *vp);
#endif
#if defined(MOZJS_MAJOR_VERSION)
bool js_PluginFyberJS_PluginFyber_showInterstitial(JSContext *cx, uint32_t argc, jsval *vp);
#elif defined(JS_VERSION)
JSBool js_PluginFyberJS_PluginFyber_showInterstitial(JSContext *cx, uint32_t argc, jsval *vp);
#endif
#if defined(MOZJS_MAJOR_VERSION)
bool js_PluginFyberJS_PluginFyber_setNumberOfSessions(JSContext *cx, uint32_t argc, jsval *vp);
#elif defined(JS_VERSION)
JSBool js_PluginFyberJS_PluginFyber_setNumberOfSessions(JSContext *cx, uint32_t argc, jsval *vp);
#endif
#if defined(MOZJS_MAJOR_VERSION)
bool js_PluginFyberJS_PluginFyber_setNumberOfChildren(JSContext *cx, uint32_t argc, jsval *vp);
#elif defined(JS_VERSION)
JSBool js_PluginFyberJS_PluginFyber_setNumberOfChildren(JSContext *cx, uint32_t argc, jsval *vp);
#endif
#if defined(MOZJS_MAJOR_VERSION)
bool js_PluginFyberJS_PluginFyber_setLocation(JSContext *cx, uint32_t argc, jsval *vp);
#elif defined(JS_VERSION)
JSBool js_PluginFyberJS_PluginFyber_setLocation(JSContext *cx, uint32_t argc, jsval *vp);
#endif
#if defined(MOZJS_MAJOR_VERSION)
bool js_PluginFyberJS_PluginFyber_setIap(JSContext *cx, uint32_t argc, jsval *vp);
#elif defined(JS_VERSION)
JSBool js_PluginFyberJS_PluginFyber_setIap(JSContext *cx, uint32_t argc, jsval *vp);
#endif
#if defined(MOZJS_MAJOR_VERSION)
bool js_PluginFyberJS_PluginFyber_setVersion(JSContext *cx, uint32_t argc, jsval *vp);
#elif defined(JS_VERSION)
JSBool js_PluginFyberJS_PluginFyber_setVersion(JSContext *cx, uint32_t argc, jsval *vp);
#endif
#if defined(MOZJS_MAJOR_VERSION)
bool js_PluginFyberJS_PluginFyber_requestInterstitial(JSContext *cx, uint32_t argc, jsval *vp);
#elif defined(JS_VERSION)
JSBool js_PluginFyberJS_PluginFyber_requestInterstitial(JSContext *cx, uint32_t argc, jsval *vp);
#endif
#if defined(MOZJS_MAJOR_VERSION)
bool js_PluginFyberJS_PluginFyber_showOfferWall(JSContext *cx, uint32_t argc, jsval *vp);
#elif defined(JS_VERSION)
JSBool js_PluginFyberJS_PluginFyber_showOfferWall(JSContext *cx, uint32_t argc, jsval *vp);
#endif
#if defined(MOZJS_MAJOR_VERSION)
bool js_PluginFyberJS_PluginFyber_requestOffers(JSContext *cx, uint32_t argc, jsval *vp);
#elif defined(JS_VERSION)
JSBool js_PluginFyberJS_PluginFyber_requestOffers(JSContext *cx, uint32_t argc, jsval *vp);
#endif
#if defined(MOZJS_MAJOR_VERSION)
bool js_PluginFyberJS_PluginFyber_init(JSContext *cx, uint32_t argc, jsval *vp);
#elif defined(JS_VERSION)
JSBool js_PluginFyberJS_PluginFyber_init(JSContext *cx, uint32_t argc, jsval *vp);
#endif
#if defined(MOZJS_MAJOR_VERSION)
bool js_PluginFyberJS_PluginFyber_setDevice(JSContext *cx, uint32_t argc, jsval *vp);
#elif defined(JS_VERSION)
JSBool js_PluginFyberJS_PluginFyber_setDevice(JSContext *cx, uint32_t argc, jsval *vp);
#endif
#if defined(MOZJS_MAJOR_VERSION)
bool js_PluginFyberJS_PluginFyber_setLastSession(JSContext *cx, uint32_t argc, jsval *vp);
#elif defined(JS_VERSION)
JSBool js_PluginFyberJS_PluginFyber_setLastSession(JSContext *cx, uint32_t argc, jsval *vp);
#endif
#if defined(MOZJS_MAJOR_VERSION)
bool js_PluginFyberJS_PluginFyber_setAnnualHouseholdIncome(JSContext *cx, uint32_t argc, jsval *vp);
#elif defined(JS_VERSION)
JSBool js_PluginFyberJS_PluginFyber_setAnnualHouseholdIncome(JSContext *cx, uint32_t argc, jsval *vp);
#endif
#if defined(MOZJS_MAJOR_VERSION)
bool js_PluginFyberJS_PluginFyber_setMaritalStatus(JSContext *cx, uint32_t argc, jsval *vp);
#elif defined(JS_VERSION)
JSBool js_PluginFyberJS_PluginFyber_setMaritalStatus(JSContext *cx, uint32_t argc, jsval *vp);
#endif
#if defined(MOZJS_MAJOR_VERSION)
bool js_PluginFyberJS_PluginFyber_showOffers(JSContext *cx, uint32_t argc, jsval *vp);
#elif defined(JS_VERSION)
JSBool js_PluginFyberJS_PluginFyber_showOffers(JSContext *cx, uint32_t argc, jsval *vp);
#endif
#if defined(MOZJS_MAJOR_VERSION)
bool js_PluginFyberJS_PluginFyber_cleanLocation(JSContext *cx, uint32_t argc, jsval *vp);
#elif defined(JS_VERSION)
JSBool js_PluginFyberJS_PluginFyber_cleanLocation(JSContext *cx, uint32_t argc, jsval *vp);
#endif
#if defined(MOZJS_MAJOR_VERSION)
bool js_PluginFyberJS_PluginFyber_setSexualOrientation(JSContext *cx, uint32_t argc, jsval *vp);
#elif defined(JS_VERSION)
JSBool js_PluginFyberJS_PluginFyber_setSexualOrientation(JSContext *cx, uint32_t argc, jsval *vp);
#endif
#if defined(MOZJS_MAJOR_VERSION)
bool js_PluginFyberJS_PluginFyber_setGender(JSContext *cx, uint32_t argc, jsval *vp);
#elif defined(JS_VERSION)
JSBool js_PluginFyberJS_PluginFyber_setGender(JSContext *cx, uint32_t argc, jsval *vp);
#endif
#if defined(MOZJS_MAJOR_VERSION)
bool js_PluginFyberJS_PluginFyber_setBirthdate(JSContext *cx, uint32_t argc, jsval *vp);
#elif defined(JS_VERSION)
JSBool js_PluginFyberJS_PluginFyber_setBirthdate(JSContext *cx, uint32_t argc, jsval *vp);
#endif
#if defined(MOZJS_MAJOR_VERSION)
bool js_PluginFyberJS_PluginFyber_setAge(JSContext *cx, uint32_t argc, jsval *vp);
#elif defined(JS_VERSION)
JSBool js_PluginFyberJS_PluginFyber_setAge(JSContext *cx, uint32_t argc, jsval *vp);
#endif
#if defined(MOZJS_MAJOR_VERSION)
bool js_PluginFyberJS_PluginFyber_setConnectionType(JSContext *cx, uint32_t argc, jsval *vp);
#elif defined(JS_VERSION)
JSBool js_PluginFyberJS_PluginFyber_setConnectionType(JSContext *cx, uint32_t argc, jsval *vp);
#endif
#if defined(MOZJS_MAJOR_VERSION)
bool js_PluginFyberJS_PluginFyber_addCustomParameters(JSContext *cx, uint32_t argc, jsval *vp);
#elif defined(JS_VERSION)
JSBool js_PluginFyberJS_PluginFyber_addCustomParameters(JSContext *cx, uint32_t argc, jsval *vp);
#endif
#if defined(MOZJS_MAJOR_VERSION)
bool js_PluginFyberJS_PluginFyber_setInterests(JSContext *cx, uint32_t argc, jsval *vp);
#elif defined(JS_VERSION)
JSBool js_PluginFyberJS_PluginFyber_setInterests(JSContext *cx, uint32_t argc, jsval *vp);
#endif
#if defined(MOZJS_MAJOR_VERSION)
bool js_PluginFyberJS_PluginFyber_requestDeltaOfCoins(JSContext *cx, uint32_t argc, jsval *vp);
#elif defined(JS_VERSION)
JSBool js_PluginFyberJS_PluginFyber_requestDeltaOfCoins(JSContext *cx, uint32_t argc, jsval *vp);
#endif
#if defined(MOZJS_MAJOR_VERSION)
bool js_PluginFyberJS_PluginFyber_setPsTime(JSContext *cx, uint32_t argc, jsval *vp);
#elif defined(JS_VERSION)
JSBool js_PluginFyberJS_PluginFyber_setPsTime(JSContext *cx, uint32_t argc, jsval *vp);
#endif
#if defined(MOZJS_MAJOR_VERSION)
bool js_PluginFyberJS_PluginFyber_cleanCustomParameters(JSContext *cx, uint32_t argc, jsval *vp);
#elif defined(JS_VERSION)
JSBool js_PluginFyberJS_PluginFyber_cleanCustomParameters(JSContext *cx, uint32_t argc, jsval *vp);
#endif
#if defined(MOZJS_MAJOR_VERSION)
bool js_PluginFyberJS_PluginFyber_setIapAmount(JSContext *cx, uint32_t argc, jsval *vp);
#elif defined(JS_VERSION)
JSBool js_PluginFyberJS_PluginFyber_setIapAmount(JSContext *cx, uint32_t argc, jsval *vp);
#endif
#if defined(MOZJS_MAJOR_VERSION)
bool js_PluginFyberJS_PluginFyber_setEthnicity(JSContext *cx, uint32_t argc, jsval *vp);
#elif defined(JS_VERSION)
JSBool js_PluginFyberJS_PluginFyber_setEthnicity(JSContext *cx, uint32_t argc, jsval *vp);
#endif
#if defined(MOZJS_MAJOR_VERSION)
bool js_PluginFyberJS_PluginFyber_setEducation(JSContext *cx, uint32_t argc, jsval *vp);
#elif defined(JS_VERSION)
JSBool js_PluginFyberJS_PluginFyber_setEducation(JSContext *cx, uint32_t argc, jsval *vp);
#endif
#endif

