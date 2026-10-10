COMMENT =	lean4 programming language and theorem prover

PKGNAME0 =	lean
V =		4.34.0
PKGNAME =	${PKGNAME0}-v${V}

DIST_TUPLE +=	github leanprover ${PKGNAME0}4 v${V} .

## run-depends on CaDiCal ?
## CMakeLists.txt uses ExternalProjet_Add(cadical...),
## which downloads the source code from github, compiling, and
## place the executable at the build directory.
## here we avoid downloading by preparing the tarball as a distfile.
## and expanding to the build directory at post-configure.
cadical_account =	arminbiere
cadical_project =	cadical
cadical_tag =		rel-2.1.2
DIST_TUPLE +=	github ${cadical_account} ${cadical_project} ${cadical_tag} .

post-configure:
	tar zxf ${DISTDIR}/${cadical_account}-${cadical_project}-${cadical_tag}.tar.gz \
		-C ${WRKBUILD}/cadical/src/cadical/
	cd ${WRKBUILD}/cadical/src/cadical/ && mv ${cadical_project}-${cadical_tag}/* .

# for any port that creates shared libraries.
# both libtool and cmake automatically set filenames based on this variable.
# for libtool- or cmake-based ports, have a look at WRKBUILD/shared_libs.log
#SHARED_LIBS =	???	0.0

CATEGORIES =	math

HOMEPAGE =	https://lean-lang.org/

MAINTAINER =	Yozo TODA <yozo@v007.vaio.ne.jp>

# Apache 2.0
PERMIT_PACKAGE =	Yes

# If pledge is used, annotate with `uses pledge()' in a comment

# "make port-lib-depends-check" can help
#WANTLIB =		???

# Standard for C++ ports:
#COMPILER =		base-clang ports-gcc base-gcc
# Standard for C++11 or newer:
#COMPILER =		base-clang ports-gcc
# Ports that require a non-default compiler that do *not* use C++ should set this:
#COMPILER_LANGS =	c

MODULES =		devel/cmake
USE_NINJA =		No

# Dependencies
#BUILD_DEPENDS =	???
#RUN_DEPENDS =		???

LIB_DEPENDS =		devel/gmp,-main \
			devel/libuv \
			security/openssl/3.5

#TEST_DEPENDS =		???

#MAKE_FLAGS =		???
MAKE_ENV =		MAKE=gmake
#FAKE_FLAGS =		???
#TEST_FLAGS =		???

USE_GMAKE =		Yes

#USE_GROFF =		Yes
# Programs that require GNU libtool to build instead of the OpenBSD one
# should use this option. Add a comment explaining why. Don't use this if
# a port requires libtool's .m4 files but otherwise can use OpenBSD libtool,
# in that case use "BUILD_DEPENDS=devel/libtool" instead.
#USE_LIBTOOL=		gnu
# Set CONFIGURE_STYLE to value corresponding to some standard configuration
#	  perl [modbuild]: perl's MakeMaker Makefile.PL (modbuild: perl's
#	  Module::Build Build.PL)
#	  gnu [autoconf] [old] [dest]: gnu style configure (old: no
#	  sysconfdir), (dest: add DESTDIR, does not handle it),
#	  autoconf: run autoconf to regenerate configure script. implies gnu.
#	  autoreconf: run autoreconf (or other script passed in AUTORECONF) to
#	   generate configure. implies gnu. adds dependencies automatically.
#	XXX: cygnus products do NOT use autoconf for making the main
#		configure from configure.in
#	  imake [noman]: port uses imake for configuration.
#	  (noman: no man page installation)
#	  simple: port has its own configure script
#	  none: override default CONFIGURE_STYLE coming from a module
#	        (needed for some ports using lang/python, etc.)
#CONFIGURE_STYLE =	
#CONFIGURE_SCRIPT =	??? (if other than configure)
#CONFIGURE_ARGS =	???
#CONFIGURE_ENV =	???

# Overrides for default values
#
#CFLAGS =		???
#LDFLAGS =		???
#MAKE_FILE =		???
#PKG_ARCH =		??? (* for arch-independent packages)
#WRKDIST =		??? if other than ${WRKDIR}/${DISTNAME}
#WRKSRC =		??? if other than ${WRKDIST}
#WRKBUILD =		??? if other than ${WRKSRC}
#WRKCONF =		??? if other than ${WRKBUILD}

#ALL_TARGET =		???
#INSTALL_TARGET =	???
#TEST_TARGET =		???

.include <bsd.port.mk>
