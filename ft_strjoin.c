/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: foogungb <foogungb@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 15:52:30 by foogungb          #+#    #+#             */
/*   Updated: 2024/11/26 19:13:05 by foogungb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

/* Allocates (with malloc(3)) and returns a new string,
 * which is the result of the concatenation of ’s1’ and ’s2’.*/
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*m;
	size_t	total_len;
	size_t	len_s1;
	size_t	len_s2;

	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	total_len = len_s1 + len_s2 + 1;
	m = (char *)malloc(total_len);
	if (!m)
		return (NULL);
	ft_strlcpy(m, s1, len_s1);
	ft_strlcat(m, s2, total_len);
	return (m);
}
/*
int	main(void)
{
	char	s1[10] = "Hello, ";
	char	s2[10] = "World!";
	char	*result;

	result = ft_strjoin(s1, s2);
	printf("result: %s\n", result);
	free(result);
	return (0);
}*/
