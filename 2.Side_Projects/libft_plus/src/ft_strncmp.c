/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinepomu <dinepomu@student.42>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 11:00:14 by dinepomu          #+#    #+#             */
/*   Updated: 2024/11/10 12:02:21 by dinepomu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * ************************************************************************** *
 * @syntax: int ft_strncmp(const char *s1, const char *s2, size_t n);
 * @brief: compares the first n bytes of s1 and s2.
 * @param: 1. s1: string to be compared.
 * @return: 2. s2: string to be compared.
 * 
 * @note:
 * 
 * @file: ft_strncmp.c
 * @author: Diego <dinepomu@student.42>
 * @created: 03/Aug/2024 12:07
 * @updated: 10/Nov/2024 12:02
 * ************************************************************************** *
 */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if ((unsigned char) s1[i] != (unsigned char) s2[i])
			return ((unsigned char) s1[i] - (unsigned char) s2[i]);
		i++;
	}
	return (0);
}
