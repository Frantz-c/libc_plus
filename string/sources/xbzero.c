/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   xbzero.c                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mhouppin <mhouppin@le-101.fr>              +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/09/20 10:53:07 by mhouppin     #+#   ##    ##    #+#       */
/*   Updated: 2019/09/20 11:13:54 by mhouppin    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "xstring.h"

void	xbzero(void *b, size_t size)
{
	uintptr_t	bp;	

	bp = (uintptr_t)b;
	while ((bp & (sizeof(intmax_t) - 1)) && size)
	{
		*(char *)bp = 0;
		bp++;
		size--;
	}
	while (size >= sizeof(intmax_t))
	{
		*(intmax_t *)bp = 0;
		bp += sizeof(intmax_t);
		size -= sizeof(intmax_t);
	}
	while (size)
	{
		*(char *)bp = 0;
		bp++;
		size--;
	}
}
