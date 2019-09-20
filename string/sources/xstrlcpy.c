/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   xstrlcpy.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mhouppin <mhouppin@le-101.fr>              +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/09/20 14:33:11 by mhouppin     #+#   ##    ##    #+#       */
/*   Updated: 2019/09/20 14:34:54 by mhouppin    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "xstring.h"

size_t	xstrlcpy(char *dst, const char *src, size_t size)
{
	size_t	srclen;

	srclen = xstrlen(src);
	if (srclen < size)
		xmemcpy(dst, src, srclen + 1);
	else
	{
		xmemcpy(dst, src, size - 1);
		dst[size - 1] = '\0';
	}
	return (srclen);
}
