#ONLY_FOR_ARCHS =	only for x86_64 and aarch64?

COMMENT =	light weight thread library

DISTNAME =	massivethreads-20230327

COMMIT =	80809e588ea9f9a49591ff19a88b2e0dcaf51e19
DIST_TUPLE +=	github massivethreads massivethreads ${COMMIT} .

SHARED_LIBS +=  dr                        0.0 # 0.0
SHARED_LIBS +=  myth-dl                   0.0 # 0.0
SHARED_LIBS +=  myth-ld                   0.0 # 0.0
SHARED_LIBS +=  myth                      0.0 # 0.0

CATEGORIES =	devel

MAINTAINER =		Yozo TODA <yozo@v007.vaio.ne.jp>

# BSD-2-Clause license
PERMIT_PACKAGE =	Yes

# If pledge is used, annotate with `uses pledge()' in a comment

WANTLIB =		c pthread

# Standard for C++ ports:
#COMPILER =		base-clang ports-gcc base-gcc
## COMPILER =		ports-gcc

#MAKE_FLAGS =		???
#MAKE_ENV =		???
#FAKE_FLAGS =		???
#TEST_FLAGS =		???

CONFIGURE_STYLE =	gnu

#CFLAGS =		???
## LDFLAGS +=		-Wl,--allow-shlib-undefined
WRKDIST =		${WRKDIR}/massivethreads-${COMMIT}

.include <bsd.port.mk>
