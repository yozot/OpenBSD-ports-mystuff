## try with ocaml-4.14.2 / coq-8.19.1

ONLY_FOR_ARCHS =	aarch64 amd64 i386 powerpc

COMMENT =		high assurance C compiler

V =			3.13.1
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

USE_GMAKE	= Yes

CONFIGURE_STYLE = simple

## coq-8.19.1 is not suported yet.
## configure checks coq and ocaml versions.
## before patching configure, here we try with option "-ignore-coq-version".
CONFIGURE_ARGS  = -mandir ${PREFIX}/man \
		  -libdir ${PREFIX}/lib \
		  -sharedir ${PREFIX}/share/compcert \
		  -toolprefix e \
		  -no-standard-headers \
		  -ignore-coq-version \
		  ${MACHINE_ARCH}-bsd

BUILD_DEPENDS =	lang/ocaml>=4.05 \
		math/coq>=8.12.0 \
		sysutils/findlib \
		devel/ocaml-menhir>=20190626

.include <bsd.port.arch.mk>
.if ${PROPERTIES:Mgcc49}
RUN_DEPENDS =	lang/gcc/${MODGCC4_VERSION}
.endif

post-install:
	${INSTALL_DATA} ${WRKSRC}/LICENSE ${PREFIX}/share/compcert

.include <bsd.port.mk>
