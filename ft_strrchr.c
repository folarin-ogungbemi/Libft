/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: foogungb <foogungb@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 17:04:58 by foogungb          #+#    #+#             */
/*   Updated: 2024/12/02 14:59:54 by foogungb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* The strrchr() function returns a pointer to the last occurrence
 * of  the  character  c  in  the string s.*/
char	*ft_strrchr(const char *s, int c)
{
	const char	*seen;

	seen = NULL;
	if (c < 0 || c > 255)
		return ((char *)s);
	if (c == '\0')
	{
		while (*s)
			s++;
		return ((char *)s);
	}
	while (*s)
	{
		if (*s == c)
			seen = s;
		s++;
	}
	return ((char *)seen);
}
