/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   xstrncpy.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mhouppin <mhouppin@le-101.fr>              +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/09/20 11:51:36 by mhouppin     #+#   ##    ##    #+#       */
/*   Updated: 2019/09/20 11:53:25 by mhouppin    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "xstring.h"

char	*xstrncpy(char *dst, const char *src, size_t size)
{
	char	*ret;

	ret = dst;
	while (*src && size)
	{
		*dst = *src;
		dst++;
		src++;
		size--;
	}
	while (size)
	{
		*dst = '\0';
		dst++;
		size--;
	}
	return (ret);
}
