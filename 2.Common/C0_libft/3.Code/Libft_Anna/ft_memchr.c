/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akreise <akreise@student.42barcelona.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 23:18:22 by akreise           #+#    #+#             */
/*   Updated: 2024/07/09 20:16:06 by akreise          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			i;

	str = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (*str == (unsigned char)c)
			return ((char *)s + i);
		str++;
		i++;
	}
	return (NULL);
}

/*#include <stdio.h>

int	main(void)
{
	char	*str = "abcdefg";
	int	c;

	c = 'd';
	ft_memchr(str, c, 5);
	printf("%s\n", (char *)ft_memchr(str, c, 5));
	return (0);
}*/
