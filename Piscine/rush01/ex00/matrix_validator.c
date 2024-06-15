/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix_validator.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofarina <ofarina@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 13:19:29 by ofarina           #+#    #+#             */
/*   Updated: 2024/03/31 19:43:41 by ofarina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sum_line(int dir, int l, int mtx[3][4][4])
{
	int	i;
	int	sum;

	i = 0;
	sum = 0;
	while (i < 4)
	{
		if (dir == 1)
		{
			sum += mtx[0][l][i];
		}
		else
		{
			sum += mtx[0][i][l];
		}
		i++;
	}
	return (sum);
}

int	ft_check_result(int mtx[3][4][4])
{
	int	i;
	int	sum;

	i = 0;
	while (i < 4)
	{
		sum = ft_sum_line(1, i, mtx);
		if (sum != 10)
		{
			return (0);
		}
		sum = ft_sum_line(2, i, mtx);
		if (sum != 10)
		{
			return (0);
		}
		i++;
	}
	return (1);
}
