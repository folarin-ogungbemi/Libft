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

#include <stdio.h>

int     ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return(c + 32);
	return (c);
}
/*
int	main(void)
{
	char	c;

	c = 'Z';
	printf("return: %c\n", ft_toupper(c));
	return (0);
}*/
