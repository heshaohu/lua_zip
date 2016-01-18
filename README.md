# lua_zip
gunzip for cocos2d-lua 3.x 

## how to use

- add lua_zip to Classes 

- 修改cocos2d unzip.h 文件， 把 #include "CPlatformDefine.h" 改成  #include "platform/CCPlatformDefine.h "

- 注册 register_lua_zip_sample(L);

- 在lua 中 调用 unzipfile(zipfile,path)