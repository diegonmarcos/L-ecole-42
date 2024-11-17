/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinepomu <dinepomu@student.42>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 10:58:02 by dinepomu          #+#    #+#             */
/*   Updated: 2024/11/10 11:54:56 by dinepomu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * ************************************************************************** *
 * @syntax: void *ft_memchr(const void *s, int c, size_t n);
 * @brief: scans the initial n bytes of the memory area pointed to by s for 
 * 			the first instance of c.
 * @param: s: pointer to the memory area to be scanned.
 * @return: returns a pointer to the matching byte or NULL if the character 
 * 			does not occur in the given memory area.
 * 
 * @note:
 * 
 * @file: ft_memchr.c
 * @author: Diego <dinepomu@student.42>
 * @created: 03/Aug/2024 12:07
 * @updated: 10/Nov/2024 11:54
 * ************************************************************************** *
 */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char		*str;
	size_t				i;
	unsigned char		uc;

	str = (unsigned char *) s;
	uc = (unsigned char) c;
	i = 0;
	while (i < n)
	{
		if (str[i] == uc)
			return ((void *) &str[i]);
		i++;
	}
	return (NULL);
}
