/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: foogungb <foogungb@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 15:21:46 by foogungb          #+#    #+#             */
/*   Updated: 2024/11/26 19:13:17 by foogungb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

/* The strlcat() function appends the NUL-terminated string
 * src to the end of dst.  It will append at most size - strlen(dst) - 1 bytes,
 * NUL-terminating the result.*/
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	src_len;
	size_t	dst_len;

	i = 0;	
	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	if (size <= dst_len)
		return (size + src_len);
	while (i < (size - dst_len - 1) && src[i] != '\0')
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}
/*
int     main(void)
{
        char    dst[7] = "hello, ";
        char    src[10] = "memory!";

        printf("custom: %ld\n", ft_strlcat(dst, src, sizeof(dst)));
        printf("custom: %s\n", dst);
        return (0);
}*/
