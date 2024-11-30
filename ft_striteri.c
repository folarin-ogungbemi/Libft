#include "libft.h"

/* Applies the function ’f’ on each character of the string
 * passed as argument, passing its index as first argument.
 * Each character is passed by address to ’f’ to be modified if necessary.*/
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	i = 0;
	if (s == NULL || f == NULL)
		return ;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/*
#include <stdio.h>
#include <stdlib.h>

void	to_uppercase(unsigned int index, char *ch)
{
	if (ch && *ch)
		*ch = toupper(*ch);
}

int	main(void)
{
	char	str[10] = "tester!!";

	ft_striteri(str, to_uppercase);
	printf("result: %s\n", str);
	return (0);
}*/
