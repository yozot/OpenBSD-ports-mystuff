# $OpenBSD: Makefile.template,v 1.88 2020/05/15 01:32:48 abieber Exp $

COMMENT =	a set of OpenPGP tools forked from NetPGP

GH_ACCOUNT =	rnpgp
GH_PROJECT =	rnp
GH_TAGNAME =	v0.15.1

SHARED_LIBS +=	rnp	15.1

CATEGORIES =	security

HOMEPAGE =	https://www.rnpgp.org/

MAINTAINER =		Yozo TODA <yozo@v007.vaio.ne.jp>

# BSD
PERMIT_PACKAGE =	Yes

WANTLIB += ${COMPILER_LIBCXX} botan-2 bz2 c json-c m z

MODULES =		devel/cmake

BUILD_DEPENDS =		textproc/asciidoctor
LIB_DEPENDS =		archivers/bzip2	\
			devel/json-c	\
			security/botan2

## BUID_TESTING=OFF to skip "git clone googletest" which is required for testing
CONFIGURE_ARGS += -DBUILD_SHARED_LIBS=on -DBUILD_TESTING=OFF

## TODO
## * enable test target
##   build target does not need gtest, but test target needs it.
##   test target should invoke cmake again, the same as configure target...
##   no_tests flavor should be defined like x11/qt5/declarative ?
## * python 2.7 is required when testing-build.  python 3.x can be used?
## * test target requires adding gtest include dir to CFLAGS (or CXXFLAGS?)
## 
## TEST_DEPENDS =		lang/python/2.7	\
## 			security/gnupg2 \
## 			devel/gtest
NO_TEST =		Yes


post-install:
	${INSTALL_DATA_DIR} ${PREFIX}/share/doc/rnp
	${INSTALL_DATA} ${WRKSRC}/docs/*.adoc ${PREFIX}/share/doc/rnp/
	${INSTALL_DATA} ${WRKSRC}/docs/develop/*.adoc ${PREFIX}/share/doc/rnp/

.include <bsd.port.mk>
