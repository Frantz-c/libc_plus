/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   vector_mul.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mhouppin <mhouppin@le-101.fr>              +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/09/23 13:24:13 by mhouppin     #+#   ##    ##    #+#       */
/*   Updated: 2019/09/23 13:28:37 by mhouppin    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "tmath.h"

void	vector_mul(t_vector *dst, float factor)
{
	dst->x *= factor;
	dst->y *= factor;
	dst->z *= factor;
	dst->w *= factor;
}
