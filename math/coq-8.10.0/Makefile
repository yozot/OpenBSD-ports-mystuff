# $OpenBSD: Makefile,v 1.46 2019/10/07 06:40:15 chrisz Exp $

COMMENT=		proof assistant based on a typed lambda calculus

V=			8.10.0
GH_ACCOUNT =		coq
GH_PROJECT =		coq
GH_TAGNAME =		V${V}
DISTNAME =		${GH_PROJECT}-${V:S/+//}
WRKDIST =		${WRKDIR}/${GH_PROJECT}-${V:S/+/-/}

CATEGORIES=		math
HOMEPAGE=		https://coq.inria.fr/

MAINTAINER=		Yozo Toda <yozo@v007.vaio.ne.jp>

# LGPL 2.1
PERMIT_PACKAGE=	Yes

WANTLIB += atk-1.0 c cairo cairo-gobject fontconfig freetype gdk-3
WANTLIB += gdk_pixbuf-2.0 gio-2.0 glib-2.0 gobject-2.0 gtk-3 gtksourceview-3.0
WANTLIB += intl m pango-1.0 pangocairo-1.0 pthread z

MODULES=	lang/ocaml \
		lang/python
MODPY_RUNDEP=	No
MODPY_TESTDEP=	Yes
## looks like both python2 and python3 are required in test-suite.
## (see test-suite/coq-makefile/timing/precomputed-time-tests/003-non-utf8/run.sh)
## coq already depends on lablgtk3 on gtk+3 on glib2 on python3,
## we need here python2 for TEST_DEPENDS.
## is it correct to define MODPY_VERSION here?
MODPY_VERSION=	${MODPY_DEFAULT_VERSION_2}

BUILD_DEPENDS=	x11/lablgtk3 \
		math/ocaml-num \
		shells/bash \
		sysutils/findlib
RUN_DEPENDS=	x11/lablgtk3

DESTDIRNAME=	COQINSTALLPREFIX

USE_GMAKE=	Yes

CONFIGURE_STYLE= simple
CONFIGURE_ARGS=	-prefix ${PREFIX} \
		-libdir ${PREFIX}/lib/ocaml/coq \
		-mandir ${PREFIX}/man \
		-configdir ${SYSCONFDIR}/xdg/coq

.include <bsd.port.arch.mk>
.if ${PROPERTIES:Mocaml_native}
ALL_TARGET=		world
INSTALL_TARGET=		install
.else
# Order is important!
ALL_TARGET=		byte coq documentation \
			bin/coqide coqide-files theories/Init/Prelude.vo
INSTALL_TARGET=		install-coq install-byte install-meta
.endif

TEST_DEPENDS=	textproc/gdiff \
		net/rsync
 
MAKE_ENV=		PRINT_LOGS=1

TEST_ENV=		VERBOSE=1
TEST_TARGET=		check

do-build:
	ulimit -Ss 8192 && \
	cd ${WRKSRC} && \
	env -i ${MAKE_ENV} ${MAKE_PROGRAM} ${MAKE_FLAGS} \
		-f ${MAKE_FILE} ${ALL_TARGET}
 
pre-test:
	ln -sf ${LOCALBASE}/bin/gdiff ${WRKDIR}/bin/diff
	ln -sf ${LOCALBASE}/bin/gmake ${WRKDIR}/bin/make
	ln -sf ${MODPY_BIN} ${WRKDIR}/bin/python

post-install:
	${INSTALL_DATA_DIR} \
		${PREFIX}/share/doc/coq/
	${INSTALL_DATA} \
		${WRKDIST}/{LICENSE,CREDITS,CONTRIBUTING.md,README.md} \
		${PREFIX}/share/doc/coq/

.include <bsd.port.mk>
