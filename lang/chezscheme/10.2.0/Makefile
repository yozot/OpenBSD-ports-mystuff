COMMENT =	chez scheme

PKGNAME =	${DISTNAME:L}

DIST_TUPLE +=	github cisco ChezScheme v10.2.0 .

# for any port that creates shared libraries.
# both libtool and cmake automatically set filenames based on this variable.
# for libtool- or cmake-based ports, have a look at WRKBUILD/shared_libs.log
#SHARED_LIBS =	???	0.0

CATEGORIES =	lang

HOMEPAGE =	https://cisco.github.io/ChezScheme/

MAINTAINER =		Yozo TODA <yozo@v007.vaio.ne.jp>

# Chez Scheme: Apache-2.0 license
# nanopass: MIT
# stex: R. Kent Dybvig and Oscar Waddell
PERMIT_PACKAGE =	Yes

# If pledge is used, annotate with `uses pledge()' in a comment

WANTLIB += c curses m pthread z iconv lz4

# Dependencies
BUILD_DEPENDS =		sysutils/zuo/1.12
LIB_DEPENDS =		archivers/lz4 \
			converters/libiconv
#RUN_DEPENDS =		???
#TEST_DEPENDS =		???

## now trying to fetch and extract locally nanopass and stex source files.
## should we make the ports for nanopass and stex?

DISTNAME.nanopass =	nanopass-framework-scheme
SITES.nanopass =	https://github.com/nanopass/${DISTNAME.nanopass}/archive/refs/tags/
VERSION.nanopass =	1.9.3
DISTFILES.nanopass =	${DISTNAME.nanopass}-v${VERSION.nanopass}{v${VERSION.nanopass}}.tar.gz
WRKDIST.nanopass =	${WRKDIR}/${DISTNAME.nanopass}-${VERSION.nanopass}

DISTNAME.stex =		stex
SITES.stex =		https://github.com/dybvig/${DISTNAME.stex}/archive/refs/tags/
VERSION.stex =		1.2.2
DISTFILES.stex =	${DISTNAME.stex}-v${VERSION.stex}{v${VERSION.stex}}.tar.gz
WRKDIST.stex =		${WRKDIR}/${DISTNAME.stex}-${VERSION.stex}

post-extract:
	mv ${WRKDIST.nanopass}/* ${WRKSRC}/nanopass/
	mv ${WRKDIST.stex}/* ${WRKSRC}/stex/

CONFIGURE_STYLE =	simple
CONFIGURE_ARGS =	--nogzip-man-pages ZUO=zuo ZLIB=-lz LZ4=-llz4 \
			--installschemename=chez \
			--installpetitename=chez-petite \
			--installscriptname=chez-script

ALL_TARGET =		build

.include <bsd.port.mk>
