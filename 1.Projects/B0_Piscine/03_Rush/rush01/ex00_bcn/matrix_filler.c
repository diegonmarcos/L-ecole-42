/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix_filler.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofarina <ofarina@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 17:24:13 by ofarina           #+#    #+#             */
/*   Updated: 2024/03/31 20:05:06 by ofarina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_init_matrix(int matrix[3][4][4])
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	while (i < 2)
	{
		while (j < 4)
		{
			while (k < 4)
			{
				matrix[i][j][k] = 0;
				k++;
			}
			k = 0;
			j++;
		}
		j = 0;
		i++;
	}
}

void	ft_init_matrix_2d(int matrix[4][4])
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < 4)
	{
		while (j < 4)
		{
			matrix[i][j] = 0;
			j++;
		}
		j = 0;
		i++;
	}
}

void	ft_init_input(char **argv, int inpt[4][4])
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < 4)
	{
		while (j < 4)
		{
			inpt[i][j] = argv[1][((i * 4) + j) * 2] - 48;
			j++;
		}
		j = 0;
		i++;
	}
}
