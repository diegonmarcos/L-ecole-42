/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer_hexa.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinepomu <dinepomu@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 17:59:35 by dnepomuc          #+#    #+#             */
/*   Updated: 2024/12/03 21:17:36 by dinepomu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	hexa_pointer(char *base, unsigned long long n, int c)
{
	unsigned long long	baselength;

	baselength = ft_strlen(base);
	if (n >= baselength)
	{
		c = hexa_pointer(base, n / baselength, c);
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

int	ft_pointer_hexa(void *p)
{
	unsigned long long	pointer;
	int					char_count;

	char_count = 0;
	pointer = (unsigned long long)p;
	if (!p)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	if (write(1, "0x", 2) != 2)
		return (-1);
	char_count = hexa_pointer("0123456789abcdef", pointer, char_count);
	if (char_count == (-1))
		return (-1);
	char_count += 2;
	return (char_count);
}
