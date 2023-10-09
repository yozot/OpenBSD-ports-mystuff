COMMENT =	ocaml bindings to curses/ncurses

V =	1.0.11
PKGNAMEbase =	ocaml-curses
PKGNAME =	${PKGNAMEbase}-${V}
## GH_ACCOUNT =	mbacarella
## GH_PROJECT =	curses
## GH_TAGNAME =	1.0.11

# for any port that creates shared libraries.
# both libtool and cmake automatically set filenames based on this variable.
# for libtool- or cmake-based ports, have a look at WRKBUILD/shared_libs.log
#SHARED_LIBS =	???	0.0

CATEGORIES =		lang
HOMEPAGE =		https://github.com/mbacarella/curses
MAINTAINER =		Yozo TODA <yozo@v007.vaio.ne.jp>

# LGPL-2.1
PERMIT_PACKAGE =	Yes

WANTLIB +=		curses
SITES =		${HOMEPAGE}/archive/refs/tags/
DISTFILES =	${PKGNAMEbase}-{}${V}${EXTRACT_SUFX}

MODULES =		lang/ocaml
BUILD_DEPENDS =		devel/dune \
			devel/dune,-configurator

WRKBUILD =	${WRKSRC}/curses-${V}

do-build:
	cd ${WRKBUILD} && dune build -j ${MAKE_JOBS}
do-install:
	cd ${WRKBUILD} && dune install -j ${MAKE_JOBS}

do-test:
	cd ${WRKBUILD} && dune test

.include <bsd.port.mk>
