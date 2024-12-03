/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinepomu <dinepomu@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 17:23:43 by dinepomu          #+#    #+#             */
/*   Updated: 2024/12/03 15:19:50 by dinepomu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	type_var(char c, va_list item)
{
	if (c == 'c')
		return (ft_putchar(va_arg(item, int)));
	if (c == 's')
		return (ft_putstr(va_arg(item, char *)));
	if (c == 'd' || c == 'i')
		return (ft_putnbr(va_arg(item, int)));
	if (c == 'p')
		return (ft_pointer_hexa(va_arg(item, void *)));
	if (c == 'u')
		return (ft_num_unsign(va_arg(item, unsigned int)));
	if (c == 'X')
		return (ft_hexa_mayusc(va_arg(item, int)));
	if (c == 'x')
		return (ft_hexa_minusc(va_arg(item, int)));
	return (0);
}

static int	w_str_percent(char c, va_list item)
{
	int	let;

	let = 0;
	if (c != '%')
	{
		let = type_var(c, item);
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

static int	w_str(const char *str, va_list item, int char_count)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			char_count = char_count + w_str_percent(str[i + 1], item);
			if (char_count == -1)
				return (-1);
			i++;
		}
		else
		{
			if (write(1, &str[i], 1) != 1)
				return (-1);
			char_count++;
		}
		i++;
	}
	return (char_count);
}

int	ft_printf(const char *str, ...)
{
	va_list	item;
	int		char_count;

	char_count = 0;
	va_start(item, str);
	char_count = w_str(str, item, char_count);
	va_end(item);
	return (char_count);
}

/*
c:		This specifier is for printing a single character.
s:		This specifier is for printing a string of characters.
d/i:	This specifier is for printing a decimal number/integer.
p: 		This specifier is for printing a pointer.
u: 		This specifier is for printing an unsigned integer.
X: 		This specifier is for printing a hexadecimal number in uppercase.
x: 		This specifier is for printing a hexadecimal number in lowercase.
*/