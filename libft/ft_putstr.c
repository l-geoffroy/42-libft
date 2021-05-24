#include "libft.h"

/*
** Puts str to 1 fd
*/

void	ft_putstr(const char *s)
{
	if (!s)
		return ;
	write(1, s, ft_strlen(s));
}
