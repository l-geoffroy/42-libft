#include "libft.h"

/*This function will be taking the function f, passed in the parameters, and
 * applying it to every link in our linked list.*/

void		ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	/*First we check to make sure our parameter of function f is not NULL.*/
	if (f != NULL)
	{
		/*If it is not NULL we start our loop through our linked list applying
		 * function f to each link. Once it has been applied we set the current
		 * link to be it's element next, setting it to the following link and
		 * then starting the loop over again until we reach the end by hitting
		 * NULL.*/
		while (lst != NULL)
		{
			f(lst);
			lst = lst->next;
		}
	}
}
