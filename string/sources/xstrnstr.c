/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   xstrnstr.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mhouppin <mhouppin@le-101.fr>              +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/09/20 14:21:37 by mhouppin     #+#   ##    ##    #+#       */
/*   Updated: 2019/09/20 14:24:23 by mhouppin    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "xstring.h"

char	*xstrnstr(const char *big, const char *little, size_t size)
{
	return ((char *)xmemmem(big, xstrnlen(big, size), little,
				xstrnlen(little, size)));
}
