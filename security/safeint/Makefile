COMMENT =	a library for C/C++ that manages integer overflows

GH_ACCOUNT =	dcleblanc
GH_PROJECT =	SafeInt
GH_TAGNAME =	3.0.28

CATEGORIES =	security

MAINTAINER =		Yozo TODA <yozo@v007.vaio.ne.jp>

# MIT
PERMIT_PACKAGE =	Yes

# If pledge is used, annotate with `uses pledge()' in a comment

## we don't need to build anything.
## how should we enable test target?
MODULES =		devel/cmake
TEST_DEPENDS =	lang/gcc/11
NO_BUILD = Yes

do-install:
	${INSTALL_DATA_DIR} ${PREFIX}/include/${GH_PROJECT}
	for f in SafeInt.hpp safe_math.h safe_math_impl.h ; do \
	  ${INSTALL_DATA} ${WRKSRC}/$${f} ${PREFIX}/include/${GH_PROJECT}/ ; \
	done
	${INSTALL_DATA_DIR} ${PREFIX}/share/doc/${GH_PROJECT}
	for f in CODE_OF_CONDUCT.md CONTRIBUTING.md LICENSE README.md helpfile.md ; do \
	  ${INSTALL_DATA} ${WRKSRC}/$${f} ${PREFIX}/share/doc/${GH_PROJECT} ; \
	done

.include <bsd.port.mk>
