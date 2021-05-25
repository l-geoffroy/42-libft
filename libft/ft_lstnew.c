#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *out;

	out = (t_list*)malloc(sizeof(t_list));
	if (!out)
		return (NULL);
	if (content == NULL)
	{
		out->content = NULL;
		out->content_size = 0;
	}
	else
	{
		out->content = (void*)malloc(sizeof(size_t) * content_size);
		if (!out->content)
			return (NULL);
		out->content_size = content_size;
		ft_memcpy(out->content, content, content_size);
	}
	out->next = NULL;
	return (out);
}
