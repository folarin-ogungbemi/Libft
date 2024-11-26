/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: foogungb <foogungb@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 17:04:58 by foogungb          #+#    #+#             */
/*   Updated: 2024/11/23 17:55:36 by foogungb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

/* The strrchr() function returns a pointer to the last occurrence
 * of  the  character  c  in  the string s.*/
char	*ft_strrchr(const char *s, int c)
{
	const char	*seen;

	seen = NULL;
	while (*s)
	{
		if (*s == c)
			seen = s;
		s++;
	}
	if (*s == c)
		seen = s;
	return ((char *)seen);
}
/*
int     test_ft_strrchr(const char *str)
{
        char    test[13] = "atestzingb!!";
        char    *ptr;

        ptr = test;
        while (*ptr)
        {
                if (ft_strrchr(str, *ptr) != strrchr(str, *ptr))
                {
                        printf("result: %s\n", ft_strrchr(str, *ptr));
                        return (0);
                }
                printf("------------------------------\n");
                printf("result: %s\n", ft_strrchr(str, *ptr));
                ptr++;
        }
        return (1);
}

int     main(void)
{
        char    str[10] = "testing!!";

        if (test_ft_strrchr(str))
                printf("\nResults are Equal\n\n");
        else
                printf("\nresults are not equal\n\n");
        printf("custom: %s\n", ft_strrchr(str, '\0'));
        printf("library: %s\n", strrchr(str, '\0'));
        return (0);
}
*/
