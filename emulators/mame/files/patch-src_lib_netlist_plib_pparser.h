--- src/lib/netlist/plib/pparser.h.orig	2018-03-12 03:06:23.053773000 +0900
+++ src/lib/netlist/plib/pparser.h	2018-03-12 03:06:40.281886000 +0900
@@ -118,8 +118,8 @@ protected:
 private:
 	void skipeol();
 
-	pstring::code_t getc();
-	void ungetc(pstring::code_t c);
+	pstring::code_t mame_getc();
+	void mame_ungetc(pstring::code_t c);
 
 	bool eof() { return m_strm.eof(); }
 
