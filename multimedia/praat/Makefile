# $OpenBSD: Makefile.template,v 1.88 2020/05/15 01:32:48 abieber Exp $

COMMENT =	a program to analyse, synthesize, and manipulate sound data

GH_ACCOUNT =	praat
GH_PROJECT =	praat
GH_TAGNAME =	v6.2.12

## which is better, audio? multimedia?
CATEGORIES =	multimedia

## https://www.praat.org/ is redirected to http://www.fon.hum.uva.nl/praat/
HOMEPAGE =	http://www.fon.hum.uva.nl/praat/

MAINTAINER =	Yozo TODA <yozo@v007.vaio.ne.jp>

# GPL3 (https://www.fon.hum.uva.nl/praat/gpl-3.0.txt)
PERMIT_PACKAGE =	Yes

## when using lang/gcc/11
## MODGCC4_VERSION =	11
## COMPILER =		ports-gcc base-gcc base-clang

WANTLIB += X11 atk-1.0 ${COMPILER_LIBCXX} c cairo cairo-gobject
WANTLIB += gdk-3 gdk_pixbuf-2.0 gio-2.0 glib-2.0 gobject-2.0 gtk-3
WANTLIB += harfbuzz intl m pango-1.0 pangocairo-1.0

LIB_DEPENDS =		x11/gtk+3

## assume clang/clang++ are used (as cc/c++)
pre-build:
	cp -p ${WRKBUILD}/makefiles/makefile.defs.openbsd ${WRKBUILD}/makefile.defs

do-install:
	cp -p ${WRKBUILD}/praat ${PREFIX}/bin/

.include <bsd.port.mk>
