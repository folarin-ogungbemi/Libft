#include <unistd.h>
#include <ctype.h>

/* checks for an alphanumeric character; 
 * it is equivalent to (isalpha(c) || isdigit(c)) */
int	ft_isalnum(char c)
{
	if ((c >= 48 && c <= 57) 
	|| (c >= 65 && c <= 90) 
	|| (c >= 97 && c <= 122))
		return (1);
	return (0);
}	
/*
int	main(void)
{
	// Library function test
	if (isalnum('0'))
		write(1, "True!\n", 6);
	else
		write(2, "False!\n", 7);
	// Custom function test
	if (ft_isalnum('0'))
		write(1, "True!\n", 6);
	else
		write(2, "False!\n", 7);
	return (0);
}*/
