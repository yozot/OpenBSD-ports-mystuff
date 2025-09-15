## Basis library compilation necessary?
## can we remove --enable-compact32bit option?
## -- yozo.  Mon Aug  9 03:52:55 JST 2021
# $OpenBSD: Makefile.template,v 1.90 2021/02/25 21:59:27 sthen Exp $

COMMENT =	a standard ML implementation

GH_ACCOUNT =	polyml
GH_PROJECT =	polyml
GH_TAGNAME =	v5.8.2

SHARED_LIBS +=	polyml               12.0

CATEGORIES =	lang

HOMEPAGE =	https://www.polyml.org/

MAINTAINER =		Yozo TODA <yozo@v007.vaio.ne.jp>

# LGPL v2.1
PERMIT_PACKAGE =	Yes

WANTLIB +=		${COMPILER_LIBCXX} c m

CONFIGURE_STYLE =	gnu
CONFIGURE_ARGS +=	--enable-compact32bit --enable-intinf-as-int

ALL_TARGET =		all compiler

.include <bsd.port.mk>
