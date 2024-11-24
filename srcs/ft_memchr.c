#include <stdio.h>
#include <string.h>


void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*str;
	size_t			i;

	str = s;
	i = 0;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
			return ((void *)&str[i]);
		i++;
	}
	return (NULL);
}

int	main(void)
{
	unsigned char	str[10] = "boxing";
	char	*result;

	result = ft_memchr(str, 'x', 5);
	printf("result: %s\n", result);

	return (0);
}

