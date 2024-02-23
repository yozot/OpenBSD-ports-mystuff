# $OpenBSD: Makefile,v 1.39 2019/07/14 00:39:34 naddy Exp $

COMMENT=	archive files using LZW compression (.lzh files)

DISTNAME=	lha-1.14i-ac20210926
CATEGORIES=	archivers

HOMEPAGE=       https://lha.osdn.jp/

MAINTAINER=	Yozo Toda <yozo@v007.vaio.ne.jp>

# Restrictive
PERMIT_PACKAGE=	Yes
WANTLIB=		c

GH_ACCOUNT =	jca02266
GH_PROJECT =	lha
GH_TAGNAME =	release-20210926


CONFIGURE_STYLE=gnu autoreconf
AUTOCONF_VERSION =	2.71
AUTOMAKE_VERSION =	1.16

.include <bsd.port.mk>
