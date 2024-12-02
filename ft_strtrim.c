/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: foogungb <foogungb@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 16:21:47 by foogungb          #+#    #+#             */
/*   Updated: 2024/12/02 15:25:03 by foogungb         ###   ########.fr       */
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
	if (len <= 0)
    	{
		m = (char *)malloc(sizeof(char) * 1);
		if (!m)
			return (NULL);
		m[0] = '\0';
		return m;
	}	
	m = (char *)malloc(sizeof(char) * (len + 1));
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
