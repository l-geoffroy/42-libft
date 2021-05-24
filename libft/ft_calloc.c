#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*array;

	size = size * count;
	if (!(array = malloc(size)))
		return (NULL);
	ft_bzero(array, size);
	return (array);
}
