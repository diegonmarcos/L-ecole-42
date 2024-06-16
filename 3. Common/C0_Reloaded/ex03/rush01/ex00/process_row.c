/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_row.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofarina <ofarina@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 19:40:13 by ofarina           #+#    #+#             */
/*   Updated: 2024/03/31 23:13:02 by ofarina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_check_result(int mtx[3][4][4]);
int		ft_init_comb(int comb[5][5][7]);
int		ft_row(int mtx[3][4][4], int row, int comb[5][5][7]);
int		ft_process_row_up(int mtx[3][4][4], int comb[5][5][7]);
int		ft_process_row_down(int mtxp[3][4][4], int comb[5][5][7]);
void	ft_init_matrix_2d(int matrix[4][4]);
void	ft_fill_certain(int inpt[4][4], int mtx[3][4][4]);
void	rotate_cube_90_clockwise(int mtx[3][4][4]);
void	rotate_cube_90_counter_clockwise(int mtx[3][4][4]);
void	ft_print_matrix(int mtx[4][4]);

int	ft_process_row_left(int mtx[3][4][4], int comb[5][5][7])
{
	int	row;

	rotate_cube_90_clockwise(mtx);
	row = 0;
	while (row < 4)
	{
		if (ft_row(mtx, row, comb) == 0)
		{
			rotate_cube_90_counter_clockwise(mtx);
			ft_init_matrix_2d(mtx[0]);
			ft_fill_certain(mtx[2], mtx);
			ft_init_comb(comb);
			return (0);
		}
		row++;
	}
	rotate_cube_90_counter_clockwise(mtx);
	return (1);
}

int	ft_process_row_right(int mtx[3][4][4], int comb[5][5][7])
{
	int	row;

	rotate_cube_90_counter_clockwise(mtx);
	row = 3;
	while (row >= 0)
	{
		if (ft_row(mtx, row, comb) == 0)
		{
			rotate_cube_90_clockwise(mtx);
			ft_init_matrix_2d(mtx[0]);
			ft_fill_certain(mtx[2], mtx);
			ft_init_comb(comb);
			return (0);
		}
		row--;
	}
	rotate_cube_90_clockwise(mtx);
	return (1);
}

int	ft_solve(int mtx[3][4][4])
{
	int	comb[5][5][7];

	ft_init_comb(comb);
	if (ft_process_row_up(mtx, comb) == 1)
		return (1);
	if (ft_process_row_down(mtx, comb) == 1)
		return (1);
	if (ft_process_row_left(mtx, comb) == 1)
		return (1);
	if (ft_process_row_right(mtx, comb) == 1)
		return (1);
	return (0);
}

int	ft_process_row_up(int mtx[3][4][4], int comb[5][5][7])
{
	int	row;

	row = 0;
	while (row < 4)
	{
		if (ft_row(mtx, row, comb) == 0)
		{
			ft_init_matrix_2d(mtx[0]);
			ft_fill_certain(mtx[2], mtx);
			ft_init_comb(comb);
			return (0);
		}
		row++;
	}
	return (1);
}

int	ft_process_row_down(int mtx[3][4][4], int comb[5][5][7])
{
	int	row;

	row = 3;
	while (row >= 0)
	{
		if (ft_row(mtx, row, comb) == 0)
		{
			ft_init_matrix_2d(mtx[0]);
			ft_fill_certain(mtx[2], mtx);
			ft_init_comb(comb);
			return (0);
		}
		row--;
	}
	return (1);
}
