
#include "libft.h"

static int			ft_words(char const *str, char c)
{
	int number_word;

	number_word = 0;
	while (*str)
	{
		if (!(*str == c))
		{
			while (!(*str == c || *str == 0))
				str++;
			if (*str == c || *str == '\0')
				number_word++;
		}
		else if (*str)
			str++;
	}
	return (number_word);
}

static int			ft_words_len(char const *str, char c)
{
	int number_cara_word;

	number_cara_word = 0;
	while (*str == c)
		str++;
	while (!(*str == c || *str == '\0'))
	{
		number_cara_word++;
		str++;
	}
	return (number_cara_word);
}

static void			*free_table(char **table, int i)
{
	while (i--)
		free(table[i]);
	free(table);
	table = NULL;
	return (NULL);
}

static void			fill_table(char **table, char const *str, char c,
		int number_word)
{
	int		k;
	int		i;
	int		number_cara_word;

	number_cara_word = ft_words_len(str, c);
	i = -1;
	k = -1;
	while (++i < number_word)
	{
		k = -1;
		number_cara_word = ft_words_len(str, c);
		if (!(table[i] = (char*)malloc((number_cara_word + 1) * sizeof(char))))
			if (!free_table(table, i))
				break ;
		while (*str == c)
			str++;
		if (!(*str == c || *str == 0))
		{
			while (++k < number_cara_word)
				table[i][k] = *str++;
			table[i][k] = '\0';
		}
	}
	if (table)
		table[i] = 0;
}

char				**ft_split(char const *str, char c)
{
	int			i;
	char		**table;
	int			number_word;

	if (!str)
		return (NULL);
	i = -1;
	table = NULL;
	number_word = ft_words(str, c);
	if (!(table = (char**)malloc((number_word + 1) * sizeof(char*))))
		return (NULL);
	fill_table(table, str, c, number_word);
	return (table);
}
