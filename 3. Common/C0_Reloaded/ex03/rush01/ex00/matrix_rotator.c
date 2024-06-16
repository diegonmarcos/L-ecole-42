/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix_rotator.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofarina <ofarina@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 20:31:40 by ofarina           #+#    #+#             */
/*   Updated: 2024/03/31 23:12:49 by ofarina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_rotate_input(char direccion, int mtx[3][4][4]);
void	ft_print_matrix(int mtx[4][4]);
void	swap_line_1(int i, int *j, int mtx[4][4]);
void	swap_line_2(int i, int *j, int mtx[4][4]);
void	swap_line_3(int i, int *j, int mtx[4][4]);

void	rotate_90_counter_clockwise(int mtx[4][4])
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < 4)
	{
		j = i;
		while (j < 4)
		{
			swap_line_1(i, &j, mtx);
		}
		i++;
	}
	i = 0;
	while (i < 4 / 2)
	{
		j = 0;
		while (j < 4)
		{
			swap_line_2(i, &j, mtx);
		}
		i++;
	}
}

void	rotate_90_clockwise(int mtx[4][4])
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < 4)
	{
		j = i;
		while (j < 4)
		{
			swap_line_1(i, &j, mtx);
		}
		i++;
	}
	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4 / 2)
		{
			swap_line_3(i, &j, mtx);
		}
		i++;
	}
}

void	rotate_cube_90_clockwise(int mtx[3][4][4])
{
	rotate_90_clockwise(mtx[0]);
	rotate_90_clockwise(mtx[1]);
	ft_rotate_input('R', mtx);
}

void	rotate_cube_90_counter_clockwise(int mtx[3][4][4])
{
	rotate_90_counter_clockwise(mtx[0]);
	rotate_90_counter_clockwise(mtx[1]);
	ft_rotate_input('L', mtx);
}
