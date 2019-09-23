/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   xputs.c                                          .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mhouppin <mhouppin@le-101.fr>              +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/09/23 09:23:40 by mhouppin     #+#   ##    ##    #+#       */
/*   Updated: 2019/09/23 09:28:59 by mhouppin    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "xstdio.h"

int		xputs(const char *str)
{
	int		ret;

	ret = (int)write(STDOUT_FILENO, str, xstrlen(str));
	if (ret < 0)
		return (-1);
	if (write(STDOUT_FILENO, "\n", 1) < 0)
		return (-1);
	return (ret + 1);
}
