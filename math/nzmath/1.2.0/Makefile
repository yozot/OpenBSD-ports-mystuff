# Replace ??? with appropriate values
# Remove extraneous comments before commit
# Use /usr/ports/infrastructure/bin/portcheck

COMMENT =	a python based number theory oriented calculation system

MODPY_EGG_VERSION =	1.2.0

DISTNAME =	NZMATH-${MODPY_EGG_VERSION}
PKGNAME =	nzmath-${MODPY_EGG_VERSION}

CATEGORIES =	math

HOMEPAGE =	https://nzmath.sourceforge.io/

MAINTAINER =		Yozo TODA <yozo@v007.vaio.ne.jp>

# BSD
PERMIT_PACKAGE =	Yes

MASTER_SITES =		${MASTER_SITE_SOURCEFORGE:=nzmath/}

SUPDISTFILES =		NZMATH-test-${MODPY_EGG_VERSION}${EXTRACT_SUFX}
## why "+=" doesn't work??
DISTFILES =		${DISTNAME}${EXTRACT_SUFX} ${SUPDISTFILES}

MODULES =		lang/python

# If port is python2 only
MODPY_VERSION =	${MODPY_DEFAULT_VERSION_2}

post-extract:
	cd ${WRKSRC} && tar zxvf ${DISTDIR}/${SUPDISTFILES}
do-test:
	cd ${WRKSRC}/test/ && ${MODPY_BIN} testAll.py


.include <bsd.port.mk>
