COMMENT =	an ocaml interface to the Tcl/Tk GUI framework

GH_ACCOUNT =	garrigue
GH_PROJECT =	labltk
GH_TAGNAME =	8.06.12

CATEGORIES =	x11

HOMEPAGE =	https://garrigue.github.io/labltk/

MAINTAINER =		Yozo TODA <yozo@v007.vaio.ne.jp>

## LGPL
PERMIT_PACKAGE =	Yes

WANTLIB +=		tcl86 tk86

MODULES =		lang/ocaml x11/tk
MODTK_VERSION =		8.6

BUILD_DEPENDS =		sysutils/findlib
LIB_DEPENDS =		${MODTK_LIB_DEPENDS}

USE_GMAKE =		Yes
CONFIGURE_STYLE =	simple
CONFIGURE_ARGS =	-use-findlib -verbose -tkdefs "-I${MODTCL_INCDIR} -I${MODTK_INCDIR} -I${X11BASE}/include"

post-install:
	${INSTALL_DATA_DIR} ${PREFIX}/share/doc/labltk
	${INSTALL_DATA} ${WRKDIST}/README.md ${PREFIX}/share/doc/labltk
	${INSTALL_DATA} ${WRKDIST}/Changes ${PREFIX}/share/doc/labltk
	${INSTALL_DATA_DIR} ${PREFIX}/share/examples/labltk
	${INSTALL_DATA} ${WRKDIST}/examples_labltk/* ${PREFIX}/share/examples/labltk

NO_TEST =		Yes

.include <bsd.port.mk>
