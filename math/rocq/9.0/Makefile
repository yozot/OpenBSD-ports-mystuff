## re-create Makefile from scratch.
## BDEP needs devel/dune with minimal version 3.8.3, we should update devel/dune
## BDEP needs others? (see math/coq/Makefile)
## DONE: make configure
## WORKING: make build
##    DONE ALL_TARGET = states: build a minimal functional rocq repl
##    - ALL_TARGET = world:  build main public binaries and libraries in developer mode (no rocqide)
##    - ALL_TARGET = rocqide: build rocqide binary in developer mode
##    - TEST_TARGET = test-suite: run Rocq's test suite [env NJOBS=N to set job parallelism]
## TODO: make fake package install test
## TODO: check compcert (and any others?)
## 

COMMENT =	proof assistant or interactive theorem prover, renamed from coq
V =		9.0.0
DISTNAME =	rocq-${V}

## DIST_TUPLE +=	github coq coq V9.0.0 .

# for any port that creates shared libraries.
# both libtool and cmake automatically set filenames based on this variable.
# for libtool- or cmake-based ports, have a look at WRKBUILD/shared_libs.log
#SHARED_LIBS =	???	0.0

CATEGORIES =	math

HOMEPAGE =	https://rocq-prover.org/

MAINTAINER =	Yozo TODA <yozo@v007.vaio.ne.jp>

# LGPL 2.1
PERMIT_PACKAGE =	Yes

# If pledge is used, annotate with `uses pledge()' in a comment

# "make port-lib-depends-check" can help
#WANTLIB =		???

SITES =		https://github.com/coq/coq/releases/download/V${V}/

# Standard for C++ ports:
#COMPILER =		base-clang ports-gcc base-gcc
# Standard for C++11 or newer:
#COMPILER =		base-clang ports-gcc
# Ports that require a non-default compiler that do *not* use C++ should set this:
#COMPILER_LANGS =	c

MODULES =	lang/ocaml

## minimal dune version is 3.8.3
## see https://coq.github.io/doc/master/refman/changes.html#changes-in-9-0-0
## (more precisely, #id116 "Infrastructure and dependencies")
BUILD_DEPENDS =	devel/dune \
		math/ocaml-zarith
#RUN_DEPENDS =		???
#LIB_DEPENDS =		???
#TEST_DEPENDS =		???

#MAKE_FLAGS =		???
#MAKE_ENV =		???
#FAKE_FLAGS =		???
#TEST_FLAGS =		???

USE_GMAKE =		Yes
CONFIGURE_STYLE =	simple
## see tools/configure/cmdArgs.ml
CONFIGURE_ARGS=	-prefix "${PREFIX}" \
		-libdir "${PREFIX}/lib/ocaml/coq" \
		-mandir "${PREFIX}/man" \
		-configdir "${SYSCONFDIR}/xdg/coq" \
		-coqwebsite "https://rocq-prover.org/"

# Overrides for default values
#
#CFLAGS =		???
#LDFLAGS =		???
#MAKE_FILE =		???

WRKDIST =		${WRKDIR}/coq-${V}

## ALL_TARGET =		states
ALL_TARGET =		world
## ALL_TARGET =		rocqide
#INSTALL_TARGET =	???
TEST_TARGET =		test-suite
.include <bsd.port.mk>
