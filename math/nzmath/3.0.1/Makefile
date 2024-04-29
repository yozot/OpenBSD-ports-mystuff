COMMENT =	python calculator on number theory

MODPY_EGG_VERSION =	3.0.1

DISTNAME =	NZMATH-${MODPY_EGG_VERSION}
PKGNAME =	nzmath-${MODPY_EGG_VERSION}

CATEGORIES =	math

HOMEPAGE =	https://nzmath.sourceforge.io/

MAINTAINER =		Yozo TODA <yozo@v007.vaio.ne.jp>

# BSD
PERMIT_PACKAGE =	Yes

SITES =		${SITE_SOURCEFORGE:=nzmath/}

SUPDISTFILES =		NZMATH-test-${MODPY_EGG_VERSION}${EXTRACT_SUFX}
DISTFILES =		${DISTNAME}${EXTRACT_SUFX} ${SUPDISTFILES}

MODULES =		lang/python

post-install:
	${INSTALL_DATA} ${WRKBUILD}/{ACKNOWLEDGEMENTS.txt,CHANGES.txt,HISTORY.txt,LICENSE.txt,README.txt,nzmathconf.py.example,tutorial.txt} ${PREFIX}/share/doc/NZMATH-${MODPY_EGG_VERSION}

TEST_ENV =	PYTHONPATH=${WRKSRC}/lib DATADIR=${WRKSRC}/data
do-test:
	cd ${WRKSRC} && tar zxvf ${DISTDIR}/${SUPDISTFILES} && \
	cd ${WRKSRC}/test/ && env PYTHONPATH=${WRKSRC}/lib ${MODPY_BIN} testAll.py

.include <bsd.port.mk>
