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

#include <stdio.h>

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return(c - 32);
	return (c);
}
/*
int	main(void)
{
	char	c;

	c = 'a';
	printf("return: %c\n", ft_toupper(c));
	return (0);
}*/
