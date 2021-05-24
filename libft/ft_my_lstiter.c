#include "libft.h"

/*
** Iterates the list ’lst’ and applies the function
** ’f’ to the content of each element.
*/

void	ft_my_lstiter(t_linked_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		if (lst->len != ft_strlen(lst->content))
			lst->len = ft_strlen(lst->content);
		lst = lst->next;
	}
}
