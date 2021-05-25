#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void *dest;
	char *clean;

	dest = malloc(size);
	clean = dest;
	if (dest)
	{
		while (size != 0)
		{
			*clean++ = 0;
			size--;
		}
		return (dest);
	}
	else
	{
		return (NULL);
	}
}
