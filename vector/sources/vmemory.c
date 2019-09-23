/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   vmemory.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mhouppin <mhouppin@le-101.fr>              +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/30 11:34:25 by mhouppin     #+#   ##    ##    #+#       */
/*   Updated: 2019/09/23 12:58:26 by mhouppin    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libvector_core.h"

size_t	vsqrt(size_t n)
{
	size_t	threshold;
	size_t	result;
	size_t	val;

	result = 0;
	threshold = 65536ul;
	while (threshold > 0)
	{
		val = (result + threshold) * (result + threshold);
		if (val < n)
			result += threshold;
		threshold >>= 1;
	}
	return (result);
}

int		vautoresize(t_vector *v)
{
	size_t	items_to_add;

	items_to_add = vsqrt(v->maxitems);
	items_to_add += items_to_add + 1;
	return (vresize(v, v->maxitems + items_to_add));
}

int		vresize(t_vector *v, size_t maxitems_)
{
	void	*rdata;

	if (v->maxitems < maxitems_)
		return (0);
	if (v->maxitems == maxitems_)
		return (1);
	rdata = realloc(v->data, maxitems_ * v->itemsize);
	if (rdata == NULL)
		return (0);
	v->data = rdata;
	v->maxitems = maxitems_;
	return (1);
}

int		vshrink(t_vector *v)
{
	void	*rdata;

	rdata = realloc(v->data, v->nitems * v->itemsize);
	if (rdata == NULL)
		return (0);
	v->data = rdata;
	v->maxitems = v->nitems;
	return (1);
}
