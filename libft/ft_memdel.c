#include "libft.h"

/*This function takes in the parameter of the address of a pointer. The zone
 *pointed to should be liberated with free. The pointer is then set to NULL.*/

void		ft_memdel(void **ap)
{
	free(*ap);
	*ap = NULL;
}
