COMMENT =	a minimal-state, immediate-mode gui toolkit

DIST_TUPLE +=	github Immediate-Mode-UI Nuklear 4.12.8 .

CATEGORIES =	x11

HOMEPAGE =	https://immediate-mode-ui.github.io/Nuklear/

MAINTAINER =		Yozo TODA <yozo@v007.vaio.ne.jp>

# MIT
PERMIT_PACKAGE =	Yes

# Dependencies
#BUILD_DEPENDS =	???
#RUN_DEPENDS =		???
#LIB_DEPENDS =		???
#TEST_DEPENDS =		???

NO_BUILD =		Yes

# Overrides for default values
#
#CFLAGS =		???
#LDFLAGS =		???
#MAKE_FILE =		???
#PKG_ARCH =		??? (* for arch-independent packages)
#WRKDIST =		??? if other than ${WRKDIR}/${DISTNAME}
#WRKSRC =		??? if other than ${WRKDIST}
#WRKBUILD =		??? if other than ${WRKSRC}
#WRKCONF =		??? if other than ${WRKBUILD}

#ALL_TARGET =		???
#INSTALL_TARGET =	???
#TEST_TARGET =		???

do-install:
	${INSTALL_DATA_DIR} "${PREFIX}/include/Nuklear"
	${INSTALL_DATA} "${WRKBUILD}/nuklear.h" "${PREFIX}/include/Nuklear"
	@echo "installing to ${PREFIX}/share/doc/Nuklear ..."
	${INSTALL_DATA_DIR} "${PREFIX}/share/doc/Nuklear"
	${INSTALL_DATA} "${WRKBUILD}/LICENSE" "${PREFIX}/share/doc/Nuklear"
	${INSTALL_DATA} "${WRKBUILD}/Readme.md" "${PREFIX}/share/doc/Nuklear"

.include <bsd.port.mk>
