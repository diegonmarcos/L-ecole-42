/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinepomu <dinepomu@student.42>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 10:54:23 by dinepomu          #+#    #+#             */
/*   Updated: 2024/11/10 11:42:51 by dinepomu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * ************************************************************************** *
 * @syntax: int ft_atoi(const char *ptr)
 * @brief: This function converts the initial portion of the string pointed 
 * 			to by ptr to int representation.
 * @param: Takes a pointer to a string.
 * @return: Returns the converted int representation of the string.
 * 
 * @note: 
 * 
 * @file: ft_atoi.c
 * @author: Diego <dinepomu@student.42>
 * @created: 03/Aug/2024 12:07
 * @updated: 10/Nov/2024 11:41
 * ************************************************************************** *
 */

#include "libft.h"

int	ft_atoi(const char *ptr)
{
	int	i;
	int	neg;
	int	result;

	i = 0;
	neg = 1;
	result = 0;
	while (ptr[i] == ' ' || (ptr[i] >= 9 && ptr[i] <= 13))
		i++;
	if (ptr[i] == '+' || ptr[i] == '-')
	{
		if (ptr[i] == '-')
			neg = -1;
		i++;
	}
	while (ptr[i] != '\0' && ptr[i] >= '0' && ptr[i] <= '9')
	{
		result = (result * 10) + (ptr[i] - '0');
		i++;
	}
	return (result * neg);
}
/*#include <stdlib.h>
#include <stdio.h>
 
int main(void)
{
    int i;
    char *s;
 
    s = " -9885";
    i = atoi(s);      //i = -9885 
 
    printf("i = %d\n",i);
}*/
