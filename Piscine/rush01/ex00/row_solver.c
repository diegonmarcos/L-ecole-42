/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   row_solver.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofarina <ofarina@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 12:47:45 by ofarina           #+#    #+#             */
/*   Updated: 2024/03/31 19:40:00 by ofarina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_get_digit(int num, int n);
int	ft_check_row(int matrix[4][4], int row);
int	ft_check_columns(int mtx[3][4][4], int comb[5][5][7]);

void	ft_remove_comb(int mtx[3][4][4], int row, int comb[5][5][7])
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (mtx[1][row][i] == 0)
		{
			mtx[0][row][i] = 0;
			mtx[1][row][i] = 0;
		}
		i++;
	}
	i = 0;
	while (i < 7)
	{
		if (comb[mtx[2][2][row]][mtx[2][3][row]][i] != 0)
		{
			comb[mtx[2][2][row]][mtx[2][3][row]][i] = 0;
			return ;
		}
		i++;
	}
}

int	ft_insert_row(int mtx[3][4][4], int row, int comb_n, int comb[5][5][7])
{
	int	n;
	int	j;

	j = 0;
	while (j < 4)
	{
		n = ft_get_digit(comb_n, j);
		mtx[0][row][j] = n;
		j++;
	}
	if (ft_check_row(mtx[0], row) == 0 || ft_check_columns(mtx, comb) == 0)
	{
		ft_remove_comb(mtx, row, comb);
		return (0);
	}
	else
		return (1);
}

int	is_candidate_comb(int mtx[3][4][4], int row, int comb)
{
	int	j;
	int	d;

	j = 0;
	d = 0;
	while (j < 4)
	{
		if (mtx[1][row][j] == 1)
		{
			d = ft_get_digit(comb, j);
			if (d != mtx[0][row][j])
			{
				return (0);
			}
		}
		j++;
	}
	return (1);
}

int	ft_row(int mtx[3][4][4], int row, int comb[5][5][7])
{
	int	i;
	int	lf;
	int	rt;

	i = 0;
	lf = mtx[2][2][row];
	rt = mtx[2][3][row];
	while (i < 7)
	{
		if (comb[lf][rt][i] != 0)
		{
			if (is_candidate_comb(mtx, row, comb[lf][rt][i]) == 1)
			{
				if (ft_insert_row(mtx, row, comb[lf][rt][i], comb) == 0)
				{
					i++;
					continue ;
				}
				return (1);
			}
		}
		i++;
	}
	return (0);
}
