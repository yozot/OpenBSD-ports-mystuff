# $OpenBSD: Makefile,v 1.54 2021/02/13 17:47:48 daniel Exp $

COMMENT=		proof assistant based on a typed lambda calculus

V=			8.13.2
GH_ACCOUNT =		coq
GH_PROJECT =		coq
GH_TAGNAME =		V${V}
DISTNAME =		${GH_PROJECT}-${V}
WRKDIST =		${WRKDIR}/${GH_PROJECT}-${V}

CATEGORIES=		math
HOMEPAGE=		https://coq.inria.fr/

MAINTAINER=		Yozo Toda <yozo@v007.vaio.ne.jp>

# LGPL 2.1
PERMIT_PACKAGE=	Yes

MODULES=	lang/ocaml

BUILD_DEPENDS=	x11/lablgtk3 \
		math/ocaml-zarith \
		shells/bash \
		sysutils/findlib
RUN_DEPENDS=	x11/lablgtk3

DESTDIRNAME=	COQINSTALLPREFIX

USE_GMAKE=	Yes

CONFIGURE_STYLE= simple
CONFIGURE_ARGS=	-prefix ${PREFIX} \
		-with-doc no \
		-coqwebsite https://coq.inria.fr/ \
		-libdir ${PREFIX}/lib/ocaml/coq \
		-mandir ${PREFIX}/man \
		-configdir ${SYSCONFDIR}/xdg/coq

ALL_TARGET=		world

.include <bsd.port.arch.mk>
.if ${PROPERTIES:Mocaml_native}
## we should have WANTLIB only for native architectures
RUN_DEPENDS +=		devel/gmp
WANTLIB += atk-1.0 c cairo cairo-gobject fontconfig freetype gdk-3
WANTLIB += gdk_pixbuf-2.0 gio-2.0 glib-2.0 gmp gobject-2.0 gtk-3 gtksourceview-3.0
WANTLIB += harfbuzz intl m pango-1.0 pangocairo-1.0 pthread z
.else
## target 'byte' doesn't build coqdep.
## target 'world' almost works for byte architecture, but doens't build coqide.
## now trying to add 'coqide-byte' to ALL_TARGET. (see Makefile.build for target 'coqide-byte')
## target install-byte doesn't install coqide.byte.
## here we use the default INSTALL_TARGET and patch some install targets.
ALL_TARGET +=		coqide-byte
.endif

TEST_ENV=		VERBOSE=1
TEST_TARGET=		check

do-build:
	ulimit -Ss 8192 && \
	cd ${WRKSRC} && \
	env -i ${MAKE_ENV} ${MAKE_PROGRAM} ${MAKE_FLAGS} \
		-f ${MAKE_FILE} ${ALL_TARGET}

post-install:
	${INSTALL_DATA_DIR} \
		${PREFIX}/share/doc/coq/
	${INSTALL_DATA} \
		${WRKDIST}/{LICENSE,CREDITS,CONTRIBUTING.md,README.md} \
		${PREFIX}/share/doc/coq/

.include <bsd.port.mk>
