/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnepomuc <dnepomuc@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 03:12:22 by dnepomuc          #+#    #+#             */
/*   Updated: 2024/06/09 03:22:41 by dnepomuc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*str;

	str = (const unsigned char *)s;
	while (n--)
	{
		if (*str == (unsigned char)c)
			return ((void *)str);
		str++;
	}
	return (NULL);
}
