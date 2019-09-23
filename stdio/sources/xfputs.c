/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   xfputs.c                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mhouppin <mhouppin@le-101.fr>              +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/09/23 09:25:20 by mhouppin     #+#   ##    ##    #+#       */
/*   Updated: 2019/09/23 09:28:52 by mhouppin    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "xstdio.h"

int		xfputs(int fd, const char *str)
{
	int		ret;

	ret = (int)write(fd, str, xstrlen(str));
	if (ret < 0)
		return (-1);
	if (write(fd, "\n", 1) < 0)
		return (-1);
	return (ret + 1);
}
