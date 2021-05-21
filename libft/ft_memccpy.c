#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned int	i;
	unsigned char	*uc_dst;
	unsigned char	*uc_src;

	i = 0;
	uc_dst = (unsigned char *)dst;
	uc_src = (unsigned char *)src;
	while (i < n)
	{
		uc_dst[i] = uc_src[i];
		if (uc_src[i] == (unsigned char)c)
			return ((void *)&uc_dst[i + 1]);
		i++;
	}
	return (NULL);
}