#include "libft.h"

/*According to the man this function writes n zeroed bytes to the string s. If
 * n is zero, ft_bzero does nothing. Another way of saying this is that we will
 * be making a string of size n and filling each index position with a 0. We
 * use our previously made ft_memset function to do this. Review ft_memset to
 * understand how it works and notice the parameters we give it here when we
 * call it. We set it ahead of time to fill whatever string at size n with 0s.*/

void		ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
