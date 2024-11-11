/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinepomu <dinepomu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 10:59:33 by dinepomu          #+#    #+#             */
/*   Updated: 2024/11/11 19:57:05 by dinepomu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * ************************************************************************** *
 * @syntax: void ft_striteri(char *s, void (*f)(unsigned int, char*));
 * @brief: Applies the function f to each character of the string passed as 
 * 			argument, and passing its index as first argument. Each character 
 * 			is passed by address to f to be modified if necessary.
 * @param: #1. The string to iterate.
 * @return: None.
 * 
 * @note:
 * 
 * @file: ft_striteri.c
 * @author: Diego <dinepomu@student.42>
 * @created: 03/Aug/2024 12:07
 * @updated: 10/Nov/2024 11:59
 * ************************************************************************** *
 */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		(*f)(i, &s[i]);
		i++;
	}
}

/*
int main()
{
	char s[] = "Hello";
	ft_striteri(s, &ft_toupper);
	printf("%s\n", s);
	return (0);
}
*/