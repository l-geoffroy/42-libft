#include "libft.h"

/*
** Allocates copy of s1 with removed chars
** specified in set from the start and the end of the string
*/

char		*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	len;
	char	*str;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	while (s1[i] != '\0' && ft_strchr(set, s1[i]))
		i++;
	len = ft_strlen(s1 + i);
	while (ft_strchr(set, s1[i + len]))
		len--;
	if (!(str = ft_substr(s1, i, len + 1)))
		return (NULL);
	return (str);
}
