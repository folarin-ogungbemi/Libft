/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: foogungb <foogungb@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 15:32:13 by foogungb          #+#    #+#             */
/*   Updated: 2024/11/14 17:31:26 by foogungb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Function checks for alphabetic character
 * in the standard C locale */
int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}
/*
int	test_ft_isalpha(char c)
{
	if (isalpha(c) > 0 && ft_isalpha(c) > 0)
		return (1);
	else if ((isalpha(c) > 0 && ft_isalpha(c) <= 0)
		|| (isalpha(c) <= 0 && ft_isalpha(c) > 0))
		return (-1);
	return (0);
}

int	main(void)
{
	unsigned char	c;

	c = 0;
	while (c <= 127)
	{
		if (test_ft_isalpha(c) == -1)
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
