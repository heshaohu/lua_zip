#ifndef COCOS2DX_COCOS_SCRIPTING_LUA_BINDINGS_LUA_ZIP_H
#define COCOS2DX_COCOS_SCRIPTING_LUA_BINDINGS_LUA_ZIP_H

#ifdef __cplusplus
extern "C" {
#endif
#include "tolua++.h"
#ifdef __cplusplus
}
#endif

/**
 * 李懂要的解压缩
 */
TOLUA_API int register_lua_zip_sample(lua_State* tolua_S);

#endif
