--- src/osd/eminline.h.orig	2018-03-12 03:02:46.561400000 +0900
+++ src/osd/eminline.h	2018-03-12 03:03:03.988448000 +0900
@@ -21,7 +21,7 @@
 
 #if defined(__GNUC__)
 
-#if defined(__i386__) || defined(__x86_64__)
+#if defined(__i386__) || defined(__x86_64__) || defined(__amd64__)
 #include "eigccx86.h"
 #elif defined(__ppc__) || defined (__PPC__) || defined(__ppc64__) || defined(__PPC64__)
 #include "eigccppc.h"
