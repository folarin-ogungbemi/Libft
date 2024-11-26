/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: foogungb <foogungb@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 17:05:01 by foogungb          #+#    #+#             */
/*   Updated: 2024/11/25 17:05:57 by foogungb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

/* Function allocates memory for an array of nmemb elements of size bytes each
 * and returns a pointer to the allocated memory. The memory is set to zero.
 * If nmemb or size is 0, then calloc() returns either NULL,
 * or a unique pointer value  that  can  later be successfully passed to free().*/
void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*mem;
	size_t	total_size;

	total_size = nmemb * size;
	if (nmemb == 0 || size == 0)
		return (NULL);
	if (nmemb != 0 && (total_size / nmemb != size))
	       return (NULL);	
	mem = malloc(total_size);
	if (!mem)
		return (NULL);
	ft_bzero(mem, total_size);
	return (mem);
}
/*
int	main(void)
{
	int	*arr;
	int	i;

	i = 0;
	arr = (int *)ft_calloc(5, sizeof(arr));
	if (!arr)
		return (1);
	while (i < 5)
	{
		printf("%d: %d\n", i, arr[i]);
       		i++;
	}
	free(arr);
	return (0);
}*/
