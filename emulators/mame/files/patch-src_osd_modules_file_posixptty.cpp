--- src/osd/modules/file/posixptty.cpp.orig	2018-03-12 11:11:09.336893000 +0900
+++ src/osd/modules/file/posixptty.cpp	2018-03-12 11:11:23.544568000 +0900
@@ -19,7 +19,7 @@
 #include <unistd.h>
 #include <stdlib.h>
 
-#if defined(__FreeBSD_kernel__) || defined(__DragonFly__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <termios.h>
 #include <libutil.h>
 #elif defined(__NetBSD__) || defined(__OpenBSD__) || defined(__APPLE__) || defined(__ANDROID__)
