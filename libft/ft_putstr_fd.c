#include "libft.h"

void	ft_putstr_fd(char const *s, int fd)
{
	if (s)
	{
		while (*s != 0)
		{
			write(fd, s, 1);
			s++;
		}
	}
}
