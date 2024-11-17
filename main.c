#include "./includes/libft.h"

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
	return (0);
} 
