/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   xfputchar.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mhouppin <mhouppin@le-101.fr>              +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/09/23 09:26:34 by mhouppin     #+#   ##    ##    #+#       */
/*   Updated: 2019/09/23 09:27:44 by mhouppin    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "xstdio.h"

int		xfputchar(int fd, char c)
{
	return ((int)write(fd, &c, 1));
}
