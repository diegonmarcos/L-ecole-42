/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akreise <akreise@student.42barcelona.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 22:21:44 by akreise           #+#    #+#             */
/*   Updated: 2024/07/02 20:31:52 by akreise          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"
#include <unistd.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	slen;
	size_t	i;

	slen = ft_strlen(src);
	i = 0;
	if (size < 1)
		return (slen);
	while (src[i] != '\0' && i < size -1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (slen);
}

/*#include <stdio.h>

int	main(void)
{
	char	src[] = "Hello anna!";
	char	dst[8];
	
	printf("%zu\n", ft_strlcpy(dst, src, 5));
	printf("%s\n", dst);
	return (0);
}*/
