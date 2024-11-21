#include "../includes/libft.h"

/* Function appends the NUL-terminated string src to the end of dst.
 * It will append at most size - strlen(dst) 1 bytes, NUL-terminating the result.*/
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dst_len;

	dst_len = ft_strlen(dst) + 1; 
	i = 0;
	if (size > dst_len)
	{
		while (i < (size - dst_len))
		{
			dst[dst_len] = src[i];
			i++;
			dst_len++;
		}
		dst[dst_len] = '\0';
	}

	return (ft_strlen(src));
}

int	main(void)
{
	char	dst[10];
	char	src[20] = "tester";

	printf("custom %ld\n", ft_strlcat(dst, src, sizeof(dst)));
	printf("custom %ld\n", strlcat(dst, src, sizeof(dst)));

	return (0);
}
