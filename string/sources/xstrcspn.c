/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   xstrcspn.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mhouppin <mhouppin@le-101.fr>              +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/09/20 11:38:01 by mhouppin     #+#   ##    ##    #+#       */
/*   Updated: 2019/09/20 11:56:29 by mhouppin    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "xstring.h"

size_t	strcspn(const char *s, const char *charset)
{
	unsigned char	block[256];
	const char		*sp = s;

	xbzero(block, 256);
	while (*charset)
	{
		block[*(const unsigned char *)charset] = 1;
		charset++;
	}
	while (*sp)
	{
		if (block[*(const unsigned char *)sp])
			break ;
		sp++;
	}
	return ((size_t)(sp - s));
}
