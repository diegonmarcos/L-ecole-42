/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofarina <ofarina@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 16:02:10 by ofarina           #+#    #+#             */
/*   Updated: 2024/03/31 23:30:23 by ofarina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_validate_input(int argc, char **argv);
void	ft_init_input(char **argv, int inpt[4][4]);
void	ft_init_matrix(int mtx[3][4][4]);
void	ft_fill_certain(int inpt[4][4], int mtx[3][4][4]);
void	ft_print_matrix(int mtx[4][4]);
int		ft_solve(int mtx[3][4][4]);

int	main(int argc, char **argv)
{
	int	matrix[3][4][4];

	if (ft_validate_input(argc, argv) == 0)
	{
		return (0);
	}
	ft_init_input(argv, matrix[2]);
	ft_init_matrix(matrix);
	ft_fill_certain(matrix[2], matrix);
	if (ft_solve(matrix) == 0)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	ft_print_matrix(matrix[0]);
}
