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

BUILD_DEPENDS =	lang/fpc

WRKDIR =		${WRKOBJDIR}/${DISTNAME}-${GH_SHORTCOMMIT}

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
