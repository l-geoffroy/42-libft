#include "libft.h"

/*
** Deletes and frees the given element and every
** successor of that element, using the function ’del’ and free(3).
** Finally, the pointer to the list must be set to NULL.
*/

void		ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;
	t_list	*start;

	if (!lst || !del)
		return ;
	start = *lst;
	while (start)
	{
		tmp = start->next;
		del(start->content);
		free(start);
		start = tmp;
	}
	*lst = NULL;
}
