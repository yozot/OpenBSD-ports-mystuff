COMMENT =	portable C compiler

## commit 8b92dab2899f1ba0b99e9e541e6be6c13b2a95bf
## Author: Anders Magnusson <ragge@tethuvudet.se>
## Date:   Fri Oct 23 13:09:00 2026 +0200
## 
##     Move out the locally-declared defines to their config files instead.
## 
COMMIT =	8b92dab2899f1ba0b99e9e541e6be6c13b2a95bf
DIST_TUPLE +=	github PortableCC pcc ${COMMIT} .
PKGNAME =	pcc-${PKGVER}

WANTLIB += c m

RUN_DEPENDS =	lang/pcc/pcc-libs>=${PKGVER}

.include <bsd.port.mk>
