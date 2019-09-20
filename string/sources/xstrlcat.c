/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   xstrlcat.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mhouppin <mhouppin@le-101.fr>              +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/09/20 14:30:27 by mhouppin     #+#   ##    ##    #+#       */
/*   Updated: 2019/09/20 14:32:36 by mhouppin    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "xstring.h"

size_t	xstrlcat(char *dst, const char *src, size_t size)
{
	size_t	dstlen;
	size_t	srclen;

	dstlen = xstrnlen(dst, size);
	srclen = xstrlen(src);
	if (dstlen != size)
	{
		if (srclen >= size - dstlen)
		{
			xmemcpy(dst + dstlen, src, size - dstlen - 1);
			dst[size - 1] = '\0';
		}
		else
			xmemcpy(dst + dstlen, src, srclen + 1);
	}
	return (dstlen + srclen);
}
