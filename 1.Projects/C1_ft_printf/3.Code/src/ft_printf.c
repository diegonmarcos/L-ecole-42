/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinepomu <dinepomu@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 17:23:43 by dnepomuc          #+#    #+#             */
/*   Updated: 2024/12/02 20:49:04 by dinepomu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	type_var(char c, va_list element)
{
	if (c == 'c')
		return (ft_putchar(va_arg(element, int)));
	if (c == 's')
		return (ft_putstr(va_arg(element, char *)));
	if (c == 'd' || c == 'i')
		return (ft_putnbr(va_arg(element, int)));
	if (c == 'p')
		return (ft_punt_hexa(va_arg(element, void *)));
	if (c == 'u')
		return (ft_num_nosign(va_arg(element, unsigned int)));
	if (c == 'X')
		return (ft_hexa_mayus(va_arg(element, int)));
	if (c == 'x')
		return (ft_hexa_min(va_arg(element, int)));
	return (0);
}

static int	w_str_percent(char c, va_list element)
{
	int	let;

	let = 0;
	if (c != '%')
	{
		let = type_var(c, element);
		if (let == -1)
			return (-1);
		return (let);
	}
	else
	{
		if (write (1, &c, 1) != 1)
			return (-1);
		return (1);
	}
}

static int	w_str(const char *str, va_list element, int let)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			let = let + w_str_percent(str[i + 1], element);
			if (let == -1)
				return (-1);
			i++;
		}
		else
		{
			if (write(1, &str[i], 1) != 1)
				return (-1);
			let++;
		}
		i++;
	}
	return (let);
}

int	ft_printf(const char *str, ...)
{
	va_list	element;
	int		let;

	let = 0;
	va_start(element, str);
	let = w_str(str, element, let);
	va_end(element);
	return (let);
}

/*
c: This specifier is for printing a single character.
s: This specifier is for printing a string of characters.
d/i: This specifier is for printing a decimal number/integer.
p: This specifier is for printing a pointer.
u: This specifier is for printing an unsigned integer.
X: This specifier is for printing a hexadecimal number in uppercase.
x: This specifier is for printing a hexadecimal number in lowercase.
*/