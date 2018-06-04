# $OpenBSD: Makefile,v 1.35 2018/05/20 08:25:36 espie Exp $

COMMENT=		proof assistant based on a typed lambda calculus

V=			8.6.1
DISTNAME=		coq-$V

CATEGORIES=		math
HOMEPAGE=		https://coq.inria.fr/

MAINTAINER=		Yozo Toda <yozo@v007.vaio.ne.jp>

# LGPL 2.1
PERMIT_PACKAGE_CDROM=	Yes

WANTLIB += X11 Xcomposite Xcursor Xdamage Xext Xfixes Xi Xinerama
WANTLIB += Xrandr Xrender atk-1.0 c cairo fontconfig freetype
WANTLIB += gdk-x11-2.0 gdk_pixbuf-2.0 gio-2.0 glib-2.0 gobject-2.0
WANTLIB += gtk-x11-2.0 intl m pango-1.0 pangocairo-1.0 pangoft2-1.0
WANTLIB += pthread z
WANTLIB += fribidi gtksourceview-2.0

MASTER_SITES=	https://coq.inria.fr/distrib/V${V}/files/

MODULES=	lang/ocaml

BUILD_DEPENDS=	x11/lablgtk2 \
		x11/gtksourceview \
		lang/ocaml-camlp5 \
		sysutils/findlib \
		devel/fribidi 
RUN_DEPENDS=	x11/lablgtk2

## see coq-8.6.1/Makefile.install, which uses gmake's "substitution reference" mechanism
## to generate the fake install path like this around line 39:
##   FULLBINDIR=$(BINDIR:"$(OLDROOT)%="$(COQINSTALLPREFIX)%)
## here we intend to replace whole BINDIR with COQINSTALLPREFIX (WRKINST)
FAKE_FLAGS=	OLDROOT=""
DESTDIRNAME=	COQINSTALLPREFIX

USE_GMAKE=	Yes

CONFIGURE_STYLE= simple
CONFIGURE_ARGS=	-emacslib ${PREFIX}/share/emacs/site-lisp \
		-prefix ${PREFIX} \
		-mandir ${PREFIX}/man \
		-configdir ${SYSCONFDIR}/xdg/coq \
		-with-doc no

## can we remove this include?
## .include <bsd.port.arch.mk>

ALL_TARGET=		world

INSTALL_TARGET=		install
TEST_TARGET=		check

post-install:
	cd ${WRKDIST}; ${INSTALL_DATA} LICENSE COPYRIGHT CREDITS CHANGES \
	    COMPATIBILITY ${PREFIX}/share/doc/coq/
	${INSTALL_DATA_DIR} ${PREFIX}/share/examples/coq/

.include <bsd.port.mk>
