# $OpenBSD: Makefile,v 1.23 2019/01/21 19:07:58 jca Exp $

ONLY_FOR_ARCHS=	amd64 i386 sparc64
BROKEN-i386=	ICE building src/interp/engine/interp.c

COMMENT=	free, standards-compliant jvm with a small footprint

DISTNAME=	jamvm-1.5.4
CATEGORIES=	lang
MASTER_SITES=	${MASTER_SITE_SOURCEFORGE:=jamvm/}
REVISION=	1

SHARED_LIBS=	jvm	0.0

HOMEPAGE=	http://jamvm.sourceforge.net/

# GPLv2
PERMIT_PACKAGE_CDROM=	Yes

WANTLIB=	c m pthread z

.if ${MACHINE_ARCH} == "sparc64"
WANTLIB+=	ffi

LIB_DEPENDS=	devel/libffi
.endif

BUILD_DEPENDS=	lang/jikes>=1.22 \
		lang/classpath>=0.98

RUN_DEPENDS=	lang/classpath>=0.98

USE_GMAKE=	Yes
SEPARATE_BUILD=	Yes
CONFIGURE_STYLE= gnu
CONFIGURE_ARGS=	--includedir=${LOCALBASE}/include/jamvm \
		--libdir=${LOCALBASE}/lib/jamvm \
		--with-classpath-install-dir=${LOCALBASE} \
		--disable-tls

.if ${MACHINE_ARCH} == "sparc64"
CONFIGURE_ENV=	CPPFLAGS="-I${LOCALBASE}/include" \
		LDFLAGS="-L${LOCALBASE}/lib"
.endif

.if ${MACHINE_ARCH} == "amd64"
CFLAGS +=	-mno-retpoline
.endif

post-install:
	@chown -R ${SHAREOWN}:${SHAREGRP} ${PREFIX}/share

.include <bsd.port.mk>
