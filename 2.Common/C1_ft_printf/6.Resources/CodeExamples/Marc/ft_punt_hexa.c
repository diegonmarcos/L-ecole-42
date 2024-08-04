/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_punt_hexa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matomas <matomas@student.42barcelona.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 17:59:35 by matomas           #+#    #+#             */
/*   Updated: 2024/08/01 17:54:29 by matomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_print.h"

static int	hexa_pointer(char *bstr, unsigned long long n, int c)
{
	unsigned long long	b;

	b = ft_strlen(bstr);
	if (n >= b)
	{
		c = hexa_pointer(bstr, n / b, c);
		if (c == -1)
			return (-1);
		if (write (1, &bstr[n % b], 1) == -1)
			return (-1);
		c++;
	}
	else if (n < b)
	{
		if (write (1, &bstr[n], 1) == -1)
			return (-1);
		c++;
	}
	return (c);
}

int	ft_punt_hexa(void *p)
{
	unsigned long long	pointer;
	int					let;

	let = 0;
	pointer = (unsigned long long)p;
	if (!p)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	if (write(1, "0x", 2) != 2)
		return (-1);
	let = hexa_pointer("0123456789abcdef", pointer, let);
	if (let == (-1))
		return (-1);
	let += 2;
	return (let);
}
