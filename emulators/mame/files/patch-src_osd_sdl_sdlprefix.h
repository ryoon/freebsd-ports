--- src/osd/sdl/sdlprefix.h.orig	2018-03-12 03:07:05.292313000 +0900
+++ src/osd/sdl/sdlprefix.h	2018-03-12 03:07:30.038877000 +0900
@@ -48,6 +48,7 @@
 #define NO_AFFINITY_NP 1
 #elif defined(__DragonFly__)
 #define SDLMAME_DRAGONFLY 1
+#define NO_AFFINITY_NP 1
 #elif defined(__OpenBSD__)
 #define SDLMAME_OPENBSD 1
 #elif defined(__NetBSD__)
