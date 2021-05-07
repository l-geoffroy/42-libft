#include "libft.h"

void ft_bzero(void *s, size_t n)
{
    int i;
    void *tmp;

    i = 0;
    tmp = s;
    while (i < (int)n)
    {
        (*(char *)tmp++) = '\0';
        i++;
    }
    return;
}