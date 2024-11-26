/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: foogungb <foogungb@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 19:45:51 by foogungb          #+#    #+#             */
/*   Updated: 2024/11/23 19:59:25 by foogungb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*str1;
	const unsigned char	*str2;
	size_t				i;

	str1 = s1;
	str2 = s2;
	i = 0;
	while (i < n && str1[i] != '\0')
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		str1++;
		str2++;
	}
	if (i < n)
		return (str1[i] - str2[i]);
	return (0);
}
/*
int     test_ft_memcmp(const char *s1, const char *s2)
{
        if (ft_memcmp(s1, s2, 3) != memcmp(s1, s2, 3))
        {
                printf("result custom: %d\n", ft_memcmp(s1, s2, 3));
                printf("result lib: %d\n", memcmp(s1, s2, 3));
                return (0);
        }
        printf("\n------------------------------------\n");
        printf("result custom: %d\n", ft_memcmp(s1, s2, 3));
        printf("result lib: %d\n", ft_memcmp(s1, s2, 3));
        printf("------------------------------------\n");
        return (1);
}

int     main(void)
{
        char    s1[10] = "abcdef!";
        char    s2[10] = "abd";

        if (test_ft_memcmp(s1, s2))
                printf("\nResults are equal\n\n");
        else
                printf("\nResults are not equal\n\n");
        return (0);
}
*/
