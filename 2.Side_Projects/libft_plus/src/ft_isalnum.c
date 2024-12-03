/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinepomu <dinepomu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 10:55:37 by dinepomu          #+#    #+#             */
/*   Updated: 2024/11/15 23:21:04 by dinepomu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * ************************************************************************** *
 * @syntax: int ft_isalnum(int c);
 * @brief: The isalnum() function tests for any character for which isalpha() 
 * 			or isdigit() is true.
 * @param: c: The character to test.
 * @return: zero if the character tests false
 * 
 * @note: 
 * 
 * @file: ft_isalnum.c
 * @author: Diego <dinepomu@student.42>
 * @created: 03/Aug/2024 12:07
 * @updated: 10/Nov/2024 11:45
 * ************************************************************************** *
 */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((ft_isalpha(c) || ft_isdigit(c)))
		return (1);
	return (0);
}
