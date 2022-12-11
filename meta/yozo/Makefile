COMMENT =	my local set of packages

PKGNAME =	yozo-1.0
REVISION =	3

MAINTAINER =		Yozo TODA <yozo@v007.vaio.ne.jp>

## from meta/Makefile.inc
CATEGORIES=		meta
DISTFILES=		#empty
NO_BUILD=		Yes
NO_TEST=		Yes
PKG_ARCH=		*
PERMIT_PACKAGE=	Yes
do-install:

RUN_DEPENDS =	japanese/kterm,xaw3d \
		converters/base64 \
		converters/qprint \
		textproc/aspell/core \
		archivers/lha \
		archivers/p7zip \
		security/emldump \
		security/pgpdump \
		security/gnupg,ldap \
		security/rnp \
		www/w3m,image \
		mail/nmh,sasl \
		devel/git \
		misc/magicpoint \
		editors/emacs,gtk3 \
		devel/splint \
		devel/cppcheck

.include <bsd.port.mk>
