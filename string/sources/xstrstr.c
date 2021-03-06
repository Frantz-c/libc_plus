/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   xstrstr.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mhouppin <mhouppin@le-101.fr>              +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/09/20 12:47:54 by mhouppin     #+#   ##    ##    #+#       */
/*   Updated: 2019/09/20 14:24:15 by mhouppin    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "xstring.h"

char	*xstrstr(const char *big, const char *little)
{
	return ((char *)xmemmem(big, xstrlen(big), little, xstrlen(little)));
}
