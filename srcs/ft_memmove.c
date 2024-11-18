
#include <stddef.h>

/* The  memmove() function copies n bytes 
 * from memory area src to memory area dest. */
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	const unsigned char	*s;
	size_t		i;

	d = dest;
	s = src;
	i = 0;
	if (!dest || !src)
		return (NULL);
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
