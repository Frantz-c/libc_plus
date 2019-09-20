/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   xstrcmp.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mhouppin <mhouppin@le-101.fr>              +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/09/20 11:30:51 by mhouppin     #+#   ##    ##    #+#       */
/*   Updated: 2019/09/20 11:34:29 by mhouppin    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "xstring.h"

int		xstrcmp(const char *s1, const char *s2)
{
	while (*s1)
	{
		if (*s1 != *s2)
			break ;
		s1++;
		s2++;
	}
	return ((int)*(const unsigned char *)s1 - (int)*(const unsigned char *)s2);
}
