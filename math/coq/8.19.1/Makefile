COMMENT=		proof assistant based on a typed lambda calculus

V=			8.19.1
GH_ACCOUNT =		coq
GH_PROJECT =		coq
GH_TAGNAME =		V${V}

CATEGORIES=		math
HOMEPAGE=		https://coq.inria.fr/

MAINTAINER=		Yozo Toda <yozo@v007.vaio.ne.jp>

USE_NOEXECONLY =	Yes

# LGPL 2.1
PERMIT_PACKAGE=	Yes

## without coqide target we don't need the followings...
## WANTLIB += atk-1.0 c cairo cairo-gobject fontconfig freetype gdk-3
## WANTLIB += gdk_pixbuf-2.0 gio-2.0 glib-2.0 gmp gobject-2.0 gtk-3
## WANTLIB += gtksourceview-3.0 harfbuzz intl m pango-1.0 pangocairo-1.0
## WANTLIB += pthread

MODULES=	lang/ocaml

BUILD_DEPENDS=	x11/lablgtk3 \
		math/ocaml-zarith \
		shells/bash \
		sysutils/findlib \
		devel/dune

RUN_DEPENDS=	x11/lablgtk3 \
		math/ocaml-zarith
LIB_DEPENDS=	devel/gmp

USE_GMAKE=	Yes

CONFIGURE_STYLE= simple
CONFIGURE_ARGS=	-prefix ${PREFIX} \
		-coqwebsite='https://coq.inria.fr/' \
		-configdir ${SYSCONFDIR}/xdg/coq

.include <bsd.port.arch.mk>
.if !${PROPERTIES:Mocaml_native}
RUN_DEPENDS +=		math/ocaml-zarith
.endif

# Unit Tests need the OUnit Testing framework and will fail
TEST_ENV=		COQ_USE_DUNE=1 \
			DUNEOPT='--display=short'
TEST_TARGET=		test-suite
TEST_DEPENDS=		textproc/gdiff \
			devel/gmake

post-configure:
	cd ${WRKSRC} && ${MAKE_PROGRAM} dunestrap
## coq-core,coq-stdlib,coqide-server build work, but coqide build fails.
## explore coqide target later...
do-build:
	ulimit -Ss 8192 && \
	cd ${WRKSRC} && \
	echo "\nXXXXXX coq-core,coq-stdlib,coqide-server" && \
	dune build -j${MAKE_JOBS} -p coq-core,coq-stdlib,coqide-server,coq --display=verbose && \
	echo "\nXXXXXX done"
## 	dune build -j${MAKE_JOBS} -p coq-core,coq-stdlib,coqide,coqide-server,coq --display=short
do-install:
	cd ${WRKSRC} && \
	dune install -j1 coq coq-core coq-stdlib coqide-server
## 	dune install -j1 coq coq-core coq-stdlib coqide coqide-server

# create bin/coq_environment.txt
# see https://github.com/coq/coq/blob/v8.15/INSTALL.md
post-install:
.if !${PROPERTIES:Mocaml_native}
	cd ${PREFIX}/bin && \
	ln -s coqproofworker.opt coqproofworker.byte && \
	ln -s coqqueryworker.opt coqqueryworker.byte && \
	ln -s coqtacticworker.opt coqtacticworker.byte
.endif
	echo "COQLIB=\"${TRUEPREFIX}/lib/ocaml/coq\"" \
		> ${PREFIX}/bin/coq_environment.txt

pre-test:
	ln -fs ${LOCALBASE}/bin/gmake ${WRKDIR}/bin/make
	ln -fs ${LOCALBASE}/bin/gdiff ${WRKDIR}/bin/diff

.include <bsd.port.mk>
