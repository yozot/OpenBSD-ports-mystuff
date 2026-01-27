COMMENT =	java library implementing a large subset of common lisp

DISTNAME =	jatha
PKGNAME =	${DISTNAME}-20190508

COMMIT =	f7479f8960dd4d8b68443e415c2f03476cd31174
DIST_TUPLE +=	github mhewett ${DISTNAME} ${COMMIT} .

CATEGORIES =	lang
HOMEPAGE =	https://jatha.sourceforge.net/
MAINTAINER =		Yozo TODA <yozo@v007.vaio.ne.jp>

# LGPL-3
PERMIT_PACKAGE =	Yes

MODULES =		java
MODJAVA_BUILD =		ant

NO_TEST =		Yes

WRKDIST =		${WRKDIR}/${DISTNAME}-${COMMIT}

do-build:
	cd ${WRKBUILD} && ant -lib ${WRKBUILD}/lib/junit-3.8.2.jar jar

do-install:
	${INSTALL_DATA_DIR} ${PREFIX}/share/jatha
	${INSTALL_DATA} ${WRKBUILD}/build/lib/jatha.jar ${PREFIX}/share/jatha/jatha-2.9.0.jar
	${INSTALL_SCRIPT} ${FILESDIR}/jatha ${PREFIX}/bin/
	${INSTALL_DATA_DIR} ${PREFIX}/share/doc/java/jatha
	cp -pR ${WRKBUILD}/www/doc/* ${PREFIX}/share/doc/java/jatha

.include <bsd.port.mk>
