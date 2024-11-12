/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinepomu <dinepomu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 10:56:15 by dinepomu          #+#    #+#             */
/*   Updated: 2024/11/12 14:21:18 by dinepomu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * ************************************************************************** *
 * @syntax: char *ft_itoa(int n);
 * @brief: convert an integer to a string
 * @param: 1. n: the integer to be converted
 * @return: the string representation of the integer
 * 
 * @note:
 * 
 * @file: ft_itoa.c
 * @author: Diego <dinepomu@student.42>
 * @created: 03/Aug/2024 12:07
 * @updated: 10/Nov/2024 11:49
 * ************************************************************************** *
 */

#include "libft.h"

static int	ft_digit_count(long int i)
{
	int	count;

	count = 0;
	if (i <= 0)
	{
		i *= -1;
		count++;
	}
	while (i > 0)
	{
		i /= 10;
		count++;
	}
	return (count);
}

long int	comp(long int nb, char *str)
{
	if (nb < 0)
	{
		str[0] = '-';
		nb = nb * -1;
	}
	return (nb);
}

char	*ft_itoa(int n)
{
	char		*str;
	int			i;
	long int	nb;

	nb = n;
	i = ft_digit_count(nb);
	str = (char *)ft_calloc((i + 1), sizeof(char));
	if (!str)
		return (NULL);
	str[i--] = '\0';
	if (nb == 0)
	{
		str[0] = '0';
		return (str);
	}
	nb = comp(nb, str);
	while (nb > 0)
	{
		str[i--] = nb % 10 + '0';
		nb = nb / 10;
	}
	return (str);
}

/*
#include "../../4.Tester/Tester/libdnm.h"

int main (void)
{
	int n = 123456;
	printf("Result: %s | Test: %s | Expected: 123456\n", 
			g_r[!strcmp(ft_itoa(n), "123456")], ft_itoa(n));
	n = 0;
	printf("Result: %s | Test: %s | Expected: 0\n", 
			g_r[!strcmp(ft_itoa(n), "0")], ft_itoa(n));
	
	return (0);
}
*/