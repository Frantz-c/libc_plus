/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   vbsf.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mhouppin <mhouppin@le-101.fr>              +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/30 09:28:01 by mhouppin     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/30 09:31:44 by mhouppin    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libvector_core.h"

size_t	vbsf(size_t value)
{
	size_t	i;

	if (value == 0)
		return (UNSHIFTABLE);
	if ((value & (value - 1)) != 0)
		return (UNSHIFTABLE);
	i = 0;
	while ((value >>= 1) != 0)
		i++;
	return (i);
}
