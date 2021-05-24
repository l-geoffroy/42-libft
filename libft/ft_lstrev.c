#include "libft.h"

void		ft_lstrev(t_list **lst)
{
	t_list	*previous;
	t_list	*current;
	t_list	*next;

	current = *lst;
	previous = NULL;
	while (current)
	{
		next = current->next;
		current->next = previous;
		previous = current;
		current = next;
	}
	*lst = previous;
}
