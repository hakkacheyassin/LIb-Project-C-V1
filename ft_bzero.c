

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned long i;
	unsigned char *tab;

	i = 0;
	tab = s;
	while (i < n)
	{
		tab[i] = 0;
		i++;
	}
}
