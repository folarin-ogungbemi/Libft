/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: foogungb <foogungb@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 16:21:47 by foogungb          #+#    #+#             */
/*   Updated: 2024/11/26 17:50:06 by foogungb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Allocates (with malloc(3)) and returns a copy of ’s1’ with
 * the characters specified in ’set’ removed from the beginning
 * and the end of the string.*/
char	*ft_strtrim(char const *s1, char const *set)
{
	char	*m;
	size_t	len;
	size_t	start;
	size_t	end;
	size_t	i;

	i = 0;
	start = 0;
	end = ft_strlen(s1) - 1;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while ((end > start) && ft_strchr(set, s1[end]))
		end--;
	len = end - start + 1;
	m = (char *)malloc(len + 1);
	if (!m)
		return (NULL);
	while (i < len)
	{
		m[i] = s1[start];
		i++;
		start++;
	}
	m[i] = '\0';
	return (m);
}
/*
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

int	main(void)
{
	char	*s1 = "!,!hello world:;!!";
	char	*set = "!;,:";  // Characters to remove from the start and end
	char	*trimmed = ft_strtrim(s1, set);

	if (trimmed != NULL)
	{
		printf("Trimmed string: '%s'\n", trimmed);
		free(trimmed);  // Don't forget to free the memory!
	}
	else 
		printf("Memory allocation failed or invalid input\n");
	return 0;
}*/
