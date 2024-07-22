/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akreise <akreise@student.42barcelona.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 16:06:44 by akreise           #+#    #+#             */
/*   Updated: 2024/07/09 18:32:04 by akreise          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <strings.h>

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*p;

	i = 0;
	p = (unsigned char *)s;
	while (i < n)
	{
		p[i] = '\0';
		i++;
	}
}
/*
#include <stdio.h>

int	main(void)
{
	char	str[] = "annamanna";
	char	str1[] = "annamanna";

	bzero(str1, 3);
	printf("%s\n", str1);
	ft_bzero(str, 3);
	printf("%s\n", str);
	return (0);
}*/
