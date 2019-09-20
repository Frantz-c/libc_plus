/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   xstrspn.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mhouppin <mhouppin@le-101.fr>              +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/09/20 12:45:59 by mhouppin     #+#   ##    ##    #+#       */
/*   Updated: 2019/09/20 12:58:32 by mhouppin    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "xstring.h"

size_t	strspn(const char *s, const char *accept)
{
	unsigned char	block[256];
	const char		*sp = s;

	xbzero(block, 256);
	while (*accept)
	{
		block[*(const unsigned char *)accept] = 1;
		accept++;
	}
	while (block[*(const unsigned char *)sp])
		sp++;
	return ((size_t)(sp - s));
}
