/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   xstrrchr.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mhouppin <mhouppin@le-101.fr>              +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/09/20 12:44:20 by mhouppin     #+#   ##    ##    #+#       */
/*   Updated: 2019/09/20 12:58:06 by mhouppin    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "xstring.h"

char	*xstrrchr(const char *s, int c)
{
	const char	*ret;

	ret = NULL;
	while (*s)
	{
		if (*s == c)
			ret = s;
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	return ((char *)ret);
}
