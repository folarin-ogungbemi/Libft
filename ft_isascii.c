/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: foogungb <foogungb@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 17:42:26 by foogungb          #+#    #+#             */
/*   Updated: 2024/11/14 17:34:36 by foogungb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* checks whether c is a 7-bit unsigned char value
 * that fits into the ASCII character set. 
 *  8-bit is considered chars btw 128-255.*/
int	ft_isascii(unsigned char c)
{
	if (c <= 127)
		return (1);
	return (0);
}
/*
int	test_ft_isascii(char c)
{
	if (isascii(c) > 0 && ft_isascii(c) > 0)
		return (1);
	else if ((isascii(c) > 0 && ft_isascii(c) <= 0)
		|| (isascii(c) <= 0 && ft_isascii(c) > 0))
		return (-1);
	return (0);
}

int	main(void)
{
	unsigned char	c;

	c = 0;
	while (c <= 254)
	{
		if (test_ft_isascii(c) == -1)
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
