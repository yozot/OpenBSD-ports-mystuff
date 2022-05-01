COMMENT =	a fast web fuzzer written in go

MODGO_MODNAME =	github.com/ffuf/ffuf
MODGO_VERSION =	${GH_TAGNAME}

GH_ACCOUNT =	ffuf
GH_PROJECT =	ffuf
GH_TAGNAME =	v1.4.1

CATEGORIES =	security
HOMEPAGE =	https://github.com/ffuf/ffuf/
MAINTAINER =	Yozo TODA <yozo@v007.vaio.ne.jp>

# MIT License
PERMIT_PACKAGE =	Yes

WANTLIB +=	c pthread

MODULES =	lang/go

MODGO_MODULES =	\
	github.com/davecgh/go-spew	 v1.1.1 \
	github.com/pelletier/go-toml	 v1.8.1

NO_TEST =		Yes

post-install:
	${INSTALL_DATA_DIR} ${PREFIX}/share/doc/${PKGNAME}
	for i in README.md LICENSE CHANGELOG.md ffufrc.example; do \
	  ${INSTALL_DATA} ${WRKSRC}/$${i} ${PREFIX}/share/doc/${PKGNAME} ; \
	done

.include <bsd.port.mk>
