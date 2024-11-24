#include <stdio.h>
#include <string.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	unsigned char	*str;

	str = s;
	i = 0;
	while (i < n)
	{
		str[i] = (char)c;
		i++;
	}
	return (s);
}
/*
int	main(void)
{
	char	str[10] = "test!";
	char	*result;
	char	*lib;

	result = ft_memset(str, '0', sizeof(str));
	lib = memset(str, '0', sizeof(str));
	printf("result: %s\n", result);
	printf("lib: %s\n", lib);
	return (0);
}*/
