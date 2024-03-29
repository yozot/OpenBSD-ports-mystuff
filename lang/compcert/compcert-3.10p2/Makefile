# $OpenBSD: Makefile,v 1.34 2021/12/10 04:10:59 daniel Exp $

ONLY_FOR_ARCHS =	aarch64 amd64 i386 powerpc

COMMENT =		high assurance C compiler

V =			3.10
GH_ACCOUNT =		AbsInt
GH_PROJECT =		CompCert
GH_TAGNAME =		v${V}
DISTNAME =		${GH_PROJECT}-${V}
PKGNAME =		${DISTNAME:L}
REVISION =		2

HOMEPAGE =		https://compcert.org/

CATEGORIES =		lang

# INRIA Non-Commercial License Agreement.
PERMIT_PACKAGE =	Yes

WANTLIB	+= c m

COMPILER	= ports-gcc
MODGCC4_VERSION	= 11
## or you can try temporarily with "env MODGCC4_VERSION=11 make ..." or
## "make MODGCC4_VERSION=11 ...".

USE_GMAKE	= Yes

CONFIGURE_STYLE = simple
CONFIGURE_ARGS  = -mandir ${PREFIX}/man \
		  -libdir ${PREFIX}/lib \
		  -toolprefix e \
		  -no-standard-headers \
		  ${MACHINE_ARCH}-bsd

BUILD_DEPENDS =	lang/ocaml>=4.05 \
		math/coq>=8.8.0 \
		sysutils/findlib \
		devel/ocaml-menhir>=20190626

.include <bsd.port.arch.mk>
.if ${PROPERTIES:Mgcc49}
RUN_DEPENDS =	lang/gcc/${MODGCC4_VERSION}
.endif

post-install:
	${INSTALL_DATA} ${WRKSRC}/LICENSE ${PREFIX}/share/compcert
	sed -i -e "s,^stdlib_path=.*,stdlib_path=${TRUEPREFIX}/lib," \
		${PREFIX}/share/compcert/compcert.ini

.include <bsd.port.mk>
