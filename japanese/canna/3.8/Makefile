COMMENT =	japanese input system

CANNA_TAG =	release-3.8
DIST_TUPLE +=	github canna-input canna ${CANNA_TAG} .

SHARED_LIBS +=	RKC                       1.2
SHARED_LIBS +=	RKC16                     1.2
SHARED_LIBS +=	canna                     1.2
SHARED_LIBS +=	canna16                   1.2

CATEGORIES =	japanese

HOMEPAGE =	https://canna-input.github.io/

MAINTAINER =	Yozo TODA <yozo@v007.vaio.ne.jp>

# see https://github.com/canna-input/canna/blob/main/COPYRIGHT
PERMIT_PACKAGE =	Yes

WANTLIB +=		c

CANNAOWNER =	daemon
CANNAGROUP =	daemon
MAKE_ENV =	LOCALSTATEDIR=${LOCALSTATEDIR} \
		CANNAOWNER=${CANNAOWNER} \
		CANNAGROUP=${CANNAGROUP}

CONFIGURE_STYLE =	imake

NO_TEST =	Yes

## LDFLAGS =	-Wl,-rpath,${LOCALBASE}/canna/lib
WRKDIST =	${WRKDIR}/${PKGSTEM}-${CANNA_TAG}

.include <bsd.port.mk>
