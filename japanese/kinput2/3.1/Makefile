COMMENT =	input server for X11 applications

DISTNAME =	kinput2-${COMMIT}
PKGNAME =	kinput2-3.1

COMMIT =	34c9ae88e56495cf508a164f8063729dba193824
## COMMIT_SHORT =	34c9ae8
DIST_TUPLE +=	github hrs-allbsd kinput2 ${COMMIT} .

# for any port that creates shared libraries.
# both libtool and cmake automatically set filenames based on this variable.
# for libtool- or cmake-based ports, have a look at WRKBUILD/shared_libs.log
#SHARED_LIBS =	???	0.0

CATEGORIES =	japanese

MAINTAINER =		Yozo TODA <yozo@v007.vaio.ne.jp>

# SRA OSS (== public domain, as my understanding)
PERMIT_PACKAGE =	Yes

WANTLIB += ICE SM X11 Xau Xaw Xdmcp Xext Xmu Xpm Xt c canna16

LIB_DEPENDS =		japanese/canna/3.8

CONFIGURE_STYLE =	imake

## DEBUG_CONFIGURE_ARGS =	CDEBUGFLAGS="-g -DDEBUG"
DEBUG_CONFIGURE_ARGS =	DefaultCDebugFlags="-g -DDEBUG"
DEBUG_PACKAGES = ${BUILD_PACKAGES}


NO_TEST =		Yes

INSTALL_TARGET =	install install.man

PORT_DOCDIR=${PREFIX}/share/doc/kinput2
post-install:
	${INSTALL_DATA_DIR} ${PORT_DOCDIR}
	${INSTALL_DATA} ${WRKSRC}/README ${PORT_DOCDIR}
	${INSTALL_DATA} ${WRKSRC}/NEWS ${PORT_DOCDIR}
	@(cd ${WRKSRC}/doc; tar -cf - . | \
		(tar -C ${PORT_DOCDIR} -xf -))

.include <bsd.port.mk>
