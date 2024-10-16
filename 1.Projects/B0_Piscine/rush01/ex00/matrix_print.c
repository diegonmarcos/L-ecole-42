/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_matrix.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinepomu <dinepomu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 11:09:55 by ahugi             #+#    #+#             */
/*   Updated: 2024/10/13 22:40:09 by dinepomu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	number;

	if (nb == 0)
		write(1, "0", 1);
	else
	{
		number = nb % 10 + 48;
		write(1, &number, 1);
	}
}

void	ft_print_matrix(int **matrix)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			ft_putnbr(matrix[i][j]);
			write(1, " ", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}
