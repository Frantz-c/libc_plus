/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   vector_scalar_prod.c                             .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mhouppin <mhouppin@le-101.fr>              +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/09/23 14:20:51 by mhouppin     #+#   ##    ##    #+#       */
/*   Updated: 2019/09/23 14:21:55 by mhouppin    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "tmath.h"

float	vector_scalar_prod(const t_vector *u, const t_vector *v)
{
	return (u->x * v->x + u->y * v->y + u->z * u->z);
}
