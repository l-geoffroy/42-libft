#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char *copy;

	copy = (char*)malloc(sizeof(*s1) * (ft_strlen(s1) + 1));
	if (copy)
		ft_strcpy(copy, s1);
	return (copy);
}
