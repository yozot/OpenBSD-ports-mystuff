COMMENT=	archive files using LZW compression (.lzh files)

COMMIT_HASH =	4f193b1e98700aa2bc9dfeef11943efc1f036154
DISTNAME =	lha-${COMMIT_HASH}
PKGNAME =	lha-1.14i.ac20220213
CATEGORIES=	archivers

HOMEPAGE =	https://github.com/jca02266/lha/

MAINTAINER=	Yozo Toda <yozo@v007.vaio.ne.jp>

# Restrictive
PERMIT_PACKAGE=	Yes
WANTLIB =		c iconv

DIST_TUPLE +=	github jca02266 lha ${COMMIT_HASH} .

LIB_DEPENDS =		converters/libiconv
CONFIGURE_STYLE =	autoreconf
CONFIGURE_ENV =		CPPFLAGS="-I${LOCALBASE}/include" \
			LDFLAGS="-L${LOCALBASE}/lib"
AUTOCONF_VERSION =	2.71
AUTOMAKE_VERSION =	1.16

.include <bsd.port.mk>
