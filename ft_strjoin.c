
/* ************************************************************************** */

#include "libft.h"

char		*ft_strjoin(char const *s1, char const *s2)
{
	size_t		len_s1;
	char		*res;
	int			i;

	if (!(s1 && s2))
		return (NULL);
	len_s1 = ft_strlen(s1);
	i = 0;
	res = (char*)malloc(len_s1 + ft_strlen(s2) + 1);
	if (!res)
		return (NULL);
	else
	{
		while (*s1)
		{
			res[i] = *s1++;
			i++;
		}
		while (*s2)
			res[len_s1++] = *s2++;
		res[len_s1] = '\0';
	}
	return (res);
}
