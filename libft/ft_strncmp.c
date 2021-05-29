#include "libft.h"

int			ft_strncmp(const char *s1, const char *s2, size_t n)
{
	/*We first declare our counter variable i as a size_t. We do this because
	 * the parameter we are taking in for n is a size_t. We will be needing
	 * to compare our give n value with our i value so they must be the same.*/
	size_t	i;
	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] != '\0' && s1[i] == s2[i] && i < n - 1)
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
