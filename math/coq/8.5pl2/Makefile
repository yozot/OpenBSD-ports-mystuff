# $OpenBSD: Makefile.template,v 1.75 2016/03/20 17:19:49 naddy Exp $

COMMENT=		proof assistant based on a typed lambda calculus

V=			8.5pl2
DISTNAME=		coq-$V

CATEGORIES=		math
HOMEPAGE=		https://coq.inria.fr/

MAINTAINER=		Yozo Toda <yozo@v007.vaio.ne.jp>

# LGPL 2.1
PERMIT_PACKAGE_CDROM=	Yes

WANTLIB += X11 Xcomposite Xcursor Xdamage Xext Xfixes Xi Xinerama
WANTLIB += Xrandr Xrender atk-1.0 c cairo fontconfig freetype
WANTLIB += gdk-x11-2.0 gdk_pixbuf-2.0 gio-2.0 glib-2.0 gobject-2.0
WANTLIB += gtk-x11-2.0 gtksourceview-2.0 m pango-1.0 pangocairo-1.0
WANTLIB += pangoft2-1.0 pthread z

MASTER_SITES=	${HOMEPAGE}distrib/V${V}/files/

MODULES=	lang/ocaml

RUN_DEPENDS=	x11/lablgtk2
BUILD_DEPENDS=	${RUN_DEPENDS} \
		lang/ocaml-camlp4 \
		sysutils/findlib

DESTDIRNAME=	COQINSTALLPREFIX

USE_GMAKE=	Yes

CONFIGURE_STYLE= simple
CONFIGURE_ARGS=	-emacslib ${PREFIX}/share/emacs/site-lisp \
		-prefix ${PREFIX} \
		-mandir ${PREFIX}/man \
		-configdir ${SYSCONFDIR}/xdg/coq \
		-with-doc no \
		-usecamlp4

ALL_TARGET=		world
INSTALL_TARGET=		install
TEST_TARGET=		check

post-install:
	cd ${WRKDIST}; ${INSTALL_DATA} LICENSE COPYRIGHT CREDITS CHANGES \
	    COMPATIBILITY ${PREFIX}/share/doc/coq/
	${INSTALL_DATA_DIR} ${PREFIX}/share/examples/coq/

.include <bsd.port.mk>
