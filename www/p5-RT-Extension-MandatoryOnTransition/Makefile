# Created by: Mark Felder <feld@FreeBSD.org>
# $FreeBSD$

PORTNAME=	RT-Extension-MandatoryOnTransition
DISTVERSION=	0.18
CATEGORIES=	www net perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	matthew@FreeBSD.org
COMMENT=	Extension to require core and ticket custom fields on status changes

LICENSE=	GPLv2

OPTIONS_SINGLE=                 RTVERSION
OPTIONS_SINGLE_RTVERSION=       RT42 RT44
RT42_DESC=                      Install for rt-4.2.x (www/rt42)
RT44_DESC=                      Install for rt-4.4.x (www/rt44)
OPTIONS_DEFAULT=                RT44

.include <bsd.port.options.mk>

.for opt in ${OPTIONS_SINGLE_RTVERSION}
.if ${PORT_OPTIONS:M${opt}}
RT_VER=         ${opt:S/RT//}
.endif
.endfor

### Temporary for debugging
#WRKDIR=         ${WRKDIRPREFIX}${.CURDIR}/work${RT_VER}

BUILD_DEPENDS=	${LOCALBASE}/bin/rt:www/rt${RT_VER}
RUN_DEPENDS=	${LOCALBASE}/bin/rt:www/rt${RT_VER}

NO_ARCH=	yes

USES=		perl5
USE_PERL5=	configure

PLIST_SUB+=	RT_VER=${RT_VER}

# Note: You can install using an arbitrary $PREFIX but only if it
# matches the $PREFIX used to install www/rt{42,44}.  Hence ignore
# $PREFIX in the environment and inherit settings from RT.pm
do-configure:
	@cd ${CONFIGURE_WRKSRC} && \
		unset PREFIX && \
		${SETENV} ${CONFIGURE_ENV} ${PERL5} -I${SITE_PERL} ${CONFIGURE_CMD} && \
		${PERL5} -pi -e 's/ doc_(perl|site|\$$\(INSTALLDIRS\))_install$$//' Makefile

post-configure:
	${REINPLACE_CMD} "/RTxPlugin/d" ${WRKSRC}/Makefile

post-install:
	${RM} ${STAGEDIR}${PREFIX}/man/auto/RT/Extension/MandatoryOnTransition/.packlist
	${RMDIR} -p ${STAGEDIR}${PREFIX}/man/auto/RT/Extension/MandatoryOnTransition 2>/dev/null || :

.include <bsd.port.mk>
