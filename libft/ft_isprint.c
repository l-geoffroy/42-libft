#include "libft.h"

/*
**  The function tests for any printing character, including space (` ').
**  The value of the argument must be representable as an unsigned char
**  or the value of EOF. In ASCII printing chars are from 32 to 126.
*/

int	ft_isprint(int c)
{
	if (c >= ' ' && c <= '~')
		return (1);
	else
		return (0);
}
