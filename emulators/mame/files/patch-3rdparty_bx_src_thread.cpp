--- 3rdparty/bx/src/thread.cpp.orig	2018-02-28 00:59:06.000000000 +0900
+++ 3rdparty/bx/src/thread.cpp	2018-03-12 03:10:07.329595000 +0900
@@ -11,6 +11,7 @@
 	|| BX_PLATFORM_IOS     \
 	|| BX_PLATFORM_OSX     \
 	|| BX_PLATFORM_PS4     \
+	|| BX_PLATFORM_BSD     \
 	|| BX_PLATFORM_RPI
 #	include <pthread.h>
 #	if defined(__FreeBSD__)
