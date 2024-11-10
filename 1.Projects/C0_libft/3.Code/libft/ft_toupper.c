/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinepomu <dinepomu@student.42>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 11:01:06 by dinepomu          #+#    #+#             */
/*   Updated: 2024/11/10 12:05:19 by dinepomu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * ************************************************************************** *
 * @syntax: int ft_toupper(int c);
 * @brief: converts a lower-case letter to the corresponding upper-case letter.
 * @param: c: the character to be converted.
 * @return: the corresponding upper-case letter if c is a lower-case letter.
 * 
 * @note:
 * 
 * @file: ft_toupper.c
 * @author: Diego <dinepomu@student.42>
 * @created: 03/Aug/2024 12:07
 * @updated: 10/Nov/2024 12:05
 * ************************************************************************** *
 */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	return (c);
}
