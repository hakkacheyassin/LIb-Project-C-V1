

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub;
	const char		*ptr;
	int				i;

	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
	{
		if (!(sub = (char*)malloc(1)))
			return (NULL);
		sub[0] = '\0';
		return (sub);
	}
	ptr = s + start;
	len = (len > ft_strlen(s) - start) ? ft_strlen(s) - start : len;
	i = 0;
	if (!(sub = (char*)malloc(len + 1)))
		return (NULL);
	while (*ptr && len--)
	{
		sub[i] = ptr[i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}
