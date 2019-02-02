# $OpenBSD: Makefile.template,v 1.78 2018/07/09 15:00:06 jca Exp $

COMMENT =	proof assistant based on a typed lambda calculus

V =             8.9.0
DISTNAME =	V${V}
PKGNAME =	coq-${DISTNAME}

GH_ACCOUNT =	coq
GH_PROJECT =	coq
## GH_TAGNAME =	${DISTNAME}

# for any port that creates shared libraries.
# both libtool and cmake automatically set filenames based on this variable.
# for libtool- or cmake-based ports, have a look at WRKBUILD/shared_libs.log
#SHARED_LIBS =	???

CATEGORIES =	math

HOMEPAGE =	https://coq.inria.fr/

MAINTAINER =		Yozo TODA <yozo@v007.vaio.ne.jp>

# LGPL 2.1
PERMIT_PACKAGE_CDROM =	Yes

# If pledge is used, annotate with `uses pledge()' in a comment

# "make port-lib-depends-check" can help
#WANTLIB =		???

DIST_SUBDIR =		coq

# Dependencies
#
#COMPILER =		???
MODULES =		lang/ocaml
BUILD_DEPENDS =		devel/ocaml-ocamlbuild \
			sysutils/findlib \
			lang/ocaml-camlp5
## math/ocaml-num

#RUN_DEPENDS =		???
#LIB_DEPENDS =		???
#TEST_DEPENDS =		???

#MAKE_FLAGS =		???
#MAKE_ENV =		???
#FAKE_FLAGS =		???
#TEST_FLAGS =		???

USE_GMAKE =		Yes

CONFIGURE_STYLE =	simple
CONFIGURE_ARGS =	-prefix ${PREFIX} \
			-mandir ${PREFIX}/man \
			-configdir ${SYSCONFDIR}/xdg/coq \
			-with-doc no \
			-coqwebsite https://coq.inria.fr/
#CONFIGURE_ENV =	???

# Things that we don't want to do for this port/package
# Generally, DON'T set anything to No if it's not needed.
# The time gained is not worth it.
#
#NO_BUILD =		Yes
#NO_TEST =		Yes

# Overrides for default values
#
#CFLAGS =		???
#LDFLAGS =		???
#MAKE_FILE =		???
#PKG_ARCH =		??? (* for arch-independent packages)
WRKDIST =		${WRKDIR}/coq-${V}

#ALL_TARGET =		???
#INSTALL_TARGET =	???
#TEST_TARGET =		???

.include <bsd.port.mk>
