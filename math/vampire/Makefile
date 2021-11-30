# $OpenBSD: Makefile.template,v 1.85 2019/09/09 19:19:05 kmos Exp $

COMMENT =	automatic theorem prover

GH_ACCOUNT =	vprover
GH_PROJECT =	vampire
GH_TAGNAME =	v4.6.1

CATEGORIES =	math

HOMEPAGE =	https://vprover.github.io/

MAINTAINER =	Yozo TODA <yozo@v007.vaio.ne.jp>

# BSD (https://vprover.github.io/license.html)
PERMIT_PACKAGE =	Yes

WANTLIB +=		c m

## TODO: base clang++ without depending on ports-gcc.
## when using base clang++, compilation failed with
## /usr/include/c++/v1/iterator trying to include <Availability.h>.
## looking at iterator shows that __APPLE__ macro is enabled. why??
## 
## c++14 is required. I tried with g++-11 only...
COMPILER =		ports-gcc base-clang
MODGCC4_VERSION ?=	11

MODULES = 		devel/cmake
MODCMAKE_VERBOSE =	Yes

BUILD_DEPENDS =		devel/ninja

MAKE_FLAGS =		CXX=${CXX}

USE_GMAKE =		Yes

ALL_TARGET =		vampire
#TEST_TARGET =		???
## TODO: ${WRKDIST}/regressions/ contains materials for test.

do-install:
	${INSTALL_PROGRAM} ${WRKBUILD}/bin/vampire_rel ${PREFIX}/bin/vampire
	${INSTALL_DATA_DIR} ${PREFIX}/share/doc/vampire
	${INSTALL_DATA} ${WRKSRC}/{AUTHORS,HACKING.md,LICENCE,README.md,THANKS} ${PREFIX}/share/doc/vampire

.include <bsd.port.mk>
