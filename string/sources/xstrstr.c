/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   xstrstr.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mhouppin <mhouppin@le-101.fr>              +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/09/20 12:47:54 by mhouppin     #+#   ##    ##    #+#       */
/*   Updated: 2019/09/20 12:57:34 by mhouppin    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "xstring.h"

char	*xstrstr(const char *big, const char *little)
{
	size_t	llen;
	char	*next_ptr;
	char	lchar;

	lchar = *little;
	if (!lchar)
		return ((char *)big);
	llen = xstrlen(little);
	next_ptr = xstrchr(big, lchar);
	while (next_ptr)
	{
		if (xstrncmp(next_ptr, little, llen) == 0)
			break ;
		next_ptr = xstrchr(next_ptr + 1, lchar);
	}
	return (next_ptr);
}
