COMMENT =	C implementation of RFC6330 RaptorQ codes

DIST_TUPLE +=	codeberg librecast lcrq v0.1.2 .

SHARED_LIBS =	lcrq	0.0

CATEGORIES =	net

HOMEPAGE =	https://librecast.net/lcrq.html

MAINTAINER =	Yozo TODA <yozo@v007.vaio.ne.jp>

# GPLv2 or (at your option) GPLv3
PERMIT_PACKAGE =	Yes

# If pledge is used, annotate with `uses pledge()' in a comment

WANTLIB =	sodium

LIB_DEPENDS =	security/libsodium

MAKE_ENV =	CPPFLAGS=-I${LOCALBASE}/include
FAKE_FLAGS =	DESTDIR=
TEST_ENV =	CFLAGS=-I${LOCALBASE}/include

USE_GMAKE =	Yes

CONFIGURE_STYLE =	gnu
CONFIGURE_ENV =		LDFLAGS=-L${LOCALBASE}/lib

WRKDIST =	${WRKDIR}/lcrq

TEST_TARGET =	test

.include <bsd.port.mk>
