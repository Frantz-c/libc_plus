/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   xstring.h                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mhouppin <mhouppin@le-101.fr>              +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/09/19 10:15:26 by mhouppin     #+#   ##    ##    #+#       */
/*   Updated: 2019/09/20 11:45:41 by mhouppin    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef XSTRING_H
# define XSTRING_H

# include <stddef.h>
# include <stdint.h>

# if defined(UINT64_MAX)
#  define HMASK		0x8080808080808080ul
#  define LMASK		0x0101010101010101ul
# else
#  define HMASK		0x80808080ul
#  define LMASK		0x01010101ul
# endif

void	xbzero(void *b, size_t size);
void	*xmemchr(const void *s, int c, size_t size);
int		xmemcmp(const void *s1, const void *s2, size_t size);
void	*xmemcpy(void *dst, const void *src, size_t size);
void	*xmemmove(void *dst, const void *src, size_t size);
void	*xmemrcpy(void *dst, const void *src, size_t size);
void	*xmemset(void *b, int c, size_t size);
char	*xstrcat(char *dst, const char *src);
char	*xstrchr(const char *s, int c);
int		xstrcmp(const char *s1, const char *s2);
char	*xstrcpy(char *dst, const char *src);
size_t	xstrcspn(const char *s, const char *reject);
size_t	xstrlen(const char *s);
char	*xstrncat(char *dst, const char *src, size_t size);
int		xstrncmp(const char *s1, const char *s2, size_t size);

#endif
