

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*ptr;
	t_list	*ptr1;

	ptr = *lst;
	if (ptr)
	{
		while (ptr)
		{
			ptr1 = ptr->next;
			ft_lstdelone(ptr, (*del));
			ptr = ptr1;
		}
		*lst = NULL;
	}
}
