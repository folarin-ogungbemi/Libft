/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: foogungb <foogungb@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 18:47:28 by foogungb          #+#    #+#             */
/*   Updated: 2024/11/23 19:42:39 by foogungb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* The functions return a pointer 
 * to the matching  byte  or  NULL  if  the character 
 * does not occur in the given memory area.*/

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*str;
	size_t				i;

	i = 0;
	str = s;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
			return ((void *)str + i);
		i++;
	}
	return (NULL);
}
/*
#include <string.h>
#include <stdio.h>
int     test_ft_memchr(const char *str)
{
        char    test[13] = "atestzingb!!";
        char    *ptr;

        ptr = test;
        while (*ptr)
        {
                if (ft_memchr(str, *ptr, 15) != memchr(str, *ptr, 15))
                {

                	printf("\n------------------------------\n");
                        printf("Fcus: %s\n", (char *)ft_memchr(str, *ptr, 15));
                        printf("Flib: %s\n",(char *)memchr(str, *ptr, 15));
                	printf("------------------------------\n");
                        return (0);
                }
                printf("\n------------------------------\n");
                printf("Tcus: %s\n", (char *)ft_memchr(str, *ptr, 15));
		printf("Tlib: %s\n",(char *)memchr(str, *ptr, 15));
                printf("------------------------------\n");
                ptr++;
        }
        return (1);
}

int     main(void)
{
        char    str[10] = "testing!!";

        if (test_ft_memchr(str))
                printf("\nResults are Equal\n\n");
        else
                printf("\nresults are not equal\n\n");
        //printf("library: %s\n", memchr(str, '\0'));
        //printf("custom: %s\n", ft_memchr(str, '\0'));
        return (0);
}*/
