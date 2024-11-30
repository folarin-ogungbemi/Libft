/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: foogungb <foogungb@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 16:29:07 by foogungb          #+#    #+#             */
/*   Updated: 2024/11/23 17:13:01 by foogungb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* The  strchr() function returns a pointer to the first occurrence of the
       character c in the string s.*/
char	*ft_strchr(const char *s, int c)
{
	if (!s || !c)
		return (NULL);
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if (*s == (char)c)
		return ((char *)s);
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>
int	test_ft_strchr(const char *str)
{
	char	test[13] = "atestzingb!!";
	char	*ptr;

	ptr = test;	
	while (*ptr)
	{
		if (ft_strchr(str, *ptr) != strchr(str, *ptr))
		{
			printf("result: %s\n", ft_strchr(str, *ptr));
			return (0);
		}
		printf("------------------------------\n");
		printf("result: %s\n", ft_strchr(str, *ptr));
		ptr++;
	}
	return (1);
}

int	main(void)
{
	char	str[10] = "testing!!";
	char	*custom;
	char	*library;
	
	
	if (test_ft_strchr(str))
		printf("\nResults are Equal\n\n");
	else
		printf("\nresults are not equal\n\n");	
        printf("custom: %s\n", ft_strchr(str, '\0'));
        printf("library: %s\n", strchr(str, '\0'));
	return (0);
}
*/
