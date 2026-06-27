
COMMENT=	japanese input system

CANNA_TAG=	release-3.8
DIST_TUPLE+=	github canna-input canna ${CANNA_TAG} .

SHARED_LIBS+=	RKC                       1.2
SHARED_LIBS+=	RKC16                     1.2
SHARED_LIBS+=	canna                     1.2
SHARED_LIBS+=	canna16                   1.2

CATEGORIES=	japanese

MAINTAINER=	Marc Espie <espie@openbsd.org>

HOMEPAGE=	https://canna-input.github.io/

# https://github.com/canna-input/canna/blob/main/COPYRIGHT
PERMIT_PACKAGE=	Yes

WANTLIB+=		c

CONFIGURE_STYLE=imake
## either LOCALSTATEDIR or VARBASE, sync with patch-Canna_conf
MAKE_ENV+=	CANNAOWNER=daemon CANNAGROUP=daemon \
		LOCALSTATEDIR=${LOCALSTATEDIR}
NO_TEST=	Yes
WRKDIST=	${WRKDIR}/canna-${CANNA_TAG}

.include <bsd.port.mk>
