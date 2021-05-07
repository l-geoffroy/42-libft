#include "libft.h"

void *ft_memset(void *b, int c, size_t len)
{
	int i;
	void *tmp;

	i = 0;
	tmp = b;
	while (i < (int)len)
	{
		(*(char *)tmp++) = (unsigned char)c;
		i++;
	}
	return (b);
}