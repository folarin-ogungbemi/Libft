#include <string.h>
#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	const unsigned char	*s;
	size_t		i;

	d = dest;
	s = src;
	i = 0;
	if (d < s)
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	else if (d > s)
	{
		i = n;
		while (i > 0)
		{
			d[i - 1] = s[i - 1];
			i--;
		}
	}
	return (dest);
}
/*
int	main(void)
{
	//unsigned char	dest[5];
	char	src[] = "ABCDEFGHI";

	printf("before: %s\n", src);

	//memmove(src + 3, src, 5);
	ft_memmove(src + 3, src, 5);
	printf("after: %s\n", src);
	return (0);
}*/
