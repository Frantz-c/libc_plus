/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   tmath.h                                          .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mhouppin <mhouppin@le-101.fr>              +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/09/23 13:09:43 by mhouppin     #+#   ##    ##    #+#       */
/*   Updated: 2019/09/23 13:36:21 by mhouppin    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef TMATH_H
# define TMATH_H

# include <math.h>

struct	s_vector
{
	float	x;
	float	y;
	float	z;
	float	w;
} __attribute__((aligned(16)));

typedef struct s_vector	t_vector;

void	vector_init(t_vector *v);

void	vector_add(t_vector *dst, const t_vector *src);
void	vector_sub(t_vector *dst, const t_vector *src);
void	vector_mul(t_vector *dst, float factor);
void	vector_div(t_vector *dst, float factor);

float	vector_scalar_prod(const t_vector *u, const t_vector *v);

void	vector_normalize(t_vector *v);

void	vector_rotate_x(t_vector *v, float angle);
void	vector_rotate_y(t_vector *v, float angle);
void	vector_rotate_z(t_vector *v, float angle);

#endif
