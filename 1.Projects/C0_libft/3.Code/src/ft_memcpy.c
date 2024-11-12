/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinepomu <dinepomu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 10:58:17 by dinepomu          #+#    #+#             */
/*   Updated: 2024/11/12 14:29:33 by dinepomu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * ************************************************************************** *
 * @syntax: void *ft_memcpy(void *dst, const void *src, size_t n);
 * @brief: copies n bytes from memory area src to memory area dst.
 * @param: 1. dst - pointer to the destination array where the content is 
 * 			to be copied.
 * @return: pointer to the destination array.
 * 
 * @note: Faster then memmove but less safe: memcpy simply copies data from 
 * 			the source to the destination without considering potential 
 * 			overlaps. This makes it faster but can lead to unexpected results
 * 			if the source and destination memory blocks overlap.
 * 
 * @file: ft_memcpy.c
 * @author: Diego <dinepomu@student.42>
 * @created: 03/Aug/2024 12:07
 * @updated: 10/Nov/2024 11:55
 * ************************************************************************** *
 */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*tmp_dst;
	unsigned char	*tmp_src;

	if (dst == (void *)0 && src == (void *)0)
		return (dst);
	tmp_dst = (unsigned char *) dst;
	tmp_src = (unsigned char *) src;
	while (n > 0)
	{
		*(tmp_dst++) = *(tmp_src++);
		n--;
	}
	return (dst);
}

/*
int main()
{
	char src[] = "Hello World!";
	char dst[13];
	ft_memcpy(dst, src, 13);
	printf("%s\n", dst);
	return (0);
}
*/