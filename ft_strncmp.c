/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: foogungb <foogungb@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 18:02:24 by foogungb          #+#    #+#             */
/*   Updated: 2024/11/23 18:44:53 by foogungb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* The function compares only the first (at most) n bytes of s1 and s2.*/
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((i < n) && (s1[i] != '\0'))
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if (i < n)
		return (s1[i] - s2[i]);
	return (0);
}
/*
#include <string.h>
#include <stdio.h>
int	test_ft_strncmp(const char *s1, const char *s2)
{
	if (ft_strncmp(s1, s2, 3) != strncmp(s1, s2, 3))
	{
		printf("result custom: %d\n", ft_strncmp(s1, s2, 3));
		printf("result lib: %d\n", strncmp(s1, s2, 3));
		return (0);
	}
	printf("\n------------------------------------\n");
	printf("result custom: %d\n", ft_strncmp(s1, s2, 3));
	printf("result lib: %d\n", ft_strncmp(s1, s2, 3));
	printf("------------------------------------\n");
	return (1);
}

int	main(void)
{
	char	s1[10] = "abcdef!";
	char	s2[10] = "ab";

	if (test_ft_strncmp(s1, s2))
		printf("\nResults are equal\n\n");
	else
		printf("\nResults are not equal\n\n");
	return (0);
}*/
