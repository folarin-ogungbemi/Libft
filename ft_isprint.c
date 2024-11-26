/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: foogungb <foogungb@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 17:57:51 by foogungb          #+#    #+#             */
/*   Updated: 2024/11/14 17:35:03 by foogungb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* checks for any printable character including space (32) */
int	ft_isprint(unsigned char c)
{
	if (c >= 32 && c < 127)
		return (1);
	return (0);
}
/*
int	test_ft_isprint(char c)
{
	if (isprint(c) > 0 && ft_isprint(c) > 0)
		return (1);
	else if ((isprint(c) > 0 && ft_isprint(c) <= 0)
		|| (isprint(c) <= 0 && ft_isprint(c) > 0))
		return (-1);
	return (0);
}

int	main(void)
{
	unsigned char	c;

	c = 0;
	while (c <= 254)
	{
		if (test_ft_isprint(c) == -1)
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
