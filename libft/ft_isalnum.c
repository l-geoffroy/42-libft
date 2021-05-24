#include "libft.h"

/*
** Tests for any character for which isalpha() or isdigit() is true.
*/

int		ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}
