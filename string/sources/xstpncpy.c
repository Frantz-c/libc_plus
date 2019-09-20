/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   xstpncpy.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mhouppin <mhouppin@le-101.fr>              +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/09/20 13:23:12 by mhouppin     #+#   ##    ##    #+#       */
/*   Updated: 2019/09/20 13:25:57 by mhouppin    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "xstring.h"

char	*xstpncpy(char *dst, const char *src, size_t size)
{
	char	*ret;

	while (*src && size)
	{
		*dst = *src;
		dst++;
		src++;
		size--;
	}
	ret = dst;
	while (size)
	{
		*dst = '\0';
		dst++;
		size--;
	}
	return (ret);
}
