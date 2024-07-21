/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnepomuc <dnepomuc@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 20:53:44 by dnepomuc          #+#    #+#             */
/*   Updated: 2024/06/20 03:43:39 by dnepomuc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int c, size_t len)
{
	unsigned char	*util;
	size_t			index;

	util = (unsigned char *) dest;
	index = 0;
	while (index < len)
	{
		util[index] = c;
		index++;
	}
	return (util);
}
