/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: foogungb <foogungb@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 16:33:52 by foogungb          #+#    #+#             */
/*   Updated: 2024/11/21 16:56:36 by foogungb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <ctype.h>

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	return (c);
}
/*
int     test_ft_toupper(char c)
{
        if (toupper(c) > 0 && ft_toupper(c) > 0)
                return (1);
        else if ((toupper(c) > 0 && ft_toupper(c) <= 0)
                || (toupper(c) <= 0 && ft_toupper(c) > 0))
                return (-1);
        return (0);
}

int     main(void)
{
        unsigned char   c;

        c = 0;
        while (c <= 127)
        {
                if (test_ft_toupper(c) == -1)
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
