COMMENT =	a tiny racket for scripting

DIST_TUPLE +=	github racket zuo v1.12 .

CATEGORIES =	sysutils

HOMEPAGE =	https://github.com/racket/zuo

MAINTAINER =		Yozo TODA <yozo@v007.vaio.ne.jp>

## see https://github.com/racket/zuo/blob/main/LICENSE.txt
## "........
## This component of Racket is distributed under the under the Apache 2.0
## and MIT licenses. The user can choose the license under which they
## will be using the software. There may be other licenses within the
## distribution with which the user must also comply.
## ........"
PERMIT_PACKAGE =	Yes

# If pledge is used, annotate with `uses pledge()' in a comment

WANTLIB +=		c

CONFIGURE_STYLE =	gnu

ALL_TARGET =		zuo

.include <bsd.port.mk>
