/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meghribe <meghribe@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 23:13:21 by meghribe          #+#    #+#             */
/*   Updated: 2024/08/04 01:11:22 by meghribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

void	ft_putnbr(int n, int *count)
{
	if (*count == -1)
		return ;
	if (n == -2147483648)
		ft_putstr("-2147483648", count);
	else
	{
		if (n < 0)
		{
			ft_putchar('-', count);
			n *= -1;
		}
		if (n > 9)
			ft_putnbr(n / 10, count);
		ft_putchar(n % 10 + '0', count);
	}
}

void	ft_putnbr_unsigned(unsigned int n, int *count)
{
	if (*count == -1)
		return ;
	if (n > 9)
		ft_putnbr_unsigned(n / 10, count);
	ft_putchar(n % 10 + '0', count);
}

void	ft_putpointer(void *ptr, int *count)
{
	if (*count == -1)
		return ;
	if (!ptr)
	{
		ft_putstr("(nil)", count);
		return ;
	}
	ft_putstr("0x", count);
	ft_puthex((unsigned long)ptr, 'x', count);
}

void	ft_puthex(unsigned long n, char format, int *count)
{
	char	*base;

	if (*count == -1)
		return ;
	if (format == 'x')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	if (n >= 16)
		ft_puthex(n / 16, format, count);
	ft_putchar(base[n % 16], count);
}
