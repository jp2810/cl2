/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include "avg.h"

bool_t
xdr_numlist (XDR *xdrs, numlist *objp)
{
	register int32_t *buf;

	int i;

	if (xdrs->x_op == XDR_ENCODE) {
		buf = XDR_INLINE (xdrs, (1 +  MAXSIZE )* BYTES_PER_XDR_UNIT);
		if (buf == NULL) {
			 if (!xdr_vector (xdrs, (char *)objp->num, MAXSIZE,
				sizeof (int), (xdrproc_t) xdr_int))
				 return FALSE;
			 if (!xdr_int (xdrs, &objp->len))
				 return FALSE;
		} else {
			{
				register int *genp;

				for (i = 0, genp = objp->num;
					i < MAXSIZE; ++i) {
					IXDR_PUT_LONG(buf, *genp++);
				}
			}
			IXDR_PUT_LONG(buf, objp->len);
		}
		return TRUE;
	} else if (xdrs->x_op == XDR_DECODE) {
		buf = XDR_INLINE (xdrs, (1 +  MAXSIZE )* BYTES_PER_XDR_UNIT);
		if (buf == NULL) {
			 if (!xdr_vector (xdrs, (char *)objp->num, MAXSIZE,
				sizeof (int), (xdrproc_t) xdr_int))
				 return FALSE;
			 if (!xdr_int (xdrs, &objp->len))
				 return FALSE;
		} else {
			{
				register int *genp;

				for (i = 0, genp = objp->num;
					i < MAXSIZE; ++i) {
					*genp++ = IXDR_GET_LONG(buf);
				}
			}
			objp->len = IXDR_GET_LONG(buf);
		}
	 return TRUE;
	}

	 if (!xdr_vector (xdrs, (char *)objp->num, MAXSIZE,
		sizeof (int), (xdrproc_t) xdr_int))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->len))
		 return FALSE;
	return TRUE;
}
