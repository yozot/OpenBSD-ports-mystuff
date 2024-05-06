ONLY_FOR_ARCHS =	aarch64 amd64 i386 powerpc

COMMENT =		high assurance C compiler

V =			3.14
GH_ACCOUNT =		AbsInt
GH_PROJECT =		CompCert
GH_TAGNAME =		v${V}
DISTNAME =		${GH_PROJECT}-${V}
PKGNAME =		${DISTNAME:L}

HOMEPAGE =		https://compcert.org/

CATEGORIES =		lang

# INRIA Non-Commercial License Agreement.
PERMIT_PACKAGE =	Yes

WANTLIB	+= c m

## "The small test suite was moved to a separate Git repository" since 8.14.
GH_PROJECT.test =		small-tests
SITES.test = https://github.com/AbsInt/${GH_PROJECT}-${GH_PROJECT.test}/archive/
GH_COMMIT.test = 4a253242086d1ce78365d1b5cac3201193fa3814
DISTFILES.test = ${DISTNAME}-test-${GH_COMMIT.test}{${GH_COMMIT.test}}${EXTRACT_SUFX}
## EXTRACT_ONLY = ${DISTFILES}

## curl -Lo CompCert-3.14-test-4a253242086d1ce78365d1b5cac3201193fa3814.tar.gz https://github.com/AbsInt/CompCert-small-tests/archive/4a253242086d1ce78365d1b5cac3201193fa3814.tar.gz

COMPILER	= ports-gcc

USE_GMAKE	= Yes

CONFIGURE_STYLE = simple
CONFIGURE_ARGS  = -mandir ${PREFIX}/man \
		  -libdir ${PREFIX}/lib \
		  -sharedir ${PREFIX}/share/compcert \
		  -toolprefix e \
		  -no-standard-headers \
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

## test suite files are extracted by extract target
WRKDIST.test = ${WRKDIR}/${GH_PROJECT}-${GH_PROJECT.test}-${GH_COMMIT.test}
pre-test:
	mv ${WRKDIST.test}/* ${WRKDIST}/test/

.include <bsd.port.mk>
