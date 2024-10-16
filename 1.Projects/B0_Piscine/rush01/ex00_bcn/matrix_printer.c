/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix_printer.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofarina <ofarina@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 17:22:21 by ofarina           #+#    #+#             */
/*   Updated: 2024/03/31 23:36:57 by ofarina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_matrix(int mtx[4][4])
{
	int		i;
	int		j;
	char	c;

	i = 0;
	j = 0;
	while (i < 4)
	{
		while (j < 3)
		{
			c = mtx[i][j] + 48;
			write(1, &c, 1);
			write(1, " ", 1);
			j++;
		}
		c = mtx[i][j] + 48;
		write(1, &c, 1);
		write(1, "\n", 1);
		j = 0;
		i++;
	}
	return ;
}
