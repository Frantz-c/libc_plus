/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   vector_normalize.c                               .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mhouppin <mhouppin@le-101.fr>              +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/09/23 14:22:17 by mhouppin     #+#   ##    ##    #+#       */
/*   Updated: 2019/09/23 14:34:01 by mhouppin    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "tmath.h"

void	vector_normalize(t_vector *v)
{
	float	length;

	length = sqrtf(v->x * v->x + v->y * v->y + v->z * v->z);
	v->x /= length;
	v->y /= length;
	v->z /= length;
	v->w /= length;
}
