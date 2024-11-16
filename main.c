
#include "libft.h"

int	main(void)
{
	//unsigned char	dest[5];
	char	src[] = "ABCDEFGHI";

	printf("before: %s\n", src);

	//memmove(src + 3, src, 5);
	ft_memmove(src + 3, src, 5);
	printf("after: %s\n", src);
	return (0);
}
