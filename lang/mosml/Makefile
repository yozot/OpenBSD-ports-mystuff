COMMENT =		a light-weight implementation of Standard ML (SML)

VERSION =	2.10.1
PKGNAME =	mosml-${VERSION}
REVISION =	3

## GH_ACCOUNT =	kfl
GH_PROJECT =	mosml
## GH_TAGNAME =	ver-${VERSION}

COMMIT_HASH = 13c581aec46eea134e478f2e2b6456278e36ecce
SHORT_HASH  = 13c581ae ## anywhere to use?
DIST_TUPLE +=	github kfl mosml ${COMMIT_HASH} .

SHARED_LIBS +=	mgmp	1.0 \
                msocket	0.0 \
                munix	0.0

CATEGORIES =	lang

HOMEPAGE =	https://mosml.org/

MAINTAINER =		Yozo TODA <yozo@v007.vaio.ne.jp>

# GPLv2
PERMIT_PACKAGE =	Yes

WANTLIB =		c gmp m

LIB_DEPENDS =		devel/gmp>=6.1.2

post-patch:
	${SUBST_CMD} ${WRKSRC}/dynlibs/msocket/Makefile ${WRKSRC}/dynlibs/munix/Makefile ${WRKSRC}/dynlibs/intinf/Makefile

USE_GMAKE =		Yes

## CONFIGURE_STYLE left blank to indicate that there's nothing to do

NO_TEST =		Yes

WRKDIST =		${WRKDIR}/${GH_PROJECT}-${COMMIT_HASH}
WRKSRC =		${WRKDIST}/src

ALL_TARGET =		world
#TEST_TARGET =		???

MANFILES = mosml.1 mosmlc.1 mosmllex.1 mosmlyac.1
post-install:
	cd ${WRKDIST} && \
	for m in ${MANFILES}; do \
		${INSTALL_DATA} man/$${m} ${PREFIX}/man/man1/; \
	done

.include <bsd.port.mk>
