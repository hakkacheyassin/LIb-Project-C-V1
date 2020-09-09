

#include "libft.h"

void		*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*tab;

	i = 0;
	tab = b;
	while (i < len)
	{
		tab[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
