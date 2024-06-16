/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofarina <ofarina@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 18:14:14 by ofarina           #+#    #+#             */
/*   Updated: 2024/03/31 20:02:42 by ofarina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_get_digit(int num, int n);

int	ft_check_col_comb(int mtx[3][4][4], int col, int comb)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (mtx[0][i][col] != 0 && ft_get_digit(comb, i) != mtx[0][i][col])
			return (0);
		i++;
	}
	return (1);
}

int	ft_check_columns(int mtx[3][4][4], int comb[5][5][7])
{
	int	i;
	int	j;
	int	lf;
	int	rt;

	i = 0;
	j = 0;
	while (i < 4)
	{
		lf = mtx[2][0][i];
		rt = mtx[2][1][i];
		while (j < 7)
		{
			if (comb[lf][rt][j] != 0
					&& ft_check_col_comb(mtx, i, comb[lf][rt][j]) == 1)
				break ;
			j++;
		}
		if (j == 7)
			return (0);
		j = 0;
		i++;
	}
	return (1);
}

int	ft_check_row(int matrix[4][4], int row)
{
	int	column;
	int	value;
	int	other_row;

	column = 0;
	while (column < 4)
	{
		value = matrix[row][column];
		other_row = 0;
		while (other_row < 4)
		{
			if (other_row != row)
			{
				if (matrix[other_row][column] == value)
				{
					return (0);
				}
			}
			other_row++;
		}
		column++;
	}
	return (1);
}
