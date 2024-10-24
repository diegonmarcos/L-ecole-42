/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr1 copy.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinepomu <dinepomu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 20:53:37 by dnepomuc          #+#    #+#             */
/*   Updated: 2024/10/24 16:05:31 by dinepomu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_putnbr(int nb)
{
	long int	conumber;
	char		print;
	conumber = (long int) nb;
	if (nb == 0)
	{
		write(1, "0", 1);
		return ;
	}
	if (conumber < 0)
	{
		write (1, "-", 1);
		conumber = -conumber;
	}
	print = conumber % 10 + '0';
	if (conumber >= 10)
		ft_putnbr(conumber / 10);
	write(1, &print, 1);
}
/*
int	main(void)
{
	ft_putnbr(4563);
	ft_putchar('\n');
	ft_putnbr(-2147483648);
	ft_putchar('\n');
	ft_putnbr(42);
	ft_putchar('\n');
	ft_putnbr(2147483647);
	ft_putchar('\n');
	ft_putnbr(5);
	ft_putchar('\n');
	return (0);
}
*/