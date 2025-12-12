COMMENT =	binary decision diagrams library

V =		2.4
DISTNAME =	buddy-${V}

SHARED_LIBS =	bdd	0.0

CATEGORIES =	devel math

HOMEPAGE =	https://github.com/utwente-fmt/buddy

MAINTAINER =		Yozo TODA <yozo@v007.vaio.ne.jp>

## "Copyright (C) 1996-2002 by Jorn Lind-Nielsen", similar to BSD
PERMIT_PACKAGE =	Yes

# If pledge is used, annotate with `uses pledge()' in a comment

WANTLIB =	${COMPILER_LIBCXX} m

SITES =		${HOMEPAGE}/releases/download/v${V}/

CONFIGURE_STYLE =	gnu

.include <bsd.port.mk>
