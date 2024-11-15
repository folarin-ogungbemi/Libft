#include <unistd.h>
#include <ctype.h>

/* Function checks for a digit (0 through 9). */

int	ft_isdigit(char c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
/*
int	main(void)
{
	// Library Test
	if (isdigit('0'))
		write(1, "Library: True\n", 14);
	else
		write(1, "Library: False\n", 15);
	// Custom code Test
	if (ft_isdigit('0'))
		write(1, "Custom: True\n", 13);
	else
		write(1, "Custom: False\n", 14);
	return (0);
}*/
