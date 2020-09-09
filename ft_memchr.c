

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	const unsigned char *sr;
	size_t				i;

	sr = (const unsigned char*)str;
	i = 0;
	while (n--)
	{
		if (sr[i] == (unsigned char)c)
			return ((unsigned char*)(str + i));
		i++;
	}
	return (0);
}
