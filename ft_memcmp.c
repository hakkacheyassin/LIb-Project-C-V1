

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char		*s11;
	const unsigned char		*s22;
	int						i;

	i = 0;
	s11 = (const unsigned char*)s1;
	s22 = (const unsigned char*)s2;
	while (n)
	{
		if (s11[i] == s22[i])
			i++;
		else
			return (s11[i] - s22[i]);
		n--;
	}
	return (0);
}
