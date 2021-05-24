#include "libft.h"

/*
** Allocates (with malloc(3)) and returns a new element.
** content is initialized with the value of the parameter ’content’.
** The variable ’next’ is initialized to NULL
*/

t_linked_list		*ft_my_lstnew(void *content, t_linked_list **prev)
{
	t_linked_list	*new;

	if (!(new = malloc(sizeof(t_linked_list))))
		return (NULL);
	new->content = content;
	if (prev)
		new->previous = *prev;
	else
		new->previous = NULL;
	new->next = NULL;
	return (new);
}
