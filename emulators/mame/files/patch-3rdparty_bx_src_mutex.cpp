--- 3rdparty/bx/src/mutex.cpp.orig	2018-02-28 00:59:06.000000000 +0900
+++ 3rdparty/bx/src/mutex.cpp	2018-03-12 03:09:57.943353000 +0900
@@ -13,6 +13,7 @@
 	|| BX_PLATFORM_IOS     \
 	|| BX_PLATFORM_OSX     \
 	|| BX_PLATFORM_PS4     \
+	|| BX_PLATFORM_BSD     \
 	|| BX_PLATFORM_RPI
 #	include <pthread.h>
 #elif  BX_PLATFORM_WINDOWS \
