COMMENT =	python calculator on number theory

MODPY_EGG_VERSION =	3.0.0

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

TEST_ENV =	PYTHONPATH=${WRKSRC}/lib DATADIR=${WRKSRC}/data
## NZMATH-test archive is extracted to WRKDIR by default, but
## we want to patch test/testMatrix.py
## the easy way to deal with patches for the test archive is
## to extract the test archive in WRKSRC.
post-extract:
	cd ${WRKSRC} && tar zxvf ${DISTDIR}/${SUPDISTFILES}
do-test:
	cd ${WRKSRC}/test/ && env PYTHONPATH=${WRKSRC}/lib ${MODPY_BIN} testAll.py

.include <bsd.port.mk>
