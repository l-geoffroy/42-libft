#include "libft.h"

/*
** Locates the first occurrence of c
** (converted to an unsigned char) in string s.
** Returns a pointer to the byte located,
** or NULL if no such byte exists within n bytes.
*/

void	*ft_memchr(const void *s, int c, size_t n)
{
	while (*(unsigned char *)s && n)
	{
		if (*(unsigned char *)s == (unsigned char)c)
			return ((void *)s);
		s++;
		n--;
	}
	if (*(unsigned char *)s == '\0')
		if (*(unsigned char *)s == (unsigned char)c)
			return ((void *)s);
	return (NULL);
}
