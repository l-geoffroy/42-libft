#include "libft.h"

/*
** Returns the last element of the list.
*/

t_linked_list		*ft_my_lstlast(t_linked_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}
