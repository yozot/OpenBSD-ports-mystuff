COMMENT =	jigmo, free kanji fonts

MODFONT_FAMILY =	Jigmo
MODFONT_VERSION =	20250912
MODFONT_FONTFILES =	Jigmo.ttf Jigmo2.ttf Jigmo3.ttf
MODFONT_DOCFILES =	README.txt LICENSE.txt THANKS.txt
DISTNAME =		${MODFONT_FAMILY}-${MODFONT_VERSION}

HOMEPAGE =	https://kamichikoichi.github.io/jigmo/

MAINTAINER =	Yozo TODA <yozo@v007.vaio.ne.jp>

# CC0 1.0 Universal
PERMIT_PACKAGE =	Yes

SITES =		${HOMEPAGE}

MODULES =		font

NO_BUILD =		Yes
NO_TEST =		Yes

do-extract:
	mkdir ${WRKSRC} && cd ${WRKSRC} && ${UNZIP} ${DISTDIR}/${DISTNAME}${EXTRACT_SUFX}

.include <bsd.port.mk>
