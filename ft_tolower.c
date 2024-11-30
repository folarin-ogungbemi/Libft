/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: foogungb <foogungb@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 16:58:10 by foogungb          #+#    #+#             */
/*   Updated: 2024/11/26 15:30:31 by foogungb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <unistd.h>

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	return (c);
}
/*
int     test_ft_tolower(char c)
{
        if (tolower(c) > 0 && ft_tolower(c) > 0)
                return (1);
        else if ((tolower(c) > 0 && ft_tolower(c) <= 0)
                || (tolower(c) <= 0 && ft_tolower(c) > 0))
                return (-1);
        return (0);
}

int     main(void)
{
        unsigned char   c;

        c = 0;
        while (c <= 127)
        {
                if (test_ft_tolower(c) == -1)
                {
                        write(1, "One function disagree on char: ", 31);
                        write(1, &c, 1);
                        write(1, "\n", 1);
                        return (1);
                }
                c++;
        }
        write(1, "Both functions agree", 20);
        write(1, "\n", 1);
        return (0);
}*/
