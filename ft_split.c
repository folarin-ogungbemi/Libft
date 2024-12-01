#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "libft.h"

static size_t	count_substr(char const *str, char c)
{
	size_t	count;
	int		in_substr;

	count = 0;
	in_substr = 0;
	while (*str)
	{
		if (*str != c && in_substr == 0)
		{
			in_substr = 1;
			count++;
		}
		else if (*str == c)
			in_substr = 0;
		str++;
	}
	return (count);
}
/*
static char	*ft_word(const char *s, unsigned int start, size_t len)
{
	char *substr;
	size_t i;

	substr = (char *)malloc((len + 1) * sizeof(char));
	if (!substr)
		return NULL;
	i = 0;
	while (i < len && s[start + i])
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = '\0';
	return substr;
}
*/

void	ft_free(char **m, size_t i)
{
	while (i > 0)
		free(m[--i]);
	free (m);
}

static size_t	ft_word_len(const char *s, char c)
{
	const char	*start;

	start = s;
	while (*s && *s != c)
		s++;
	return (s - start);
}

char	**ft_split(char const *s, char c)
{
	size_t		i;
	char		**m;

	i = 0;
	m = (char **)malloc((count_substr(s, c) + 1) * sizeof(char *));
	if (!m)
		return (NULL);
	while (*s)
	{
		if (*s != c)
		{
			m[i] = ft_substr(s, 0, ft_word_len(s, c));
			if (!m[i++])
			{
				ft_free(m, i);
				return (NULL);
			}
			s += ft_word_len(s, c);
		}
		else
			s++;
	}
	m[i] = NULL;
	return (m);
}
/*
int	main(void)
{
	char **result;
	int i = 0;

	result = ft_split("Hello,,flo,this,is,C,World,!", ',');
	if (result)
	{
		while (result[i])
		{
			printf("result[%d]: %s\n", i, result[i]);
			free(result[i]);
			i++;
		}
		free(result);
		result = NULL;
	}
	return (0);
}
*/
