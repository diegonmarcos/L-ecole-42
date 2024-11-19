/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinepomu <dinepomu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 10:59:26 by dinepomu          #+#    #+#             */
/*   Updated: 2024/11/19 15:31:27 by dinepomu         ###   ########.fr       */
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
	size_t	len;

	len = ft_strlen(s1);
	dest = (char *) malloc(len + 1);
	if (!dest)
		return (NULL);
	ft_strlcpy(dest, s1, len + 1);
	return (dest);
}
