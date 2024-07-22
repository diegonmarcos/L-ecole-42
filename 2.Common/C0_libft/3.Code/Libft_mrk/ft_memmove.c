/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matomas <matomas@student.42barcelona.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 13:52:44 by matomas           #+#    #+#             */
/*   Updated: 2024/07/13 17:06:40 by matomas          ###   ########.fr       */
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
