## now we can make a package.
## TODO: check if the binaries work.
## TODO: "make test"
##   "make test" fails because
##   src/testsuite/.test-rules.make contains "-lcrypt".
##   .test-rules.make is generated in src/testsuite/Makefile
##   in which LIBS variable seems to contain "-lcrypt".
##   why? 
## -- yozo.  Tue Apr 21 03:59:22 JST 2026


COMMENT =	a gnu implementation of the secure shell protocols

## commit c97119e7ed2e0bba05ded2cdfe21f0e087652d95
## Author: Niels Möller <nisse@lysator.liu.se>
## Date:   Mon Mar 16 19:39:01 2026 +0100
## 
##     Update for nettle-4

COMMIT =	c97119e7ed2e0bba05ded2cdfe21f0e087652d95
DISTNAME =	lsh-${COMMIT}{${COMMIT}}
PKGNAME =	lsh-20260329

CATEGORIES =	security

HOMEPAGE =	https://lysator.liu.se/~nisse/lsh/

MAINTAINER =	Yozo TODA <yozo@v007.vaio.ne.jp>

# GPLv2+
PERMIT_PACKAGE =	Yes

# If pledge is used, annotate with `uses pledge()' in a comment

WANTLIB += Xau c curses oop readline util gmp hogweed nettle

SITES =		https://git.lysator.liu.se/lsh/lsh/-/archive/

BUILD_DEPENDS =	devel/gperf \
		lang/guile3
SCHEME_BINARY =	guile3.0
LIB_DEPENDS =	devel/gmp \
		devel/liboop \
		security/libnettle

#MAKE_FLAGS =		???
#MAKE_ENV =		???
#FAKE_FLAGS =		???
#TEST_FLAGS =		???

USE_GMAKE =		Yes

CONFIGURE_STYLE =	autoconf
CONFIGURE_ARGS =	--with-include-path=${LOCALBASE}/include \
			--with-lib-path=${LOCALBASE}/lib:/usr/lib \
			--with-scheme=${SCHEME_BINARY}
AUTOCONF_VERSION =	2.72

WRKDIST =		${WRKDIR}/lsh-${COMMIT}

#ALL_TARGET =		???
#INSTALL_TARGET =	???
#TEST_TARGET =		???

## see README for .bootstrap script
## > If you have checked out lsh from CVS, things are a little more
## > complicated. Run the ./.bootstrap script, which will run aclocal,
## > autoconf, autoheader and automake for you. This creates the configure
## > script and several Makefile.in. Now run ./configure, to create
## > Makefile. Next run make bootstap. This will create various
## > automatically generated files. Then you are ready to run make, to
## > build the programs.

pre-configure:
	(cd ${WRKDIST} && env AUTOCONF_VERSION=${AUTOCONF_VERSION} ${SHELL} .bootstrap)

post-configure:
	(cd ${WRKDIST}/src/scm/ && ln -s guile-compat.scm ${SCHEME_BINARY}-compat.scm)
	(cd ${WRKDIST} && env ${GMAKE} bootstrap)

.include <bsd.port.mk>
