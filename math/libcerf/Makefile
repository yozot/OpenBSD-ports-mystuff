# $OpenBSD: Makefile,v 1.5 2019/07/12 20:47:42 sthen Exp $

COMMENT =	implementation of complex error functions

V =		1.13
DISTNAME =	libcerf-v${V}
PKGNAME =	libcerf-${V}
EXTRACT_SUFX =	.tgz
CATEGORIES =	math
MASTER_SITES =	https://jugit.fz-juelich.de/mlz/libcerf/-/archive/v${V}/

SHARED_LIBS +=  cerf	3.0 # 1.13

HOMEPAGE =	https://jugit.fz-juelich.de/mlz/libcerf/

MAINTAINER =	Paul Irofti <pirofti@openbsd.org>

# MIT
PERMIT_PACKAGE =	Yes

WANTLIB += c m ${COMPILER_LIBCXX}

MODULES =		devel/cmake

.include <bsd.port.mk>
