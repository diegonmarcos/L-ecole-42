/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnepomuc <dnepomuc@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 14:34:04 by diegonmarco       #+#    #+#             */
/*   Updated: 2024/07/23 16:23:02 by dnepomuc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	move_memory(char *dst, const char *src, size_t len)
{
	size_t	i;

	if (dst > src)
	{
		while (len-- > 0)
			dst[len] = src[len];
	}
	else
	{
		i = 0;
		while (i < len)
		{
			dst[i] = src[i];
			i++;
		}
	}
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	if (len == 0)
		return (dst);
	if (!dst || !src)
		return (NULL);
	move_memory((char *)dst, (const char *)src, len);
	return (dst);
}
