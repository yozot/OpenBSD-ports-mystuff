# $OpenBSD: Makefile.template,v 1.76 2017/02/25 16:04:20 danj Exp $

COMMENT =	an implementation of the SSL/TLS protocol written in C

DISTNAME =	bearssl-0.5

SHARED_LIBS +=	bearssl 0.0

CATEGORIES =	security

HOMEPAGE =	https://www.bearssl.org/

MAINTAINER =		Yozo TODA <yozo@v007.vaio.ne.jp>

# MIT
PERMIT_PACKAGE_CDROM =	Yes

# "make port-lib-depends-check" can help
WANTLIB +=		c

MASTER_SITES =		https://www.bearssl.org/

USE_GMAKE =		Yes

MAKE_FLAGS = LIBbearssl_VERSION=${LIBbearssl_VERSION}

## default compiler is gcc and the output goes to build/.
## the output goes to bclang/ when using clang.

X_BUILDOUTPUT = "build"

.include <bsd.port.arch.mk>
.if ${PROPERTIES:Mclang}
MAKE_FLAGS += CONF=UnixClang
X_BUILDOUTPUT = "bclang"
.endif

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/${X_BUILDOUTPUT}/brssl  ${PREFIX}/bin/brssl
	${INSTALL_DATA}    ${WRKSRC}/${X_BUILDOUTPUT}/lib*   ${PREFIX}/lib/
	${INSTALL_DATA}    ${WRKSRC}/inc/*                   ${PREFIX}/include/
	${INSTALL_DATA_DIR}    ${PREFIX}/share/examples/bearssl/
	${INSTALL_DATA}    ${WRKSRC}/samples/*               ${PREFIX}/share/examples/bearssl/

do-test:
	cd ${WRKSRC}/${X_BUILDOUTPUT}/ && ./testspeed all
	cd ${WRKSRC}/${X_BUILDOUTPUT}/ && ./testcrypto all
	cd ${WRKSRC}/${X_BUILDOUTPUT}/ && ./testx509

.include <bsd.port.mk>
