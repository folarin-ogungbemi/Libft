
#include <unistd.h>
#include <ctype.h>

/* Function checks for an alphabetic char in the standard C locale */

int	ft_isalpha(char c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}

int	main(void)
{
	// Library Test
	if (isalpha('z'))
		write(1, "Library: True\n", 14);
	else
		write(1, "Library: False\n", 15);
	// Custom code Test
	if (ft_isalpha('z'))
		write(1, "Custom: True\n", 13);
	else
		write(1, "Custom: False\n", 14);
	return (0);
}
