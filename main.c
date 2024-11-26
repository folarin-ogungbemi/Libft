/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: foogungb <foogungb@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 17:26:49 by foogungb          #+#    #+#             */
/*   Updated: 2024/11/26 15:32:53 by foogungb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char	str[14] = "Hello, World!";
	char	*substr;

	substr = ft_substr(str, 0, 4);
	printf("substr: %s\n", substr);
	free(substr);
	return (0);
}
