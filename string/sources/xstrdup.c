/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   xstrdup.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mhouppin <mhouppin@le-101.fr>              +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/09/20 13:09:58 by mhouppin     #+#   ##    ##    #+#       */
/*   Updated: 2019/09/20 13:12:44 by mhouppin    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "xstring.h"
#include <stdlib.h>

char	*xstrdup(const char *s)
{
	size_t	size;
	char	*dupstr;

	size = xstrlen(s);
	dupstr = (char *)malloc(size + 1);
	if (dupstr == NULL)
		return (NULL);
	return ((char *)xmemcpy(dupstr, s, size + 1));
}
