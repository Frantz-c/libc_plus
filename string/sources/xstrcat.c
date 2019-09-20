/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   xstrcat.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mhouppin <mhouppin@le-101.fr>              +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/09/20 11:25:56 by mhouppin     #+#   ##    ##    #+#       */
/*   Updated: 2019/09/20 11:37:39 by mhouppin    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "xstring.h"

char	*xstrcat(char *dst, const char *src)
{
	char	*ret;

	ret = dst;
	while (*dst)
		dst++;
	while (*src)
	{
		*dst = *src;
		dst++;
		src++;
	}
	*dst = '\0';
	return (ret);
}
