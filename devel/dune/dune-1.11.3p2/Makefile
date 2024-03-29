# $OpenBSD: Makefile,v 1.10 2020/06/09 17:34:13 chrisz Exp $

COMMENT =		OCaml build system

CATEGORIES =		devel

VERSION =		1.11.3
DISTNAME =		dune-build-info-${VERSION}
PKGNAME =		dune-${VERSION}
MASTER_SITES =		https://github.com/ocaml/dune/releases/download/${VERSION}/
EXTRACT_SUFX =		.tbz
REVISION =		2

HOMEPAGE =		https://github.com/ocaml/dune

MAINTAINER =		Christopher Zimmermann <chrisz@openbsd.org>

# MIT
PERMIT_PACKAGE =	Yes

WANTLIB =		c m pthread

MODULES =		lang/ocaml

BUILD_DEPENDS =		sysutils/findlib
TEST_DEPENDS =		shells/bash

CONFIGURE_STYLE =	simple
CONFIGURE_ARGS =	--libdir ${PREFIX}/lib/ocaml/

USE_GMAKE =		Yes

MAKE_FLAGS =		DUNE_FLAGS="--display verbose -j ${MAKE_JOBS}"
ALL_TARGET =		release

FAKE_FLAGS =		PREFIX=${PREFIX} LIBDIR=lib/ocaml
INSTALL_TARGET =	install

post-install:
	${INSTALL_DATA_DIR} ${PREFIX}/share/doc/ocaml-dune
	mv ${PREFIX}/doc/* ${PREFIX}/share/doc/ocaml-dune/
	rmdir ${PREFIX}/doc

.include <bsd.port.mk>
