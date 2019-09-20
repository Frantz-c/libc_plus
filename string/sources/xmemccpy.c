/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   xmemccpy.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mhouppin <mhouppin@le-101.fr>              +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/09/20 13:15:19 by mhouppin     #+#   ##    ##    #+#       */
/*   Updated: 2019/09/20 13:19:04 by mhouppin    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "xstring.h"

void	*xmemccpy(void *dst, const void *src, int c, size_t size)
{
	intptr_t	dstp;
	intptr_t	srcp;

	dstp = (intptr_t)dst;
	srcp = (intptr_t)src;
	while (size)
	{
		*(char *)dstp = *(const char *)srcp;
		dstp++;
		if (*(const char *)srcp == c)
			return ((void *)dstp);
		srcp++;
		size--;
	}
	return (NULL);
}
