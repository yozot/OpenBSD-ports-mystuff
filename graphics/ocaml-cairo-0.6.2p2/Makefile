# $OpenBSD: Makefile,v 1.10 2021/12/10 04:10:59 daniel Exp $

COMMENT =	binding to cairo, a 2D vector graphics library
CATEGORIES =	graphics

PROJECT =	ocaml-cairo
TAGNAME =	0.6.2
DISTNAME =	ocaml-cairo-${TAGNAME}{cairo2-${TAGNAME}}
MASTER_SITES =	https://github.com/Chris00/ocaml-cairo/releases/download/${TAGNAME}/
EXTRACT_SUFX =	.tbz
PKGNAME =	${PROJECT}-${TAGNAME}
REVISION =	2

# LGPL 3.0
PERMIT_PACKAGE = Yes

WANTLIB += X11 Xcomposite Xcursor Xdamage Xext Xfixes Xi Xinerama
WANTLIB += Xrandr Xrender atk-1.0 cairo fontconfig freetype gdk-x11-2.0
WANTLIB += gdk_pixbuf-2.0 gio-2.0 glib-2.0 gobject-2.0 gtk-x11-2.0
WANTLIB += harfbuzz intl pango-1.0 pangocairo-1.0 pangoft2-1.0
WANTLIB += z

MODULES =	lang/ocaml

BUILD_DEPENDS = devel/dune \
		devel/dune,-configurator \
		sysutils/findlib \
		graphics/ocaml-graphics \
		x11/lablgtk2

LIB_DEPENDS =	devel/pango \
		graphics/gdk-pixbuf2 \
		x11/gtk+2

WRKDIST =	${WRKDIR}/cairo2-${TAGNAME}
ALL_TARGET =

post-install:
	${INSTALL_DATA_DIR} ${PREFIX}/share/doc/ocaml-${PROJECT}
	mv ${PREFIX}/doc/* ${PREFIX}/share/doc/ocaml-${PROJECT}/
	rmdir ${PREFIX}/doc

.include <bsd.port.mk>
