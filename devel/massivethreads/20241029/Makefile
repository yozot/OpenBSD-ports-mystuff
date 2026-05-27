## 
##  'test' target fails to compile. needs more investigation.
## OpenBSD (upto 7.8) does not have a part of pthreads API.
##     pthread_mutexattr_getpshared
##     pthread_mutexattr_setpshared
##     pthread_condattr_getpshared
##     pthread_condattr_setpshared
## Sould we update pthread library (src/lib/librthread/), or,
## patch out the references to those functions in massivethreads?
## see the build log (/usr/ports/mystuff/LOGS/mystuff-devel-massivethreads-20241029)
##     ld: error: undefined reference: pthread_mutexattr_getpshared
##     ld: error: undefined reference: pthread_mutexattr_setpshared
##     ld: error: undefined reference: pthread_condattr_getpshared
##     ld: error: undefined reference: pthread_condattr_setpshared
##     cc: error: linker command failed with exit code 1 (use -v to see invocation)
##
## I wonder how are FreeBSD and NetBSD pthreads libraries?

#ONLY_FOR_ARCHS =	only for x86_64 and aarch64?

COMMENT =	light weight thread library

## COMMIT =	07569c5e6d69654812fb15b6cb721d792ca9ad3d
TAG =		1.02
DISTNAME =	massivethreads-v${TAG}
PKGNAME =	massivethreads-${TAG}

DIST_TUPLE +=	github massivethreads massivethreads v${TAG} .

SHARED_LIBS +=  dr                        0.0 # 0.0
SHARED_LIBS +=  myth-dl                   0.0 # 0.0
SHARED_LIBS +=  myth-ld                   0.0 # 0.0
SHARED_LIBS +=  myth                      0.0 # 0.0

CATEGORIES =	devel

MAINTAINER =		Yozo TODA <yozo@v007.vaio.ne.jp>

# BSD-2-Clause "Simplified" License
PERMIT_PACKAGE =	Yes

# If pledge is used, annotate with `uses pledge()' in a comment

WANTLIB =		c pthread

CONFIGURE_STYLE =	gnu

WRKDIST =		${WRKDIR}/massivethreads-${TAG}

DOCFILES =	README.md		\
		COPYRIGHT 		\
		docs/api.txt		\
		docs/bind.txt		\
		docs/native-api.txt	\
		docs/texinfo/massivethreads.info \
		docs/texinfo/massivethreads.html \
		docs/texinfo/massivethreads.pdf

post-install:
	${INSTALL_DATA_DIR} ${PREFIX}/share/doc/massivethreads
	for i in ${DOCFILES} ; do \
	  ${INSTALL_DATA} ${WRKBUILD}/$${i} ${PREFIX}/share/doc/massivethreads ; \
	done
	(cd ${WRKBUILD}/docs/ && tar cvf - reference/ ) | (cd ${PREFIX}/share/doc/massivethreads/ && tar xvf - )

.include <bsd.port.mk>
