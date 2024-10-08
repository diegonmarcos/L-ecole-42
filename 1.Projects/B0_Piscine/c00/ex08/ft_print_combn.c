/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinepomu <dinepomu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 16:12:48 by dinepomu          #+#    #+#             */
/*   Updated: 2024/10/08 18:47:04 by dinepomu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_combn_recursive(char *comb, int n, int index, int start)
{
	if (index == n)
	{
		write(1, comb, n);
		if (comb[0] != '9' - n + 1 || comb[n - 1] != '9')
			write(1, ", ", 2);
		return ;
	}
	while (start <= '9')
	{
		comb[index] = start;
		print_combn_recursive(comb, n, index + 1, start + 1);
		start++;
	}
}

void	ft_print_combn(int n)
{
	char	comb[10];

	if (n <= 0 || n >= 10)
		return ;
	comb[n] = '\0';
	print_combn_recursive(comb, n, 0, '0');
	write(1, "\n", 1);
}
/*
int	main(void)
{
	ft_print_combn(1);
	write(1, "\n", 1);
	ft_print_combn(2);
	write(1, "\n", 1);
	ft_print_combn(3);
	write(1, "\n", 1);
	ft_print_combn(4);
	write(1, "\n", 1);
	ft_print_combn(5);
	write(1, "\n", 1);
	ft_print_combn(6);
	write(1, "\n", 1);
	ft_print_combn(7);
	write(1, "\n", 1);
	ft_print_combn(8);
	write(1, "\n", 1);
	ft_print_combn(9);
}*/