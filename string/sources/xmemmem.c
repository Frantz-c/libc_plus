/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   xmemmem.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mhouppin <mhouppin@le-101.fr>              +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/09/20 14:16:18 by mhouppin     #+#   ##    ##    #+#       */
/*   Updated: 2019/09/20 14:20:14 by mhouppin    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "xstring.h"

void	*xmemmem(const void *big, size_t blen, const void *little, size_t llen)
{
	void	*ptr;
	char	lc;

	if (llen == 0)
		return ((void *)big);
	lc = *(const char *)little;
	while (blen >= llen)
	{
		ptr = xmemchr(big, lc, blen);
		if (ptr == NULL)
			break ;
		blen -= ((size_t)ptr - (size_t)big);
		if (blen < llen)
			break ;
		if (!xmemcmp(ptr, little, llen))
			return (ptr);
		big = (void *)((intptr_t)ptr + 1);
		blen--;
	}
	return (NULL);
}
