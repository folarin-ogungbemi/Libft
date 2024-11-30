/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: foogungb <foogungb@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 17:28:44 by foogungb          #+#    #+#             */
/*   Updated: 2024/11/25 17:36:30 by foogungb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* The  strdup()  function returns a pointer to a new string which 
 * is a duplicate of the string s.*/
char	*ft_strdup(const char *s)
{
	size_t		s_len;
	size_t		i;
	char		*d;

	i = 0;
	s_len = ft_strlen(s) + 1;
	d = (char *)malloc(s_len);
	while (s[i])
	{
		d[i] = s[i];
		i++;
	}
	d[i] = '\0';
	return (d);
}
/*
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	src[9] = "folarin!";
	char	*dest;

	dest = ft_strdup(src);
	printf("custom: %s\n", dest);
	printf("library: %s\n", strdup("folarin!"));
	free(dest);
	return (0);
}*/
