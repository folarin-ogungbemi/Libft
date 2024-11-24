#include <stdio.h>
#include <string.h>

/* The function locates the first occurrence of the null-terminated string
 * little in the string big, where not more than len characters are searched.
 * Characters that appear after a ‘\0’ character are not searched. */

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*little == '\0')
		return ((char *)big);
	while (big[i] && i < len)
	{
		j = 0;
		if (big[i] == little[j])
		{
			while (big[i + j] && big[i + j] == little[j] && i + j < len)
				j++;
			if (little[j] == '\0')
				return ((char *)&big[i]);
		}
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	const char *largestring = "Foo Bay Bar Baz";
	const char *smallstring = "Bar";
	char *ptr;

	ptr = ft_strnstr(largestring, smallstring, 4);
	printf("result: %s\n", ptr);
	return (0);
}*/
