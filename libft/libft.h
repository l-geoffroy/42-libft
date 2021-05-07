#ifndef LIBFT_H
# define LIBFT_H

#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#ifndef BUFF_SIZE
# define BUFF_SIZE 32
#endif

void ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void *ft_memset(void *b, int c, size_t len);

#endif