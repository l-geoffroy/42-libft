#include "libft.h"

/*
** Tests for any hexadecimal-digit character.
** Includes the following characters only: [0123456789ABCDESabcdef]
*/

int			ft_isxdigit(int c)
{
	char	*tab;
	int		i;

	tab = "0123456789ABCDEFabcdef";
	i = 0;
	while (tab[i])
	{
		if (c == tab[i])
			return (1);
		i++;
	}
	return (0);
}
