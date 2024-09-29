COMMENT =	a compressed file format and its utilities

## GH_ACCOUNT =	zchunk
## GH_PROJECT =	zchunk
## GH_TAGNAME =	1.5.1
DIST_TUPLE +=	github zchunk zchunk 1.5.1 .

SHARED_LIBS =	zck	0.0

CATEGORIES =	archivers

MAINTAINER =		Yozo TODA <yozo@v007.vaio.ne.jp>

# BSD-2-Clause license
PERMIT_PACKAGE =	Yes

# If pledge is used, annotate with `uses pledge()' in a comment

WANTLIB +=		c crypto curl zstd

MODULES +=		devel/meson

BUILD_DEPENDS +=	devel/argp-standalone
RUN_DEPENDS +=		archivers/zstd
LIB_DEPENDS +=		net/curl

MAKE_ENV +=		CFLAGS=-I${LOCALBASE}/include CXXFLAGS=-I${LOCALBASE}/include LDFLAGS=-L${LOCALBASE}/lib

CONFIGURE_ENV +=	CFLAGS=-I${LOCALBASE}/include CXXFLAGS=-I${LOCALBASE}/include LDFLAGS=-L${LOCALBASE}/lib

CFLAGS +=		-I${LOCALBASE}/include

post-extract:
	sed -i.orig "s,/usr/bin/zstd,${LOCALBASE}/bin/zstd," ${WRKSRC}/src/zck_gen_zdict.c

.include <bsd.port.mk>
