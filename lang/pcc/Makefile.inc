# Other architectures not fully supported yet
ONLY_FOR_ARCHS = amd64 i386 powerpc mips64

DISTVER =	20261023
PCCVER =	1.2.0.DEVEL
PKGVER =	${PCCVER}.${DISTVER}

MAINTAINER =	Yozo TODA <yozo@v007.vaio.ne.jp>

CATEGORIES ?=	lang

# permissive BSD and ISC style
PERMIT_PACKAGE =	Yes

# do not include OSREV
CONFIG ?=		${MACHINE_ARCH:S/amd64/x86_64/}-unknown-openbsd

CONFIGURE_STYLE ?=	gnu
CONFIGURE_ARGS ?=	--build=${CONFIG}

NO_TEST ?=		Yes
