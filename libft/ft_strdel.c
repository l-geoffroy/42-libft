#include "libft.h"

/*This function takes in the parameter of an address to a chain of characters
 * that should be freed and then set to NULL. We do this by running our 
 * ft_memdel function and casting the pointer address as a void that we put 
 * into its parameter.*/

void		ft_strdel(char **as)
{
	ft_memdel((void **)as);
}
