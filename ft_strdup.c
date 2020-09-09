
#include "libft.h"

char	*ft_strdup(const char *src)
{
	int		i;
	int		lentgh;
	char	*duplicate;

	i = 0;
	duplicate = NULL;
	lentgh = ft_strlen(src);
	duplicate = (char*)malloc((lentgh + 1) * sizeof(char));
	if (duplicate)
	{
		while (i < lentgh)
		{
			duplicate[i] = src[i];
			i++;
		}
		duplicate[i] = '\0';
	}
	return (duplicate);
}
