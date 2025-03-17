COMMENT =	plain x11 emoji keyboard

V =		0.8
DISTNAME =	xmoji-${V}

## tar.xz file is provided. let's use it via SITES instead of DIST_TUPLE.
## DIST_TUPLE +=	github Zirias xmoji v0.8 .

CATEGORIES =	x11

MAINTAINER =		Yozo TODA <yozo@v007.vaio.ne.jp>

# BSD-2-Clause license
PERMIT_PACKAGE =	Yes

# If pledge is used, annotate with `uses pledge()' in a comment

WANTLIB += c fontconfig freetype m pthread xcb xcb-cursor xcb-image
WANTLIB += xcb-render xcb-xkb xcb-xtest
WANTLIB += harfbuzz png xkbcommon-x11 xkbcommon

SITES =		https://github.com/Zirias/xmoji/releases/download/v${V}/
EXTRACT_SUFX =		.tar.xz

BUILD_DEPENDS =	converters/libiconv \
		devel/gettext \
		devel/glib2 \
		devel/pcre2 \
		graphics/graphite2
RUN_DEPENDS =	x11/gtk+4,-guic \
		devel/desktop-file-utils
LIB_DEPENDS =	devel/harfbuzz \
		graphics/png \
		x11/xkbcommon
#TEST_DEPENDS =		???

#MAKE_FLAGS =		???
#MAKE_ENV =		???
#FAKE_FLAGS =		???
FAKE_FLAGS =		DESTDIR=
#TEST_FLAGS =		???

USE_GMAKE =		Yes

## GNUmakefile is provided, we don't need configure step.
MAKE_FILE =		GNUmakefile

# Overrides for default values
#
#CFLAGS =		???
#LDFLAGS =		???
#MAKE_FILE =		???
#PKG_ARCH =		??? (* for arch-independent packages)
#WRKDIST =		??? if other than ${WRKDIR}/${DISTNAME}
#WRKSRC =		??? if other than ${WRKDIST}
#WRKBUILD =		??? if other than ${WRKSRC}
#WRKCONF =		??? if other than ${WRKBUILD}

#ALL_TARGET =		???
#INSTALL_TARGET =	???
#TEST_TARGET =		???

.include <bsd.port.mk>
