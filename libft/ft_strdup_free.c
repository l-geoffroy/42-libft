#include "libft.h"

void	*ft_strdup_free(char *str)
{
	char	*strres;

	if (!(strres = ft_strdup(str)))
		return (NULL);
	ft_free_and_clear(str);
	return ((void *)strres);
}
