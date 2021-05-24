#include "libft.h"

/*
** Tests for an ASCII character.
** Which is any character between 0 and decimal 128
*/

int		ft_isascii(int c)
{
	return (c >= 0 && c < 128);
}
