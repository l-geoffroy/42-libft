#include "libft.h"

/*
** Tests for any control character.
** The value of the argument must be representable as an unsigned char
** or the value of EOF.
*/

int	ft_iscntrl(int c)
{
	return ((c >= 0 && c <= 31) || c == 127);
}
