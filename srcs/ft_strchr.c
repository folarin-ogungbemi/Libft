
#include <stdio.h>
#include <string.h>
char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if (*s == c)
		return (char *) s;
	return (NULL);
}

int	main(void)
{
	char	str[10] = "testing!";
	printf("result 'esting': %s\n", ft_strchr(str, 'e'));
	printf("result '': %s\n", ft_strchr(str, '\0'));
	printf("lib 'esting': %s\n", strchr(str, 'e'));
	return (0);
}
