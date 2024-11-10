/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinepomu <dinepomu@student.42>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 10:55:53 by dinepomu          #+#    #+#             */
/*   Updated: 2024/11/10 11:48:35 by dinepomu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * ************************************************************************** *
 * @syntax: int ft_isascii(int c);
 * @brief: checks if the passed character is a 7-bit ASCII character
 * @param: c: the character to be checked
 * @return: 1 if the character is a 7-bit ASCII character, 0 otherwise
 * 
 * @note:
 * 
 * @file: ft_isascii.c
 * @author: Diego <dinepomu@student.42>
 * @created: 03/Aug/2024 12:07
 * @updated: 10/Nov/2024 11:48
 * ************************************************************************** *
 */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
