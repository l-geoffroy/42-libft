#include "libft.h"

void	ft_putendl(char const *s)
{
	char endline;

	if (s)
	{
		endline = '\n';
		while (*s != 0)
		{
			write(1, s, 1);
			s++;
		}
		write(1, &endline, 1);
	}
}
