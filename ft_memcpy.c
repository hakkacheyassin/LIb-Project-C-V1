

#include "libft.h"

void			*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char			*dest1;
	const unsigned char		*src1;
	size_t					i;

	dest1 = (unsigned char*)dest;
	src1 = (const unsigned char*)src;
	i = 0;
	if (dest1 == src1)
		return (dest);
	while (i < n)
	{
		dest1[i] = src1[i];
		i++;
	}
	return (dest);
}
