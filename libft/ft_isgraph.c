#include "libft.h"

/*
** Tests for any printing character except space (` ')
** and other locale-specific space-like characters.
** The value of the argument must be representable as an unsigned char
** or the value of EOF. In ASCII from 32 to 126.
*/

int	ft_isgraph(int c)
{
	return (c >= '!' && c <= '~');
}
