/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinepomu <dinepomu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 18:58:41 by dnepomuc          #+#    #+#             */
/*   Updated: 2024/10/16 22:03:15 by dinepomu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (1);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j] || base[i] < ' ' || base[i] > 'z')
				return (1);
			j++;
		}
		i++;
	}
	if (i <= 1)
		return (1);
	return (0);
}

void	print_base_nb(int nbr, char *base, int size)
{
	unsigned int	n;
	char			buffer[33];
	int				i;

	if (nbr < 0)
	{
		write(1, "-", 1);
		n = -nbr;
	}
	else
		n = nbr;
	i = 0;
	while (n >= (unsigned int)size)
	{
		buffer[i++] = base[n % size];
		n = n / size;
	}
	buffer[i] = base[n];
	while (i >= 0)
		write(1, &buffer[i--], 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	s;

	s = 0;
	if (check_base(base) == 0)
	{
		while (base[s])
			s++;
		print_base_nb(nbr, base, s);
	}
}

/*
#include <limits.h>

int	main(void)
{
	write(1, "-42 = ", 7);
	ft_putnbr_base(-42, "01");
	write(1, "\n", 1);
	ft_putnbr_base(424242, "0123456789");
	write(1, "\n", 1);
	ft_putnbr_base(INT_MIN, "0123456789");
	write(1, "\n", 1);
	ft_putnbr_base(INT_MIN, "0123456789abcdef");
	write(1, "\n", 1);
	ft_putnbr_base(53, "0123456789abcdef");
	write(1, "\n", 1);
	ft_putnbr_base(42, "");
	write(1, "\n", 1);
	ft_putnbr_base(42, "\v0123456789abcdef");
	write(1, "\n", 1);
	ft_putnbr_base(42, "duck");
	write(1, "\n", 1);
}
*/