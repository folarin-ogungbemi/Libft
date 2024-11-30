#include "libft.h"
/* Applies the function f to each character of the string s,
 * passing its index as the first argument and the character itself
 * as the second.A new string is created (using malloc(3)) to collect 
 * the results from the successive applications of f. */
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*m;
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(s);
	m = (char *)malloc(len + 1);
	if (!m)
		return (NULL);
	while (i < len)
	{
		m[i] = f(i, s[i]);
		i++;
	}
	m[i] = '\0';
	return (m);
}
/*
#include <stdio.h>
#include <stdlib.h>
char	c(unsigned int i, char c)
{
	return (c);
}

int	main(void)
{
	char	s[10] = "testing!";
	char	*result;

	result = ft_strmapi(s, c);
	if (!result)
		return (-1);
	printf("result: %s\n", result);
	free(result);
	return (0);
}
*/
