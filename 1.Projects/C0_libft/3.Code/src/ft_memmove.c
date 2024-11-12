/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinepomu <dinepomu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 10:58:26 by dinepomu          #+#    #+#             */
/*   Updated: 2024/11/12 14:30:40 by dinepomu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * ************************************************************************** *
 * @syntax: void *ft_memmove(void *dst, const void *src, size_t len);
 * @brief: copies len bytes from memory area src to memory area dst.
 * @param: 1. dst - pointer to the destination array where the content is
 * @return: pointer to the destination array.
 * 
 * @note: Slower but safer then memcpy: memmove is designed to handle 
 * 			overlapping memory regions correctly. It ensures that the data 
 * 			is copied in a way that prevents data corruption, even if the 
 * 			source and destination overlap. This often involves creating a 
 * 			temporary copy of the data.
 * 
 * @file: ft_memmove.c
 * @author: Diego <dinepomu@student.42>
 * @created: 03/Aug/2024 12:07
 * @updated: 10/Nov/2024 11:56
 * ************************************************************************** *
 */

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

int main()
{
	char src[] = "Hello World!";
	char dst[13];
	ft_memmove(dst, src, 13);
	printf("%s\n", dst);
	return (0);
}