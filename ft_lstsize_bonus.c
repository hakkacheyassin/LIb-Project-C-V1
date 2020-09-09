

#include "libft.h"

int		ft_lstsize(t_list *lst)
{
	t_list		*ptr;
	int			i;

	i = 0;
	ptr = lst;
	while (ptr)
	{
		ptr = ptr->next;
		i++;
	}
	return (i);
}
