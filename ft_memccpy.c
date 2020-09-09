
#include "libft.h"

void			*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char		*d;
	const unsigned char *s;
	size_t				i;

	d = (unsigned char*)dest;
	s = (unsigned const char*)src;
	i = -1;
	while (++i < n)
	{
		d[i] = s[i];
		if (s[i] == (unsigned char)c)
			return ((dest + i + 1));
	}
	return (0);
}
