#include "libft.h"

/*
** Adds the element ’new’ at the end of the list.
*/

void	ft_my_lstadd_back(t_linked_list **lst, t_linked_list *new)
{
	t_linked_list	*tmp;

	if (!lst || !new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	tmp = ft_my_lstlast(*lst);
	tmp->next = new;
	new->previous = tmp;
}
