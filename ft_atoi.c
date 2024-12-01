/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: foogungb <foogungb@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 16:55:16 by foogungb          #+#    #+#             */
/*   Updated: 2024/11/25 16:59:49 by foogungb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(unsigned char c)
{
	if ((c >= 9 && c <= 13) || (c == 32))
		return (1);
	return (0);
}

/* Function converts the initial portion of the
 * string pointed to by mptr to int. */
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
#include <stdio.h>
#include <stdlib.h>
static int     test_ft_atoi(char *s)
{
	if (!s)
		return (-1);
        if (atoi(s) == ft_atoi(s))
		return (1);
	return (-1);
}

int     main(void)
{
        char   *str[] = {"  -12", "-0", "invalid", "0123456789", "+1", NULL};
	size_t	i;

	i = 0;
        while (str[i])
        {
                if (test_ft_atoi(str[i]) == -1)
                {
                        write(1, "One function disagree: ", 25);
                        write(1, str[i], ft_strlen(str[i]));
                        write(1, "\n", 1);
                        return (1);
                }
                i++;
        }
        write(1, "Both functions agree", 20);
        write(1, "\n", 1);
        return (0);
}
*/
