#include <check.h>
#include <stdio.h>
#include <string.h>
#include "../includes/libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	int	i;

	if (size > 0)
	{
		i = 0;
		while (i < (size - 1) && src[i])
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}
/*
int	main(void)
{
	char	buffer[5];
	const char *src = "Hello, World!";

	printf(GREEN "result: %ld\n", ft_strlcpy(buffer, src, sizeof(buffer)));
	printf(YELLOW "buffer: %s\n", buffer);
	return (0);
}
*/
