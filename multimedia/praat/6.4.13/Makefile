COMMENT =	a program to analyse, synthesize, and manipulate sound data

DIST_TUPLE +=	github praat praat v6.4.13 .

## which is better, audio? multimedia?
CATEGORIES =	multimedia

## http://www.praat.org/ is redirected to https://www.fon.hum.uva.nl/praat/
## https://www.praat.org is not available yet?
HOMEPAGE =	https://www.fon.hum.uva.nl/praat/

MAINTAINER =	Yozo TODA <yozo@v007.vaio.ne.jp>

# https://www.fon.hum.uva.nl/praat/manual/License.html
# https://www.fon.hum.uva.nl/praat/manual/General_Public_License__version_3.html
PERMIT_PACKAGE =	Yes

## when using lang/gcc/11
## MODGCC4_VERSION =	11
## COMPILER =		ports-gcc base-gcc base-clang

WANTLIB += X11 atk-1.0 ${COMPILER_LIBCXX} c cairo cairo-gobject
WANTLIB += gdk-3 gdk_pixbuf-2.0 gio-2.0 glib-2.0 gobject-2.0 gtk-3
WANTLIB += harfbuzz intl m pango-1.0 pangocairo-1.0

LIB_DEPENDS =		x11/gtk+3

## we need a little more memory to compile
## create_espeak_ng_FileInMemorySet__ru.cpp and
## create_espeak_ng_FileInMemorySet.cpp (on amd64).
##     ulimit -d 2000000 OK.
##     ulimit -d 1900000 NO.
## Here copied ulimit -d check from lang/rust/Makefile.
# - check datasize limit before configuring (and building)
pre-configure:
	@if [ `ulimit -d` -lt 2000000 ]; then \
		echo datasize limit is too low - amd64 build takes approx 2GB; \
		exit 1; fi

## assume clang/clang++ are used (as cc/c++)
pre-build:
	cp -p ${WRKBUILD}/makefiles/makefile.defs.openbsd ${WRKBUILD}/makefile.defs

do-install:
	cp -p ${WRKBUILD}/praat ${PREFIX}/bin/

.include <bsd.port.mk>
