/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: foogungb <foogungb@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 17:32:23 by foogungb          #+#    #+#             */
/*   Updated: 2024/11/14 17:33:05 by foogungb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Function checks for a digit (0 through 9) */
int	ft_isdigit(char c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}

/*
int	test_ft_isdigit(char c)
{
	if (isdigit(c) > 0 && ft_isdigit(c) > 0)
		return (1);
	else if ((isdigit(c) > 0 && ft_isdigit(c) <= 0)
		|| (isdigit(c) <= 0 && ft_isdigit(c) > 0))
		return (-1);
	return (0);
}

int	main(void)
{
	unsigned char	c;

	c = 0;
	while (c <= 127)
	{
		if (test_ft_isdigit(c) == -1)
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
