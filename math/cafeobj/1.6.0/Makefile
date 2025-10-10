# $OpenBSD: Makefile.template,v 1.90 2021/02/25 21:59:27 sthen Exp $

COMMENT =	an algebraic specification and programming language

GH_ACCOUNT =	CafeObj
GH_PROJECT =	cafeobj
GH_TAGNAME =	v1.6.0

CATEGORIES =	math

HOMEPAGE =	https://cafeobj.org/

MAINTAINER =		Yozo TODA <yozo@v007.vaio.ne.jp>

# simplified BSD 2-clause license
# https://github.com/CafeObj/cafeobj/blob/master/COPYING
PERMIT_PACKAGE =	Yes

WANTLIB =		c m pthread util z

BUILD_DEPENDS =	lang/sbcl

MAKE_ENV=		ASDF_OUTPUT_TRANSLATIONS=/:

USE_GMAKE =		Yes

CONFIGURE_STYLE =	gnu

ALL_TARGET =		build

.include <bsd.port.mk>
