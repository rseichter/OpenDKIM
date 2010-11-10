/*
**  Copyright (c) 2010, The OpenDKIM Project.  All rights reserved.
**
**  $Id: dkim-dns.h,v 1.2.10.1 2010/10/27 21:43:08 cm-msk Exp $
*/

#ifndef _DKIM_DNS_H_
#define _DKIM_DNS_H_

#ifndef lint
static char dkim_dns_h_id[] = "@(#)$Id: dkim-dns.h,v 1.2.10.1 2010/10/27 21:43:08 cm-msk Exp $";
#endif /* !lint */

/* libopendkim includes */
#include "dkim.h"

/* prototypes */
extern int dkim_res_cancel __P((void *, void *));
extern int dkim_res_query __P((void *, int, unsigned char *, unsigned char *,
                               size_t, void **));
extern int dkim_res_waitreply __P((void *, void *, struct timeval *,
                                   size_t *, int *, int *));

#endif /* ! _DKIM_DNS_H_ */
