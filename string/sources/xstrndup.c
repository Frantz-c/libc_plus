/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   xstrndup.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mhouppin <mhouppin@le-101.fr>              +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/09/20 13:34:00 by mhouppin     #+#   ##    ##    #+#       */
/*   Updated: 2019/09/20 13:38:24 by mhouppin    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "xstring.h"
#include <stdlib.h>

char	*xstrndup(const char *s, size_t size)
{
	size_t	len;
	char	*dupstr;

	len = xstrnlen(s, size);
	dupstr = (char *)malloc(len + 1);
	if (dupstr == NULL)
		return (NULL);
	xmemcpy(dupstr, s, len);
	dupstr[len] = '\0';
	return (dupstr);
}
