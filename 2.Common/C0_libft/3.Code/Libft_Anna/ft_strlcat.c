/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akreise <akreise@student.42barcelona.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 20:33:16 by akreise           #+#    #+#             */
/*   Updated: 2024/07/03 20:46:18 by akreise          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	lendst;
	size_t	lensrc;
	size_t	lentotal;

	lendst = 0;
	lensrc = 0;
	i = 0;
	while (dst[lendst] != '\0' && lendst < size)
		lendst++;
	while (src[lensrc])
		lensrc++;
	lentotal = lendst + lensrc;
	if (lendst >= size)
		return (size + lensrc);
	while (src[i] != '\0' && (i < (size - lendst - 1)))
	{
		dst[lendst + i] = src[i];
		i++;
	}
	dst[lendst + i] = '\0';
	return (lentotal);
}

/*#include <bsd/string.h>
#include <stdio.h>

int	main(void)
{
	char	dst[5] = "Hey";
	char	src[] = " Anna!";

	char	dst2[5] = "Hey";
	char	src2[] = " Anna!";
	
	printf("Original: %zu\n", strlcat(dst2, src2, 6));
	printf("%s\n", dst2);
	printf("Mine: %zu\n", ft_strlcat(dst, src, 6));
	printf("%s\n", dst);
	return (0);
}*/
