/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinepomu <dinepomu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 20:53:37 by dnepomuc          #+#    #+#             */
/*   Updated: 2024/10/24 16:08:42 by dinepomu         ###   ########.fr       */
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

#include <unistd.h>

int	main(void)
{
	ft_putnbr(4563);
	write(1, "\n", 1);
	ft_putnbr(-2147483648);
	write(1, "\n", 1);
	ft_putnbr(42);
	write(1, "\n", 1);
	ft_putnbr(2147483647);
	write(1, "\n", 1);
	ft_putnbr(0);
	write(1, "\n", 1);	
	return (0);
}
