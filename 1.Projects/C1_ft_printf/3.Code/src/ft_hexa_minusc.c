/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa_minusc.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinepomu <dinepomu@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 17:05:18 by dnepomuc          #+#    #+#             */
/*   Updated: 2024/12/03 21:19:59 by dinepomu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	puthexa_long(char *base, unsigned long long n, int c)
{
	unsigned long long	baselength;

	baselength = ft_strlen(base);
	if (n >= baselength)
	{
		c = puthexa_long(base, n / baselength, c);
		if (c == -1)
			return (-1);
		if (write (1, &base[n % baselength], 1) == -1)
			return (-1);
		c++;
	}
	else if (n < baselength)
	{
		if (write (1, &base[n], 1) == -1)
			return (-1);
		c++;
	}
	return (c);
}

static int	puthexa_uns(char *base, unsigned int n, int c)
{
	unsigned int	b;

	b = ft_strlen(base);
	if (n >= b)
	{
		c = puthexa_uns(base, n / b, c);
		if (c == -1)
			return (-1);
		if (write (1, &base[n % b], 1) == -1)
			return (-1);
		c++;
	}
	else if (n < b)
	{
		if (write(1, &base[n], 1) == -1)
			return (-1);
		c++;
	}
	return (c);
}

int	ft_hexa_minusc(int n)
{
	int	char_count;

	char_count = 0;
	if (n >= 0)
		char_count = puthexa_long("0123456789abcdef", n, char_count);
	else if (n < 0)
		char_count = puthexa_uns("0123456789abcdef", n, char_count);
	return (char_count);
}
