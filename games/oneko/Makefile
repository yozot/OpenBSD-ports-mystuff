COMMENT =	oneko - Neko runs over the windows

DISTNAME =	oneko-2.0b

CATEGORIES =	games

HOMEPAGE =	https://www.3bit.co.jp/~sasaki/oneko/

MAINTAINER =		Yozo TODA <yozo@v007.vaio.ne.jp>

## "Free Software"
PERMIT_PACKAGE =	Yes

WANTLIB += ICE SM X11 Xau Xdmcp Xext Xmu Xt c m

SITES =		${HOMEPAGE}

COMPILER =		ports-gcc
COMPILER_LANGS =	c

MAKE_ENV =		COPTS=-DNO_CUSERID

CONFIGURE_STYLE =	imake

NO_TEST =		Yes

WRKDIST =		${WRKDIR}/oneko

.include <bsd.port.mk>
