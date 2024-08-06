/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meghribe <meghribe@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 20:03:53 by meghribe          #+#    #+#             */
/*   Updated: 2024/08/04 18:50:35 by meghribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

void	ft_putchar(char c, int *count)
{
	if (write(1, &c, 1) == -1)
		*count = -1;
	else if (*count != -1)
		*count += 1;
}

void	ft_putstr(const char *s, int *count)
{
	int	i;

	i = 0;
	if (*count == -1)
		return ;
	if (s == NULL)
		s = "(null)";
	while (s[i] != '\0')
	{
		if (*count == -1)
			return ;
		ft_putchar(s[i++], count);
	}
}

static void	handle_format(char c, va_list args, int *count)
{
	if (*count == -1)
		return ;
	if (c == 'c')
		ft_putchar(va_arg(args, int), count);
	else if (c == '%')
		ft_putchar('%', count);
	else if (c == 's')
		ft_putstr(va_arg(args, char *), count);
	else if (c == 'd' || c == 'i')
		ft_putnbr(va_arg(args, int), count);
	else if (c == 'u')
		ft_putnbr_unsigned(va_arg(args, unsigned int), count);
	else if (c == 'x' || c == 'X')
		ft_puthex(va_arg(args, unsigned int), c, count);
	else if (c == 'p')
		ft_putpointer(va_arg(args, void *), count);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		count;
	int		i;

	i = 0;
	count = 0;
	va_start(args, format);
	while (format[i] != '\0')
	{
		if (count == -1)
			break ;
		if (format[i] == '%')
			handle_format(format[++i], args, &count);
		else
			ft_putchar(format[i], &count);
		i++;
	}
	va_end(args);
	return (count);
}
