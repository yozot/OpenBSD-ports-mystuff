# $OpenBSD: Makefile.template,v 1.85 2019/09/09 19:19:05 kmos Exp $

COMMENT =	automatic theorem prover

GH_ACCOUNT =	vprover
GH_PROJECT =	vampire
GH_TAGNAME =	4.4

CATEGORIES =	math

HOMEPAGE =	https://vprover.github.io/

MAINTAINER =	Yozo TODA <yozo@v007.vaio.ne.jp>

# Vampire License
# see https://vprover.github.io/license.html
## In short, we do not allow modification and distribution of Vampire and
## the use of Vampire to compete against Vampire.
## ........
## Permission is hereby granted, free of charge, to use this Software
## for evaluation and research purposes.
PERMIT_PACKAGE =	"evaluation and research purposes only"
PERMIT_DISTFILES =	"evaluation and research purposes only"

WANTLIB +=		c m

## TODO: base clang++ without depending on ports-gcc.
## we should check whether gcc's -Wno-terminate option can be just omitted, or
## should be replated with some clang option.
COMPILER =		ports-gcc base-clang

MAKE_FLAGS =		CXX=${CXX}

USE_GMAKE =		Yes

ALL_TARGET =		vampire
#TEST_TARGET =		???
## TODO: ${WRKDIST}/regressions/ contains materials for test.

do-install:
	${INSTALL_PROGRAM} ${WRKBUILD}/vampire ${PREFIX}/bin/

.include <bsd.port.mk>
