# $FreeBSD$

PORTNAME=	gdk_pixbuf2
PORTVERSION=	3.3.5
CATEGORIES=	graphics rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Ruby binding for GdkPixbuf2

LICENSE=	LGPL21+

BUILD_DEPENDS=	rubygem-rake>=0:devel/rubygem-rake
RUN_DEPENDS=	rubygem-gio2>=${PORTVERSION}:devel/rubygem-gio2

USES=		gem gnome
USE_GNOME=	gdkpixbuf2
USE_RUBY=	yes

NO_ARCH=	yes

.include <bsd.port.mk>
