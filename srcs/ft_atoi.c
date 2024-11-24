#include <stdio.h>
#include <stdlib.h>
#include "../includes/libft.h"

/* Function converts the initial portion of
 * the string pointed to by nptr to int. */
int	ft_atoi(const char *nptr)
{
	int	num;
	int	sign;

	sign = 1;
	num = 0;
	while (ft_isspace(*nptr))
		nptr++;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			sign *= -1;
		nptr++;
	}
	while (ft_isdigit(*nptr))
	{
		num = num * 10 + (*nptr - 48);
		nptr++;
	}
	return (sign * num);
}
/*
int	main(void)
{
	char	str[10] = "  -12";

	printf("custom: %d\n", ft_atoi(str));
	printf("library: %d\n", atoi(str));
	return (0);
}*/
