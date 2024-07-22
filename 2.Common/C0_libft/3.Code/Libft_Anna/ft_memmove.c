/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akreise <akreise@student.42barcelona.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 20:31:37 by akreise           #+#    #+#             */
/*   Updated: 2024/07/09 20:47:16 by akreise          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t				i;

	if (!dest || !src)
		return (0);
	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (dest > src)
	{
		i = n;
		while (i > 0)
		{
			i--;
			d[i] = s[i];
		}
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}

/*#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	src[] = "hello world";
	
	//ft_memmove(&src[4], &src[3], 3);
	ft_memmove(&src[4], &src[3], 3);
	printf("%s\n", src);
	return (0);
}*/
