/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper_functions.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofarina <ofarina@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 23:33:04 by ofarina           #+#    #+#             */
/*   Updated: 2024/03/31 19:43:59 by ofarina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_fill_4_rows(int dir, int mtx[2][4][4], int r)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (dir == 1)
		{
			mtx[0][i][r] = i + 1;
			mtx[1][i][r] = 1;
		}
		else
		{
			mtx[0][(i -3) * -1][r] = i + 1;
			mtx[1][(i -3) * -1][r] = 1;
		}
		i++;
	}
}

void	ft_fill_4_columns(int dir, int mtx[2][4][4], int c)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (dir == 1)
		{
			mtx[0][c][i] = i + 1;
			mtx[1][c][i] = 1;
		}
		else
		{
			mtx[0][c][(i - 3) * -1] = i + 1;
			mtx[1][c][(i - 3) * -1] = 1;
		}
		i++;
	}
}

int	ft_get_digit(int num, int n)
{
	int	digit;
	int	divisor;

	digit = 0;
	divisor = 1000;
	while (n > 0)
	{
		divisor /= 10;
		n--;
	}
	digit = (num / divisor) % 10;
	return (digit);
}
