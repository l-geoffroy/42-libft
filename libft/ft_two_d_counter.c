#include "libft.h"

size_t		ft_two_d_counter(char ***s)
{
	size_t	i;

	i = 0;
	while ((*s)[i])
	{
		i++;
	}
	return (i);
}
