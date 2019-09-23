/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   vset.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mhouppin <mhouppin@le-101.fr>              +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/09/02 09:41:41 by mhouppin     #+#   ##    ##    #+#       */
/*   Updated: 2019/09/23 13:04:48 by mhouppin    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libvector_core.h"

int	vset(t_vector *v, size_t iter, void *newitem)
{
	if (!v || !newitem || iter > v->nitems)
		return (0);
	if (iter == v->nitems)
	{
		if (v->nitems == v->maxitems)
			if (!vautoresize(v))
				return (0);
		v->nitems++;
	}
	xmemcpy(vfastitem(v, iter), newitem, v->itemsize);
	return (1);
}

int	vset_range(t_vector *v, size_t iter, size_t nitems_, void *newitems)
{
	if (!v || !newitems || iter > v->nitems)
		return (0);
	if (iter + nitems_ >= v->nitems)
	{
		if (v->nitems + nitems_ > v->maxitems)
			if (!vresize(v, v->maxitems + nitems_))
				return (0);
		v->nitems = iter + nitems_;
	}
	xmemcpy(vfastitem(v, iter), newitems, voffset(v, nitems_));
	return (1);
}

int	vinsert(t_vector *v, size_t iter, void *newitem)
{
	void	*ptr;

	if (!v || !newitem || iter > v->nitems)
		return (0);
	if (v->nitems == v->maxitems)
		if (!vautoresize(v))
			return (0);
	ptr = vfastitem(v, iter);
	xmemrcpy((char *)ptr + v->itemsize, ptr, voffset(v, v->nitems - iter));
	v->nitems++;
	xmemcpy((char *)ptr, newitem, v->itemsize);
	return (1);
}

int	vinsert_range(t_vector *v, size_t iter, size_t nitems_, void *newitems)
{
	void	*ptr;
	size_t	size;

	if (!v || !newitems || iter > v->nitems)
		return (0);
	if (v->nitems + nitems_ > v->maxitems)
		if (!vresize(v, v->maxitems + nitems_))
			return (0);
	ptr = vfastitem(v, iter);
	size = voffset(v, nitems_);
	xmemrcpy((char *)ptr + size, ptr, voffset(v, v->nitems - iter));
	v->nitems += nitems_;
	xmemcpy(ptr, newitems, size);
	return (1);
}
