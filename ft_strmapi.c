
#include "libft.h"

char		*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t			len;
	size_t			i;
	char			*str;

	if (!s)
		return (NULL);
	len = ft_strlen(s);
	i = 0;
	str = (char*)malloc(len + 1);
	if (!str)
		return (NULL);
	while (i < len)
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
