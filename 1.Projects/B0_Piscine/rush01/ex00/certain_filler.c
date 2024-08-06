/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   certain_filler.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofarina <ofarina@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 22:09:00 by ofarina           #+#    #+#             */
/*   Updated: 2024/03/31 20:01:36 by jferrei2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_fill_4_rows(int dir, int mtx[2][4][4], int r);
void	ft_fill_4_columns(int dir, int mtx[2][4][4], int r);

void	ft_check_2_1(int inpt[4][4], int j, int mtx[2][4][4], int i)
{
	if (i == 0 && inpt[0][j] == 2 && inpt[1][j] == 1)
	{
		mtx[0][0][j] = 3;
		mtx[1][0][j] = 1;
	}
	if (i == 0 && inpt[0][j] == 1 && inpt[1][j] == 2)
	{
		mtx[0][3][j] = 3;
		mtx[1][3][j] = 1;
	}
	if (i == 2 && inpt[2][j] == 2 && inpt[3][j] == 1)
	{
		mtx[0][j][0] = 3;
		mtx[1][j][0] = 1;
	}
	if (i == 2 && inpt[2][j] == 1 && inpt[3][j] == 1)
	{
		mtx[0][j][3] = 3;
		mtx[1][j][3] = 1;
	}
}

void	ft_check_3_2(int inpt[4][4], int j, int mtx[2][4][4], int i)
{
	if (i == 0 && inpt[0][j] == 3 && inpt[1][j] == 2)
	{
		mtx[0][2][j] = 4;
		mtx[1][2][j] = 1;
	}
	if (i == 0 && inpt[0][j] == 2 && inpt[1][j] == 3)
	{
		mtx[0][1][j] = 4;
		mtx[1][1][j] = 1;
	}
	if (i == 2 && inpt[2][j] == 3 && inpt[3][j] == 2)
	{
		mtx[0][j][2] = 4;
		mtx[1][j][2] = 1;
	}
	if (i == 2 && inpt[2][j] == 2 && inpt[3][j] == 3)
	{
		mtx[0][j][1] = 4;
		mtx[1][j][1] = 1;
	}
}

void	ft_check_1(int inpt[4][4], int j, int mtx[2][4][4], int i)
{
	if (inpt[2][i] == 1)
	{
		mtx[0][i][0] = 4;
		mtx[1][i][0] = 1;
	}
	if (inpt[3][i] == 1)
	{
		mtx[0][i][3] = 4;
		mtx[1][i][3] = 1;
	}
	if (inpt[0][j] == 1)
	{
		mtx[0][0][j] = 4;
		mtx[1][0][j] = 1;
	}
	if (inpt[1][j] == 1)
	{
		mtx[0][3][j] = 4;
		mtx[1][3][j] = 1;
	}
}

void	ft_check_4(int inpt[4][4], int j, int mtx[2][4][4], int i)
{
	if (inpt[2][i] == 4)
	{
		ft_fill_4_columns(1, mtx, i);
	}
	if (inpt[3][i] == 4)
	{
		ft_fill_4_columns(2, mtx, i);
	}
	if (inpt[0][j] == 4)
	{
		ft_fill_4_rows(1, mtx, j);
	}
	if (inpt[1][j] == 4)
	{
		ft_fill_4_rows(2, mtx, j);
	}
}

void	ft_fill_certain(int inpt[4][4], int mtx[3][4][4])
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < 4)
	{
		while (j < 4)
		{
			ft_check_4(inpt, j, mtx, i);
			ft_check_1(inpt, j, mtx, i);
			ft_check_3_2(inpt, j, mtx, i);
			ft_check_2_1(inpt, j, mtx, i);
			j++;
		}
		j = 0;
		i++;
	}
	return ;
}
