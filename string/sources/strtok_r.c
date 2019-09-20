/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   strtok_r.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mhouppin <mhouppin@le-101.fr>              +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/09/20 13:01:37 by mhouppin     #+#   ##    ##    #+#       */
/*   Updated: 2019/09/20 13:05:02 by mhouppin    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "xstring.h"

char	*xstrtok_r(char *str, const char *sep, char **old)
{
	char	*end;

	if (str == NULL)
		str = *old;
	if (*str == '\0')
	{
		*old = str;
		return (NULL);
	}
	str += xstrspn(str, sep);
	if (*str == '\0')
	{
		*old = str;
		return (NULL);
	}
	end = str + xstrcspn(str, sep);
	if (*end == '\0')
	{
		*old = end;
		return (str);
	}
	*end = '\0';
	*old = end + 1;
	return (str);
}
