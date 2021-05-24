#include "libft.h"

void	*ft_free_and_clear(char *str)
{
	size_t	len;

	if (!str)
		return (NULL);
	len = ft_strlen(str);
	while (len != 0)
	{
		str[len] = '\0';
		len--;
	}
	str[len] = '\0';
	free(str);
	str = NULL;
	return (NULL);
}
