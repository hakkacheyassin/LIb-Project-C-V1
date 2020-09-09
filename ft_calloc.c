

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char		*ptr;
	int					len;

	len = count * size;
	if (!(ptr = (unsigned char*)malloc(size * count)))
		return (NULL);
	ft_bzero(ptr, len);
	return (ptr);
}
