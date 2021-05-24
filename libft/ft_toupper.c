#include "libft.h"

/*
** Converts an lower-case letter to the corresponding upper-case letter.
** The argument must be representable as an unsigned char or the value of EOF.
** Difference between 'A' and 'a' in ASCII is 32.
*/

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c = c - 32;
	return (c);
}
