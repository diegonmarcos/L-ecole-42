/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinepomu <dinepomu@student.42>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 11:00:01 by dinepomu          #+#    #+#             */
/*   Updated: 2024/11/10 12:01:44 by dinepomu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * ************************************************************************** *
 * @syntax: size_t ft_strlen(const char *s);
 * @brief: Calculates the length of the string pointed to by s, excluding the 
 * 			terminating null byte ('\0').
 * @param: s: The string whose length is to be found.
 * @return: The number of characters in the string pointed to by s.
 * 
 * @note:
 * 
 * @file: ft_strlen.c
 * @author: Diego <dinepomu@student.42>
 * @created: 03/Aug/2024 12:07
 * @updated: 10/Nov/2024 12:01
 * ************************************************************************** *
 */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
