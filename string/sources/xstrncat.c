/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   xstrncat.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mhouppin <mhouppin@le-101.fr>              +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/09/20 11:42:22 by mhouppin     #+#   ##    ##    #+#       */
/*   Updated: 2019/09/20 11:45:05 by mhouppin    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "xstring.h"

char	*xstrncat(char *dst, const char *src, size_t size)
{
	char	*ret;

	ret = dst;
	while (*dst)
		dst++;
	while (*src && size)
	{
		*dst = *src;
		dst++;
		src++;
		size--;
	}
	*dst = '\0';
	return (ret);
}
