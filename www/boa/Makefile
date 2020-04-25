# $OpenBSD: Makefile.template,v 1.87 2020/03/22 17:18:01 cwen Exp $

COMMENT =	single-tasking http server

DISTNAME =	boa-20171212

GH_ACCOUNT =	gpg
GH_PROJECT =	boa
GH_COMMIT =	7b13e12faf3ca5543b371987a89fe80cf31ff43c

CATEGORIES =	www

HOMEPAGE =	https://github.com/gpg/boa

MAINTAINER =		Yozo TODA <yozo@v007.vaio.ne.jp>

# GPL v2
PERMIT_PACKAGE =	Yes

# If pledge is used, annotate with `uses pledge()' in a comment

WANTLIB +=		c

CONFIGURE_STYLE =	gnu

NO_TEST =		Yes

do-install:
	${INSTALL_PROGRAM} ${WRKBUILD}/src/boa ${PREFIX}/sbin/
	${INSTALL_PROGRAM} ${WRKBUILD}/src/boa_indexer ${PREFIX}/sbin/
	${INSTALL_MAN} ${WRKBUILD}/docs/boa.8 ${PREFIX}/man/man8/
	${INSTALL_DATA_DIR} ${PREFIX}/share/doc/boa
	${INSTALL_DATA} ${WRKBUILD}/examples/* ${PREFIX}/share/doc/boa/

.include <bsd.port.mk>
