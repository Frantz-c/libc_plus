/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   vector_div.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mhouppin <mhouppin@le-101.fr>              +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/09/23 13:25:09 by mhouppin     #+#   ##    ##    #+#       */
/*   Updated: 2019/09/23 13:27:22 by mhouppin    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "tmath.h"

void	vector_div(t_vector *dst, float factor)
{
	dst->x /= factor;
	dst->y /= factor;
	dst->z /= factor;
	dst->w /= factor;
}
