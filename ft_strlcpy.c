
#include "libft.h"

size_t		ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	lentgh_src;
	size_t	i;

	lentgh_src = ft_strlen(src);
	if (size == 0)
		return (lentgh_src);
	i = 0;
	if (size)
	{
		while (i < size - 1 && src[i])
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (lentgh_src);
}
