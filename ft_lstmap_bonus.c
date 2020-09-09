

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *new;
	t_list *ptr;
	t_list *element;

	if (!lst)
		return (NULL);
	ptr = lst;
	if (!(new = ft_lstnew((*f)(ptr->content))))
		return (NULL);
	ptr = ptr->next;
	while (ptr)
	{
		if (!(element = ft_lstnew((*f)(ptr->content))))
		{
			ft_lstclear(&new, (*del));
			new = NULL;
			break ;
		}
		ft_lstadd_back(&new, element);
		ptr = ptr->next;
	}
	return (new);
}
