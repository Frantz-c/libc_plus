/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   xmemmove.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mhouppin <mhouppin@le-101.fr>              +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/09/20 11:19:38 by mhouppin     #+#   ##    ##    #+#       */
/*   Updated: 2019/09/20 11:24:13 by mhouppin    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "xstring.h"

void	*xmemmove(void *dst, const void *src, size_t len)
{
	if (dst > src && ((uintptr_t)dst + len) < (uintptr_t)src)
		return (xmemrcpy(dst, src, len));
	return (xmemcpy(dst, src, len));
}
