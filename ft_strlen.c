/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: foogungb <foogungb@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 18:08:50 by foogungb          #+#    #+#             */
/*   Updated: 2024/11/21 15:47:27 by foogungb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

/* The function calculates the length of the string 
 * pointed to by s, excluding the terminating null byte ('\0') */
size_t	ft_strlen(const char *str)
{
	const char	*end;

	end = str;
	while (*end)
		end++;
	return (end - str);
}
/*
#include <stddef.h>
#include <string.h>
#include <stdio.h>
int	main(void)
{
	char	c[10] = "memory!";
	int	custom;
	int	lib;

	custom = ft_strlen(c);
	printf("Custom: %d\n", custom);
	lib = strlen(c);
	printf("Library: %d\n", lib);
	return (0);
}*/
