/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   xmemcmp.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mhouppin <mhouppin@le-101.fr>              +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/09/20 11:15:55 by mhouppin     #+#   ##    ##    #+#       */
/*   Updated: 2019/09/20 11:18:47 by mhouppin    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "xstring.h"

int		xmemcmp(const void *s1, const void *s2, size_t n)
{
	intptr_t	s1p;
	intptr_t	s2p;

	s1p = (intptr_t)s1;
	s2p = (intptr_t)s2;
	while (n)
	{
		if (*(unsigned char *)s1p != *(unsigned char *)s2p)
			return ((int)*(unsigned char *)s1p - (int)*(unsigned char *)s2p);
		s1p++;
		s2p++;
		n--;
	}
	return (0);
}
