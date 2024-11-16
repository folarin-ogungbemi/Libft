#include <string.h>
#include <check.h>
#include <stdio.h>

size_t ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}
/*
int	main(void)
{
	char string[] = "folarin!";
	printf("result: %ld\n", ft_strlen(string));
	return (0);
}
*/
