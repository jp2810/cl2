/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include "idle.h"

bool_t
xdr_twono (XDR *xdrs, twono *objp)
{
	register int32_t *buf;

	 if (!xdr_int (xdrs, &objp->num1))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->num2))
		 return FALSE;
	return TRUE;
}
