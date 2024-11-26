/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: foogungb <foogungb@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 14:34:01 by foogungb          #+#    #+#             */
/*   Updated: 2024/11/21 15:50:44 by foogungb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

/*The strlcpy() function copies up to size - 1 characters
 * from the NUL-terminated string src to dst, NUL-terminating the result. */

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	if (size > 0)
	{
		i = 0;
		while (i < size)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}
/*
int	main(void)
{
	char	dst[2] = {'\0'};
	char	src[10] = "memory!";

	printf("custom: %ld\n", ft_strlcpy(dst, src, sizeof(dst)));
	printf("dst size: %ld\n", sizeof(dst));
	printf("dst len: %ld\n", ft_strlen(dst));
	printf("result: %s\n", dst);
	//printf("library: %ld\n", strlcpy(dst, src, sizeof(dst)));
	return (0);
}*/
