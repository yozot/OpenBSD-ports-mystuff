COMMENT =	distributed applications with ipv6 multicast

## mempcpy() is used at v0.8.0, but removed with the more newer commit:
## 
## commit 5776ebc739d855f94e38bbff930d9f4a75c60d1c
## Author: Brett A C Sheffield <bacs@librecast.net>
## Date:   Tue Apr 9 13:48:59 2024 +0200
## 
##     replace GNU-specific mempcpy() with memcpy()
## 
## let's use the latest commit here.
## 
## commit 05ddc46cb9a72dafc375f01ef5354f53159dbaf8
## Author: Brett A C Sheffield <bacs@librecast.net>
## Date:   Fri Jun 14 15:04:54 2024 +0200
## 
COMMIT =	05ddc46
PROJECT_NAME =	librecast
DIST_TUPLE +=	codeberg librecast ${PROJECT_NAME} ${COMMIT} .

SHARED_LIBS =	librecast	0.5

CATEGORIES =	net
HOMEPAGE =	https://librecast.net/
MAINTAINER =		Yozo TODA <yozo@v007.vaio.ne.jp>

# GPL 2.0 or GPL 3.0, dual licensed
PERMIT_PACKAGE =	Yes

# If pledge is used, annotate with `uses pledge()' in a comment

# "make port-lib-depends-check" can help
WANTLIB +=		m pthread sodium lcrq
LIB_DEPENDS =		security/libsodium \
			net/librecast/lcrq
USE_GMAKE =		Yes

CONFIGURE_STYLE =	gnu
CONFIGURE_ENV =		LDFLAGS=-L${LOCALBASE}/lib

MAKE_ENV =		CPPFLAGS=-I${LOCALBASE}/include
FAKE_FLAGS =		DESTDIR=
TEST_FLAGS =		CPPFLAGS=-I${LOCALBASE}/include

WRKDIST =		${WRKDIR}/${PROJECT_NAME}
TEST_TARGET =		test

.include <bsd.port.mk>
