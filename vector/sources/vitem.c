/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   vitem.c                                          .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mhouppin <mhouppin@le-101.fr>              +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/30 10:46:27 by mhouppin     #+#   ##    ##    #+#       */
/*   Updated: 2019/09/23 12:59:42 by mhouppin    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libvector_core.h"

void	*vitem(const t_vector *v, size_t iter)
{
	if (iter < v->nitems)
	{
		if (v->shift != UNSHIFTABLE)
			return ((void *)((char *)v->data + (iter << v->shift)));
		return ((void *)((char *)v->data + iter * v->itemsize));
	}
	return (NULL);
}

void	*vfastitem(const t_vector *v, size_t iter)
{
	if (v->shift != UNSHIFTABLE)
		return ((void *)((char *)v->data + (iter << v->shift)));
	return ((void *)((char *)v->data + iter * v->itemsize));
}

size_t	voffset(const t_vector *v, size_t iter)
{
	if (v->shift != UNSHIFTABLE)
		return (iter << v->shift);
	return (iter * v->itemsize);
}
