#include "libft.h"

/*
**  Writes len bytes of value c (converted to an unsigned char) to the string b.
*/

void		*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
		((unsigned char *)b)[i++] = (unsigned char)c;
	return (b);
}
