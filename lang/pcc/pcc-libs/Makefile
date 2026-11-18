COMMENT =	libraries for the portable C compiler

## commit f2155b9a3c1c930c3470afa9d896013e07d68927
## Author: Anders Magnusson <ragge@tethuvudet.se>
## Date:   Sun Feb 8 21:58:36 2026 +0100
## 
##     Add __dso_handle as a pointer in linux crtbegin; seems like glibc needs it.
##     Fixes Issue #35.
COMMIT =	f2155b9a3c1c930c3470afa9d896013e07d68927
DIST_TUPLE +=	github PortableCC pcc-libs ${COMMIT} .
PKGNAME =	pcc-libs-${PKGVER}

SUBST_VARS =	CONFIG PCCVER

.include <bsd.port.mk>
