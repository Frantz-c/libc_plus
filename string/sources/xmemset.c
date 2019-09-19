/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   xmemset.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mhouppin <mhouppin@le-101.fr>              +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/09/19 10:16:19 by mhouppin     #+#   ##    ##    #+#       */
/*   Updated: 2019/09/19 10:23:18 by mhouppin    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "xstring.h"

void	*xmemset(void *b, int c, size_t size)
{
	uintptr_t	bp;
	uintmax_t	k;

	bp = (uintptr_t)b;
	k = (uintmax_t)(uint8_t)c * LMASK;
	while ((bp & (sizeof(uintmax_t) - 1)) && size)
	{
		*(uint8_t *)bp = (uint8_t)k;
		bp++;
		size--;
	}
	while (size >= sizeof(uintmax_t))
	{
		*(uintmax_t *)bp = k;
		bp += sizeof(uintmax_t);
		size -= sizeof(uintmax_t);
	}
	while (size)
	{
		*(uint8_t *)bp = (uint8_t)k;
		bp++;
		size--;
	}
	return (b);
}
