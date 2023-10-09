COMMENT =	text-based front-end to remind
DISTNAME =	wyrd-1.7.1
CATEGORIES =	productivity
HOMEPAGE =	https://gitlab.com/wyrd-calendar/wyrd
MAINTAINER =	Yozo TODA <yozo@v007.vaio.ne.jp>

# GPLv2
PERMIT_PACKAGE =	Yes

WANTLIB +=	c m curses

## can't use DIST_TUPLE...
SITES =		https://wyrd-calendar.gitlab.io/wyrd/

EXTRACT_SUFX =		.tar.xz
MODULES =		lang/ocaml
BUILD_DEPENDS =		devel/dune \
			devel/ocaml-yojson \
			lang/ocaml-curses/1.0.11
RUN_DEPENDS =		misc/remind
USE_GMAKE =		Yes
NO_TEST =		Yes

## omit doc generation
ALL_TARGET =		wyrd

do-build:
	cd ${WRKSRC} && dune build

.include <bsd.port.mk>
