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
static char	*ft_empty(void)
{
	char	*m;

	m = (char *)malloc(1);
	if (!m)
		return (NULL);
	m[0] = '\0';
	return (m);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*m;
	size_t	i;
	size_t	s_len;

	i = 0;
	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start > ft_strlen(s))
		return (ft_empty());
	if (len > (s_len - start))
		len = s_len - start;
	m = (char *)malloc(len + 1);
	if (!m)
		return (NULL);
	while (i < len)
	{
		m[i] = s[start + i];
		i++;
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
    char *result;

    result = ft_substr("Hello, World!", 7, 5);
    printf("Result 1: %s\n", result); // Expected: "World"
    free(result);

    result = ft_substr("Hello, World!", 0, 5);
    printf("Result 2: %s\n", result); // Expected: "Hello"
    free(result);

    result = ft_substr("Hello, World!", 15, 5);
    printf("Result 3: %s\n", result); // Expected: ""
    free(result);

    result = ft_substr(NULL, 0, 5);
    printf("Result 4: %s\n", result); // Expected: "(null)"
    free(result);

    return 0;
}*/
