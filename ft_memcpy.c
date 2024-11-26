/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: foogungb <foogungb@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 20:00:23 by foogungb          #+#    #+#             */
/*   Updated: 2024/11/14 18:11:23 by foogungb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

/*The memcpy() function copies n bytes from
 * memory area src to memory area dest.*/
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;
	unsigned int		i;

	d = dest;
	s = src;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
/*
int	main(void)
{
	char	dest[10] = "test";
	char	src[20] = "Hello World!!";

	printf("dest before: %s\n", dest);
	ft_memcpy(dest, src, sizeof(dest));
	printf("dest after: %s\n", dest);
	return (0);
}
*/
