/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: foogungb <foogungb@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 17:37:14 by foogungb          #+#    #+#             */
/*   Updated: 2024/11/14 17:34:10 by foogungb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* checks for an alphanumeric character; 
 * it is equivalent to (isalpha(c) || isdigit(c)) */
int	ft_isalnum(int c)
{
	if ((c >= 48 && c <= 57)
		|| (c >= 65 && c <= 90)
		|| (c >= 97 && c <= 122))
		return (1);
	return (0);
}
/*
int	test_ft_isalnum(char c)
{
	if (isalnum(c) > 0 && ft_isalnum(c) > 0)
		return (1);
	else if ((isalnum(c) > 0 && ft_isalnum(c) <= 0)
		|| (isalnum(c) <= 0 && ft_isalnum(c) > 0))
		return (-1);
	return (0);
}

int	main(void)
{
	unsigned char	c;

	c = 0;
	while (c <= 127)
	{
		if (test_ft_isalnum(c) == -1)
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
