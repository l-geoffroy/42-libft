#include "libft.h"

/*
** Copies len bytes from string src to string dst.
** The two strings may overlap;
** The copy is always done in a non-destructive manner.
** Returns the original value of dst.
*/

void		*ft_memmove(void *dst, const void *src, size_t len)
{
	if (!dst && !src)
		return (NULL);
	if (dst < src)
		ft_memcpy(dst, src, len);
	else
	{
		while (len--)
			((char *)dst)[len] = ((char *)src)[len];
	}
	return (dst);
}
