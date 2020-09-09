
#include "libft.h"

static int		len_str(char const *s1, char const *set)
{
	size_t		j;
	int			i;
	int			len_s1;
	int			len;

	j = 0;
	i = -1;
	len_s1 = ft_strlen(s1);
	len = len_s1;
	while (s1[++i] && set[j])
	{
		j = 0;
		while (set[j] && s1[i] != set[j])
			j++;
		(j != ft_strlen(set)) ? (len--) : (len + 0);
	}
	j = 0;
	while (set[j] && len_s1-- && len)
	{
		j = 0;
		while (set[j] && s1[len_s1] != set[j])
			j++;
		(j != ft_strlen(set)) ? (len--) : (len + 0);
	}
	return (len);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	char		*trim;
	int			len;
	int			i;
	int			j;

	if (!s1 || !set)
		return (NULL);
	len = len_str(s1, set);
	i = 0;
	j = 0;
	while (*s1 && set[j])
	{
		j = 0;
		while (set[j] && *s1 != set[j])
			j++;
		if (set[j])
			s1++;
	}
	trim = (char*)malloc(len + 1);
	if (!trim)
		return (NULL);
	while (len--)
		trim[i++] = *s1++;
	trim[i] = '\0';
	return (trim);
}
