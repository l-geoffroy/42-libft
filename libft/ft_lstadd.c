#include "libft.h"

/*In this function we will be adding a new link, called 'new' that is passed
 * in our parameters, to a list and placing this link at the head of our list.*/

void		ft_lstadd(t_list **alst, t_list *new)
{
	/*First we check to make sure the link new that is passed to our parameters
	 * is NULL. If it is not, we set our link new's element next to the first 
	 * link that is pointed to by alst in our parameters. We then set the
	 * pointer of alst to new, thus setting it to the head of our linked list.*/
	if (new != NULL)
	{
		new->next = *alst;
		*alst = new;
	}
}
