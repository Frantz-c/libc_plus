/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   strtok.c                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mhouppin <mhouppin@le-101.fr>              +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/09/20 12:59:03 by mhouppin     #+#   ##    ##    #+#       */
/*   Updated: 2019/09/20 13:01:07 by mhouppin    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "xstring.h"

char	*xstrtok(char *str, const char *sep)
{
	static char	*old;

	return (xstrtok_r(str, sep, &old));
}
