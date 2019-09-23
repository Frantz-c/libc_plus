/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   vinit.c                                          .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mhouppin <mhouppin@le-101.fr>              +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/25 17:20:55 by mhouppin     #+#   ##    ##    #+#       */
/*   Updated: 2019/09/23 13:05:20 by mhouppin    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libvector_core.h"

t_vector	*vinit(size_t itemsize_)
{
	t_vector	*v;

	v = (t_vector *)malloc(sizeof(t_vector));
	if (v == NULL)
		return (NULL);
	v->data = NULL;
	v->itemsize = itemsize_;
	v->nitems = 0;
	v->maxitems = 0;
	v->shift = vbsf(itemsize_);
	v->compar = NULL;
	v->filter = NULL;
	v->destroy = NULL;
	return (v);
}

t_vector	*vinit_ddup(const void *data_, size_t nitems_, size_t itemsize_)
{
	t_vector	*v;

	v = (t_vector *)malloc(sizeof(t_vector));
	if (v == NULL)
		return (NULL);
	v->data = malloc(nitems_ * itemsize_);
	if (v->data == NULL)
	{
		free(v);
		return (NULL);
	}
	xmemcpy(v->data, data_, nitems_ * itemsize_);
	v->itemsize = itemsize_;
	v->nitems = nitems_;
	v->maxitems = nitems_;
	v->shift = vbsf(itemsize_);
	v->compar = NULL;
	v->filter = NULL;
	v->destroy = NULL;
	return (v);
}

t_vector	*vinit_dset(void *data_, size_t nitems_, size_t itemsize_)
{
	t_vector	*v;

	v = (t_vector *)malloc(sizeof(t_vector));
	if (v == NULL)
		return (NULL);
	v->data = data_;
	v->itemsize = itemsize_;
	v->nitems = nitems_;
	v->maxitems = nitems_;
	v->shift = vbsf(itemsize_);
	v->compar = NULL;
	v->filter = NULL;
	v->destroy = NULL;
	return (v);
}

t_vector	*vinit_copy(const t_vector *other)
{
	t_vector	*v;

	v = (t_vector *)malloc(sizeof(t_vector));
	if (v == NULL)
		return (NULL);
	v->data = malloc(other->nitems * other->itemsize);
	if (v->data == NULL)
	{
		free(v);
		return (NULL);
	}
	xmemcpy(v->data, other->data, other->nitems * other->itemsize);
	v->itemsize = other->itemsize;
	v->nitems = other->nitems;
	v->maxitems = other->nitems;
	v->shift = other->shift;
	v->compar = other->compar;
	v->filter = other->filter;
	v->destroy = other->destroy;
	return (v);
}

void	vdestroy(t_vector *v)
{
	size_t	i;

	if (v->destroy != NULL)
	{
		i = 0;
		while (i < v->nitems)
		{
			v->destroy(vfastitem(v, i));
			i++;
		}
	}
	free(v->data);
	free(v);
}
