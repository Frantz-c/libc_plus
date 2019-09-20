/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   xstrncmp.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mhouppin <mhouppin@le-101.fr>              +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/09/20 11:45:52 by mhouppin     #+#   ##    ##    #+#       */
/*   Updated: 2019/09/20 11:47:28 by mhouppin    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "xstring.h"

int		xstrncmp(const char *s1, const char *s2, size_t size)
{
	while (*s1 && size)
	{
		if (*s1 != *s2)
			break ;
		s1++;
		s2++;
		size--;
	}
	if (size == 0)
		return (0);
	return ((int)*(const unsigned char *)s1 - (int)*(const unsigned char *)s2);
}
