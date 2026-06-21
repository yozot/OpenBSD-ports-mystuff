COMMENT =	type-based static analyzer for the pi-calculus 

DISTNAME =	typical-1.6.2

CATEGORIES =	math

HOMEPAGE =	https://www.kb.is.s.u-tokyo.ac.jp/~koba/typical/

MAINTAINER =		Yozo TODA <yozo@v007.vaio.ne.jp>

# BSD-style license, see README and COPYING
PERMIT_PACKAGE =	Yes

WANTLIB =		c m pthread

SITES =		${HOMEPAGE}

EXTRACT_SUFX =		.zip

MODULES =		lang/ocaml

do-build:
	cd ${WRKBUILD}/src/ && make typical

do-install:
	cp -p ${WRKBUILD}/typical  ${WRKINST}/${LOCALBASE}/bin/
	${INSTALL_DATA_DIR} ${WRKINST}/${LOCALBASE}/share/${PKGNAME}
	cd ${WRKBUILD} && \
	  pax -rw COPYING README changes.txt demo/ samples/ \
	          ${WRKINST}/${LOCALBASE}/share/${PKGNAMES}/

do-test:
	cd ${WRKBUILD}/samples/ && sh ./testall

.include <bsd.port.mk>
