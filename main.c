#include "./includes/libft.h"

void	test_product_ft_memmove(void)
{
	char	src[] = "Hello World!";
	char	dst[20];
	char	s[] = "Hello";
	char	d[] = "World";
	char	b[20] = "1234567890";

	printf("ft_memmove 'Hello World!': %s\n", (char *)ft_memmove(dst, src, 13));
	printf("ft_memmove 'World': %s\n", (char *)ft_memmove(d, s, 0));
	printf("ft_memmove 1234590: %s\n", (char *)ft_memmove(b + 3, b, 5));
	printf("ft_memmove should not crash: %s\n",(char *)ft_memmove(NULL, b, 5));
}

int     main(void)
{
	printf("Running production...\n\n");
	/* FT_ISALPHA */
	if (ft_isalpha('a'))
		printf("ft_isalpha('a'): True!\n");
	else
		printf("ft_isalpha: False\n");
	/* FT_ISALNUM */
	printf("--------------------\n");
	if (ft_isalnum('1'))
		printf("ft_isalnum('1'): True! \n");
	else
		printf("ft_isalnum: False\n");
	/* FT_ISDIGIT */
	printf("--------------------\n");
	if (ft_isdigit('1'))
		printf("ft_isdigit('1'): True! \n");
	else
		printf("ft_isdigit: False\n");
	/* FT_MEMMOVE */
	printf("--------------------\n");
	test_product_ft_memmove();
	return (0);
} 
