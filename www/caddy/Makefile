# $OpenBSD: Makefile.template,v 1.91 2021/11/09 13:43:15 kn Exp $

COMMENT =	a web server written in Go
DISTNAME =	caddy-${MODGO_VERSION}

MODGO_MODNAME =	github.com/caddyserver/caddy/v2

CATEGORIES =	www

HOMEPAGE =	https://caddyserver.com/

MAINTAINER =		Yozo TODA <yozo@v007.vaio.ne.jp>

# Apache 2.0
PERMIT_PACKAGE =	Yes

# "make port-lib-depends-check" can help
WANTLIB +=		c pthread

MODULES =		lang/go

.include "modules.inc"

post-install:
	${INSTALL_DATA_DIR} ${PREFIX}/share/doc/${PKGNAME}
	${INSTALL_DATA} ${WRKSRC}/LICENSE ${PREFIX}/share/doc/${PKGNAME}
	${INSTALL_DATA} ${WRKSRC}/README.md ${PREFIX}/share/doc/${PKGNAME}

.include <bsd.port.mk>
