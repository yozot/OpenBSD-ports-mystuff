COMMENT =	a platform for deductive program verification

V =		1.5.0
DISTNAME =	why3-${V}

CATEGORIES =	math
HOMEPAGE =	https://why3.lri.fr/
MAINTAINER =		Yozo TODA <yozo@v007.vaio.ne.jp>

# LGPL2.1
PERMIT_PACKAGE =	Yes

WANTLIB += c fontconfig freetype m pthread z
WANTLIB += atk-1.0 cairo cairo-gobject gdk-3 gdk_pixbuf-2.0 gio-2.0
WANTLIB += glib-2.0 gobject-2.0 gtk-3 gtksourceview-3.0 harfbuzz
WANTLIB += intl pango-1.0 pangocairo-1.0

MASTER_SITES =		https://gitlab.inria.fr/why3/why3/-/archive/${V}/

MODULES =		lang/ocaml
BUILD_DEPENDS =		sysutils/findlib \
			devel/ocaml-menhir \
			math/ocaml-num \
			x11/lablgtk3
RUN_DEPENDS =		math/coq

USE_GMAKE =		Yes
CONFIGURE_STYLE =	autoconf

AUTOCONF_VERSION =	2.69
AUTOMAKE_VERSION =	1.16
do-gen:
	cd ${WRKSRC}; ${AUTOCONF_ENV} ./autogen.sh

.include <bsd.port.mk>
