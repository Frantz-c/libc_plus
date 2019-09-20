/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   xstrcpy.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mhouppin <mhouppin@le-101.fr>              +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/09/20 11:35:20 by mhouppin     #+#   ##    ##    #+#       */
/*   Updated: 2019/09/20 11:37:24 by mhouppin    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "xstring.h"

char	*xstrcpy(char *dst, const char *src)
{
	char	*ret;

	ret = dst;
	while (*src)
	{
		*dst = *src;
		dst++;
		src++;
	}
	*dst = '\0';
	return (ret);
}
