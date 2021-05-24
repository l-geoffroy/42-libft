#include "libft.h"

static size_t	ft_intlen_ull(unsigned long long int num, int b)
{
	size_t		i;

	i = 0;
	while (num > 0)
	{
		num /= b;
		i++;
	}
	return (i);
}

char			*ft_itoa_base_u(unsigned long long int number, int base)
{
	char		*tab;
	char		*str;
	size_t		len;

	if (!(base >= 2 && base <= 16))
		return (NULL);
	if (number == 0)
	{
		if (!(str = ft_strdup("0")))
			return (NULL);
		return (str);
	}
	tab = "0123456789ABCDEF";
	len = 0;
	len = ft_intlen_ull(number, base);
	if (!(str = malloc(len + 1)))
		return (NULL);
	str[len--] = '\0';
	while (number > 0)
	{
		str[len--] = tab[number % base];
		number /= base;
	}
	return (str);
}
