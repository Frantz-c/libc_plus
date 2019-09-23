/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   libvector.h                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mhouppin <mhouppin@le-101.fr>              +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/25 16:49:11 by mhouppin     #+#   ##    ##    #+#       */
/*   Updated: 2019/09/02 09:35:37 by mhouppin    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef LIBVECTOR_H
# define LIBVECTOR_H

# include <stdlib.h>
# include <errno.h>

# define UNSHIFTABLE	(sizeof(size_t) * 8)

struct		s_vector
{
	void	*data;
	size_t	itemsize;
	size_t	nitems;
	size_t	maxitems;
	size_t	shift;
	int		(*compar)(const void *, const void *);
	int		(*filter)(const void *);
	void	(*destroy)(void *);
};

typedef struct s_vector	t_vector;

/*
** vinit: standard init
*/

t_vector	*vinit(size_t itemsize_);
t_vector	*vinit_ddup(const void *data_, size_t nitems_, size_t itemsize_);
t_vector	*vinit_dset(void *data_, size_t nitems_, size_t itemsize_);
t_vector	*vinit_copy(const t_vector *other);

void		vdestroy(t_vector *v);
int			vautoresize(t_vector *v);
int			vresize(t_vector *v, size_t maxitems_);
int			vshrink(t_vector *v);
void		*vitem(const t_vector *v, size_t iter);
void		*vfastitem(const t_vector *v, size_t iter);
size_t		voffset(const t_vector *v, size_t iter);

int			vset(t_vector *v, size_t iter, void *newitem);
int			vset_range(t_vector *v, size_t iter, size_t nitems_,
			void *newitems);
int			vinsert(t_vector *v, size_t iter, void *newitem);
int			vinsert_range(t_vector *v, size_t iter, size_t nitems_,
			void *newitems);
int			vpush_back(t_vector *v, void *newitem);
int			vpush_front(t_vector *v, void *newitem);
int			vpush_back_range(t_vector *v, size_t nitems_, void *newitems);
int			vpush_front_range(t_vector *v, size_t nitems_, void *newitems);

int			vdelete(t_vector *v, size_t iter);
int			vdelete_range(t_vector *v, size_t iter, size_t nitems_);
int			vpop_back(t_vector *v);
int			vpop_front(t_vector *v);
int			vpop_back_range(t_vector *v, size_t nitems_);
int			vpop_front_range(t_vector *v, size_t nitems_);
int			vreset(t_vector *v);

void		vsort(t_vector *v);
void		*vsearch(t_vector *v, const void *key);
int			vplace(t_vector *v, const void *key);
void		vfilter(t_vector *v);

#endif
