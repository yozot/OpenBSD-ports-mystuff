# $OpenBSD: Makefile.template,v 1.75 2016/03/20 17:19:49 naddy Exp $

COMMENT =		a light-weight implementation of Standard ML (SML)

VERSION =	2.10.1
DISTNAME =	Rel-${VERSION}
PKGNAME =	mosml-${VERSION}

GH_ACCOUNT =	kfl
GH_PROJECT =	mosml
GH_TAGNAME =	ver-${VERSION}

SHARED_LIBS +=	mgmp	0.0 \
                msocket	0.0 \
                munix	0.0

CATEGORIES =	lang

HOMEPAGE =	http://mosml.org/

MAINTAINER =		Yozo TODA <yozo@v007.vaio.ne.jp>

# GPLv2
PERMIT_PACKAGE_CDROM =	Yes

WANTLIB =		c gmp m

LIB_DEPENDS =		devel/gmp>=5.0.2

post-patch:
	${SUBST_CMD} ${WRKSRC}/dynlibs/msocket/Makefile ${WRKSRC}/dynlibs/munix/Makefile ${WRKSRC}/dynlibs/intinf/Makefile

USE_GMAKE =		Yes

## CONFIGURE_STYLE left blank to indicate that there's nothing to do

NO_TEST =		Yes

WRKDIST =		${WRKDIR}/${GH_PROJECT}-${GH_TAGNAME}
WRKSRC =		${WRKDIST}/src

ALL_TARGET =		world
#TEST_TARGET =		???

.include <bsd.port.mk>
