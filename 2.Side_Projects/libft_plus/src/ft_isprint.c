/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinepomu <dinepomu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 10:56:09 by dinepomu          #+#    #+#             */
/*   Updated: 2024/11/15 23:24:41 by dinepomu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * ************************************************************************** *
 * @syntax: int ft_isprint(int c);
 * @brief: checks for any printable character including space.
 * @param: c: the character to be checked.
 * @return: The function returns a non-zero value if c is a printable character.
 * 
 * @note:
 * 
 * @file: ft_isprint.c
 * @author: Diego <dinepomu@student.42>
 * @created: 03/Aug/2024 12:07
 * @updated: 10/Nov/2024 11:49
 * ************************************************************************** *
 */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
