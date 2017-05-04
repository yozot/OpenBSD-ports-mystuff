--- src/Makefile.inc.orig	Wed Oct 16 22:29:52 2013
+++ src/Makefile.inc	Mon Nov  4 15:01:20 2013
@@ -1,7 +1,7 @@
 # Unix configuration Makefile for Moscow ML          -*- mode: makefile -*-
 
 # Where to install stuff
-PREFIX=/usr/local
+PREFIX=${TRUEPREFIX}
 
 # BINDIR contains true executable files, such as scripts
 # LIBDIR contains bytecode files (such as mosmlcmp and library units), and .dll/.so for dynlibs. 
@@ -25,9 +25,9 @@
 VERSION=2.10
 
 # Various utility programs
-INSTALL_PROGRAM=cp
-INSTALL_SCRIPT=cp
-INSTALL_DATA=cp
+INSTALL_PROGRAM=${INSTALL_PROGRAM}
+INSTALL_SCRIPT=${INSTALL_SCRIPT}
+INSTALL_DATA=${INSTALL_DATA}
 PERL=perl
 
 BASELIBS=-lm
@@ -84,6 +84,19 @@
 	EXE=.exe
 	LD=$(CC)
 	DYNLD=$(CC) -shared
+endif
+ifeq ($(UNAME_S),OpenBSD)
+        CC=gcc -DANSI
+        CPP=/usr/bin/cpp -P -traditional -Dunix -Umsdos
+        STRIP=/usr/bin/strip
+        ADDRUNCFLAGS=-fPIC
+        ADDDYNLIBCFLAGS=-fPIC
+        ADDRUNLIBS=-lc
+        LD=gcc -export-dynamic -Wl,-rpath,$(LIBDIR)
+        DYNLD=gcc -shared
+        INSTALL_PROGRAM=${BSD_INSTALL_PROGRAM}
+        INSTALL_SCRIPT=${BSD_INSTALL_SCRIPT}
+        INSTALL_DATA=${BSD_INSTALL_DATA}
 endif
 ifeq ($(UNAME_S),Custom) # Your configuration here
 error:
