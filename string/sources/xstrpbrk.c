/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   xstrpbrk.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mhouppin <mhouppin@le-101.fr>              +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/09/20 11:54:40 by mhouppin     #+#   ##    ##    #+#       */
/*   Updated: 2019/09/20 11:57:10 by mhouppin    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "xstring.h"

char	*xstrpbrk(const char *s, const char *search)
{
	unsigned char	block[256];

	xbzero(block, 256);
	while (*search)
	{
		block[*(const unsigned char *)search] = 1;
		search++;
	}
	while (*s)
	{
		if (block[*(const unsigned char *)s])
			return ((char *)s);
		s++;
	}
	return (NULL);
}
