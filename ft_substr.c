/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: foogungb <foogungb@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 17:38:33 by foogungb          #+#    #+#             */
/*   Updated: 2024/11/26 15:47:57 by foogungb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Allocates (with malloc(3)) and returns a substring from the string ’s’.
 * The substring begins at index ’start’ and is of maximum size ’len’.*/
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*m;
	size_t	i;

	i = 0;
	m = (char *)malloc(len);
	if (!m || (start > len))
		return (NULL);
	while (start < len)
	{
		m[i] = s[start];
		i++;
		start++;
	}
	m[i] = '\0';
	return (m);
}
/*
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>

int	main(void)
{
	char	str[10] = "testing!!";
	int	start = 5;
	char	*result;

	result = ft_substr(str, start, sizeof(str));
	printf("result: %s\n", result);
	free(result);
	return (0);
}
*/
