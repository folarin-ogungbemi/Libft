/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: foogungb <foogungb@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 16:56:31 by foogungb          #+#    #+#             */
/*   Updated: 2024/11/26 15:11:07 by foogungb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Function returns if space, form-feed ('\f'), newline
 * ('\n'), carriage return ('\r'), horizontal tab ('\t'),
 *  and vertical tab ('\v').*/
int	ft_isspace(unsigned char c)
{
	if ((c >= 9 && c <= 13) || (c == 32))
		return (1);
	return (0);
}
