/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinepomu <dinepomu@student.42>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 10:59:26 by dinepomu          #+#    #+#             */
/*   Updated: 2024/11/10 11:59:46 by dinepomu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * ************************************************************************** *
 * @syntax: char *ft_strdup(const char *s1);
 * @brief: returns a pointer to a new string which is a duplicate of the 
 * 			string s1.
 * @param: 1. s1: The string to duplicate.
 * @return: A pointer to the duplicated string. NULL if insufficient memory 
 * 			was available.
 * 
 * @note:
 * 
 * @file: ft_strdup.c
 * @author: Diego <dinepomu@student.42>
 * @created: 03/Aug/2024 12:07
 * @updated: 10/Nov/2024 11:59
 * ************************************************************************** *
 */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dest;
	size_t	i;

	dest = (char *) malloc(ft_strlen(s1) + 1);
	if (!dest)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		dest[i] = s1 [i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}
