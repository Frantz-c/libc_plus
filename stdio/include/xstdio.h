/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   xstdio.h                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mhouppin <mhouppin@le-101.fr>              +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/09/19 10:25:31 by mhouppin     #+#   ##    ##    #+#       */
/*   Updated: 2019/09/23 09:28:43 by mhouppin    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef XSTDIO_H
# define XSTDIO_H

# include "../../string/include/xstring.h"
# include <unistd.h>

int		xfputchar(int fd, char c);
int		xfputs(int fd, const char *str);
int		xfputstr(int fd, const char *str);
int		xputchar(char c);
int		xputs(const char *str);
int		xputstr(const char *str);

#endif
