--- scripts/toolchain.lua.orig	2018-03-12 08:39:00.497654000 +0900
+++ scripts/toolchain.lua	2018-03-12 08:41:52.263428000 +0900
@@ -23,6 +23,7 @@
 		{ "android-x64",   "Android - x64"          },
 		{ "asmjs",         "Emscripten/asm.js"      },
 		{ "freebsd",       "FreeBSD"                },
+		{ "freebsd-clang", "FreeBSD (Clang)"        },
 		{ "linux-gcc",     "Linux (GCC compiler)"   },
 		{ "linux-clang",   "Linux (Clang compiler)" },
 		{ "ios-arm",       "iOS - ARM"              },
@@ -168,6 +169,10 @@
 			location (_buildDir .. "projects/" .. _subDir .. "/".. _ACTION .. "-freebsd")
 		end
 
+		if "freebsd-clang" == _OPTIONS["gcc"] then
+			location (_buildDir .. "projects/" .. _subDir .. "/".. _ACTION .. "-freebsd-clang")
+		end
+
 		if "netbsd" == _OPTIONS["gcc"] then
 			location (_buildDir .. "projects/" .. _subDir .. "/".. _ACTION .. "-netbsd")
 		end
