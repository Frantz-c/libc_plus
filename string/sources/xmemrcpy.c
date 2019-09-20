/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   xmemrcpy.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mhouppin <mhouppin@le-101.fr>              +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/09/20 11:21:07 by mhouppin     #+#   ##    ##    #+#       */
/*   Updated: 2019/09/20 11:22:38 by mhouppin    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "xstring.h"

void	*xmemrcpy(void *dst, const void *src, size_t size)
{
	while (size--)
	{
		*((char *)dst + size) = *((const char *)src + size);
	}
	return (dst);
}
