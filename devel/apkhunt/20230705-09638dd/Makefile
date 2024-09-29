COMMENT =	static code analysis tool for android apps

DISTNAME =	apkhunt-20230705
COMMIT=		09638dddea93386d0b16c3be5054a9c015affc13
DIST_TUPLE +=	github Cyber-Buddy APKHunt ${COMMIT} .

# for any port that creates shared libraries.
# both libtool and cmake automatically set filenames based on this variable.
# for libtool- or cmake-based ports, have a look at WRKBUILD/shared_libs.log
#SHARED_LIBS =	???	0.0

CATEGORIES =	devel

MAINTAINER =		Yozo TODA <yozo@v007.vaio.ne.jp>
# GPLv3
PERMIT_PACKAGE =	Yes

# If pledge is used, annotate with `uses pledge()' in a comment

MODULES =		lang/go

RUN_DEPENDS =		devel/dex2jar \
			devel/jadx

WRKDIST=${WRKDIR}/APKHunt-${COMMIT}
#WRKSRC =		??? if other than ${WRKDIST}
#WRKBUILD =		??? if other than ${WRKSRC}
#WRKCONF =		??? if other than ${WRKBUILD}

ALL_TARGET =		github.com/Cyber-Buddy/APKHunt
#INSTALL_TARGET =	???
#TEST_TARGET =		???

.include <bsd.port.mk>
