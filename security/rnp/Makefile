# $OpenBSD: Makefile.template,v 1.88 2020/05/15 01:32:48 abieber Exp $

## TODO
## * python 2.7 is required when testing-build.  3.x can be used?
## * target "test" requires adding gtest include dir to CFLAGS (or CXXFLAGS?)
## * generating dynamic link libraries, which needs CMakeLists.txt tweak?  

COMMENT =	a set of OpenPGP tools forked from NetPGP

GH_ACCOUNT =	rnpgp
GH_PROJECT =	rnp
GH_TAGNAME =	v0.13.1

# for any port that creates shared libraries.
# both libtool and cmake automatically set filenames based on this variable.
# for libtool- or cmake-based ports, have a look at WRKBUILD/shared_libs.log
#SHARED_LIBS =	???	0.0

CATEGORIES =	security

HOMEPAGE =	https://www.rnpgp.com/software/rnp/

MAINTAINER =		Yozo TODA <yozo@v007.vaio.ne.jp>

# BSD
PERMIT_PACKAGE =	Yes

# If pledge is used, annotate with `uses pledge()' in a comment

# "make port-lib-depends-check" can help
WANTLIB += ${COMPILER_LIBCXX} botan-2 bz2 c json-c m z

MODULES =		devel/cmake

LIB_DEPENDS =		archivers/bzip2	\
			devel/json-c	\
			security/botan2

## skip "git clone googletest" which is required only for testing
CONFIGURE_ARGS += -DBUILD_TESTING=OFF

## and explore later which packages are required only for testing...
## TEST_DEPENDS =		lang/python/2.7	\
## 			security/gnupg2 \
## 			devel/gtest
NO_TEST =		Yes


post-install:
	${INSTALL_MAN} ${WRKSRC}/src/rnp/rnp.1 ${PREFIX}/man/man1/
	${INSTALL_MAN} ${WRKSRC}/src/rnpkeys/rnpkeys.1 ${PREFIX}/man/man1/
	${INSTALL_MAN} ${WRKSRC}/src/lib/librnp.3 ${PREFIX}/man/man3/
	${INSTALL_DATA_DIR} ${PREFIX}/share/doc/rnp
	${INSTALL_DATA} ${WRKSRC}/docs/*.adoc ${PREFIX}/share/doc/rnp/
	${INSTALL_DATA} ${WRKSRC}/docs/develop/*.adoc ${PREFIX}/share/doc/rnp/

.include <bsd.port.mk>
