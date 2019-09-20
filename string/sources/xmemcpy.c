/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   xmemcpy.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mhouppin <mhouppin@le-101.fr>              +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/09/20 10:55:47 by mhouppin     #+#   ##    ##    #+#       */
/*   Updated: 2019/09/20 10:59:02 by mhouppin    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "xstring.h"

void	*xmemcpy(void *dst, const void *src, size_t size)
{
	intptr_t	dstp;
	intptr_t	srcp;

	dstp = (intptr_t)dst;
	srcp = (intptr_t)src;
	while (size)
	{
		*(char *)dstp = *(char *)srcp;
		dstp++;
		srcp++;
		size--;
	}
	return (dst);
}
