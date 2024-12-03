/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: foogungb <foogungb@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 16:21:47 by foogungb          #+#    #+#             */
/*   Updated: 2024/12/03 17:04:09 by foogungb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_empty_str(char const *s1)
{
	char	*m;

	if (s1 == NULL || s1[0] == '\0')
	{
		m = (char *)malloc(sizeof(char));
		if (!m)
			return (NULL);
		m[0] = '\0';
		return (m);
	}
	return (NULL);
}

char	*ft_start(const char *s, char const *c)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while ((c[j] != '\0') && (s[i + j] == c[j]))
		{
			printf("result: %c\n", 
			j++;
		i++;
	}
	return ((char *)&s[i]);
}

/* Allocates (with malloc(3)) and returns a copy of ’s1’ with
 * the characters specified in ’set’ removed from the beginning
 * and the end of the string.*/
char	*ft_strtrim(char const *s1, char const *set)
{
	char	*m;
	//size_t	len;
	char	*start;
	//size_t	end;
	//size_t	i;

	//i = 0;
	//start = 0;
	m = ft_empty_str(s1);
	if (m)
		return (m);
	//end = ft_strlen(s1) - 1;
	start = ft_start(s1, set);
	printf("start: %s\n", start);
	//while (s1[start] && ft_strchr(set, s1[start]))
	//	start++;
	/*while ((end > start) && ft_strchr(set, s1[end]))
		end--;
	if (end < start)
		len = 0;
	else
		len = end - start + 1;
	if (len == 0)
    	{
		m = (char *)malloc(sizeof(char));
		if (!m)
			return (NULL);
		m[0] = '\0';
		return (m);
	}
	m = (char *)malloc(sizeof(char) * (len + 1));
	if (!m)
		return (NULL);
	while (i < len)
	{
		m[i] = s1[start + i];
		i++;
	}
	m[i] = '\0';
	return (m);*/
	return (m);
}
