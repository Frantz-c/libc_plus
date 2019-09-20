/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   xmemchr.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mhouppin <mhouppin@le-101.fr>              +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/09/20 11:00:41 by mhouppin     #+#   ##    ##    #+#       */
/*   Updated: 2019/09/20 11:13:31 by mhouppin    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "xstring.h"

static void	*xmemchr_8(uintptr_t sp, uintmax_t k)
{
	size_t	i;

	i = 0;
	while (i < sizeof(uintmax_t) - 1)
	{
		if (*(const uint8_t *)(sp + i) == (uint8_t)k)
			return ((void *)(sp + i));
		i++;
	}
	return ((void *)(sp + i));
}

static void	*xmemchr_last(uintptr_t sp, uintmax_t k, size_t n)
{
	while (n)
	{
		if (*(const uint8_t *)sp == (uint8_t)k)
			return ((void *)sp);
		sp++;
		n--;
	}
	return (NULL);
}

void		*xmemchr(const void *s, int c, size_t n)
{
	uintptr_t	sp;
	uintmax_t	k;
	uintmax_t	r;

	sp = (uintptr_t)s;
	k = (uintmax_t)(uint8_t)c * LMASK;
	while ((sp & (sizeof(uintmax_t) - 1)) && n)
	{
		if (*(const uint8_t *)sp == (uint8_t)k)
			return ((void *)sp);
		sp++;
		n--;
	}
	while (n >= sizeof(uintmax_t))
	{
		r = *(const uintmax_t *)sp ^ k;
		if ((r - LMASK) & (~r) & HMASK)
			return (xmemchr_8(sp, k));
		sp += sizeof(uintmax_t);
		n -= sizeof(uintmax_t);
	}
	return (xmemchr_last(sp, k, n));
}
