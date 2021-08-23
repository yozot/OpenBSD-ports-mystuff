# $OpenBSD: Makefile.template,v 1.90 2021/02/25 21:59:27 sthen Exp $

COMMENT =	an ocaml interface to the Tcl/Tk GUI framework

## the compatible version is 8.06.8 for the current ocaml port 4.10
GH_ACCOUNT =	garrigue
GH_PROJECT =	labltk
GH_TAGNAME =	8.06.8

CATEGORIES =	x11

HOMEPAGE =	https://garrigue.github.io/labltk/

MAINTAINER =		Yozo TODA <yozo@v007.vaio.ne.jp>

## LGPL
PERMIT_PACKAGE =	Yes

WANTLIB +=		tcl85 tk85

MODULES =		lang/ocaml x11/tk

BUILD_DEPENDS =		sysutils/findlib
LIB_DEPENDS =		${MODTK_LIB_DEPENDS}

USE_GMAKE =		Yes
CONFIGURE_STYLE =	simple
CONFIGURE_ARGS =	-use-findlib -verbose -tkdefs "-I${MODTCL_INCDIR} -I${MODTK_INCDIR} -I${X11BASE}/include"

NO_TEST =		Yes

.include <bsd.port.mk>
