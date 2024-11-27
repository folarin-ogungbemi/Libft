/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                        :+:      :+:    :+:     */
/*                                                    +:+ +:+         +:+     */
/*   By: foogungb <foogungb@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 18:08:50 by foogungb          #+#    #+#             */
/*   Updated: 2024/11/21 15:47:27 by foogungb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>


size_t	ft_count(int nb)
{
	size_t	count;

	count = 0;
	if (nb <= 0)
		count++;
	while (nb != 0)
	{
		nb = nb / 10;
		count++;
	}
	return (count);
}
		
char	*ft_itoa(int n)
{
	char	*m;
	size_t	len;
	size_t	i;
	size_t	temp;

	temp = n;
	len = ft_count(n);
	i = len - 1;
	m = (char *)malloc(len + 1);
	if (!m)
		return (NULL);
	m[len] = '\0';
	if (n < 0)
	{
		m[0] = '-';
		temp = n * -1;
	}
	while (temp > 0)
	{
		m[i] = (temp % 10) + 48;
		temp /= 10;
		i--;
	}
	if (n == 0)
		m[0] = 48;
	return (m);
}
/*
int	main(void)
{
	int	x;
	char	*result;

	x = 2345;
	result = ft_itoa(x);
	printf("result %s\n", result);
	free(result);
	return (0);
}
*/
