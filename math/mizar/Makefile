COMMENT =	mizar system

DISTNAME =	mizar-system
PKGNAME =	${DISTNAME}-${GH_SHORTCOMMIT}

GH_ACCOUNT =	MizarProject
GH_PROJECT =	system
#GH_TAGNAME =	1.0
GH_COMMIT =	baeed3caf7ace56dd24c8981dec8438ab2da48c1
GH_SHORTCOMMIT = baeed3ca

CATEGORIES =	math

HOMEPAGE =	https://mizar.uwb.edu.pl/

MAINTAINER =		Yozo TODA <yozo@v007.vaio.ne.jp>

# GPLv3+
PERMIT_PACKAGE =	Yes

# "make port-lib-depends-check" can help
WANTLIB =		c

SUPDISTFILE = mizar-8.1.09_5.59.1363-i386-freebsd.tar
SUPDISTFILES = ${SUPDISTFILE}:0
MASTER_SITES0 =	http://mizar.uwb.edu.pl/~softadm/pub/system/i386-freebsd/
DIST_SUBDIR =	mizar

BUILD_DEPENDS =	lang/fpc

WRKDIR =		${WRKOBJDIR}/${DISTNAME}-${GH_SHORTCOMMIT}

## mizbin.tar.gz, mizdoc.tar.gz, mizshare.tar.gz are extracted
post-extract:
	cd ${WRKDIR} && tar xvf ${FULLDISTDIR}/${SUPDISTFILE}

post-install:
	for i in ${FILESDIR}/* ; do \
	  ${INSTALL_SCRIPT} $${i} ${WRKINST}${LOCALBASE}/libexec/mizar/ ; \
	done
	${INSTALL_DATA_DIR} ${WRKINST}${LOCALBASE}/share/doc/mizar
	cd ${WRKINST}${LOCALBASE}/share/doc/mizar && \
	  for i in mizdoc.tar.gz mizshare.tar.gz ; do \
	    tar zxvf ${WRKDIR}/$${i} ; \
	  done

.include <bsd.port.mk>

## can't make package... why?
## $ make package
## `/usr/ports/pobj/mizar-system-baeed3ca/fake-amd64/.fake_done' is up to date.
## ===>  Building package for mizar-system-baeed3ca
## Create /usr/ports/packages/amd64/all/mizar-system-baeed3ca.tgz
## Creating package mizar-system-baeed3ca
## pkg_create: Can't call method "p" on an undefined value
## *** Error 1 in . (/usr/ports/infrastructure/mk/bsd.port.mk:2140 '/usr/ports/packages/amd64/all/mizar-system-baeed3ca.tgz': @trap "cd /usr/po...)
## *** Error 2 in . (/usr/ports/infrastructure/mk/bsd.port.mk:2621 '_internal-package': @case X${_DEPENDS_CACHE} in  X) _DEPENDS_CACHE=$( mktem...)
## *** Error 2 in /usr/ports/mystuff/math/mizar (/usr/ports/infrastructure/mk/bsd.port.mk:2600 'package': @lock=mizar-system-baeed3ca;  export ...)
## $
