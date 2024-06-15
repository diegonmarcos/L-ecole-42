/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_rotate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jferrei2 <jferrei2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 23:01:52 by jferrei2          #+#    #+#             */
/*   Updated: 2024/03/31 23:10:15 by jferrei2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_init_matrix_2d(int matrix[4][4]);

void	ft_cp_matrix_4_4(int source[4][4], int dest[4][4])
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < 4)
	{
		while (j < 4)
		{
			dest[i][j] = source[i][j];
			j++;
		}
		j = 0;
		i++;
	}
}

void	ft_rev_int_tab(int tab[4], int size)
{
	int	i;
	int	temp;

	i = 0;
	while ((size / 2) >= i + 1)
	{
		temp = tab[size - 1 - i];
		tab[size - 1 - i] = tab[i];
		tab[i] = temp;
		i++;
	}
}

void	ft_rotate_right_input(int temp_matrix[4][4], int input[4][4], int i)
{
	while (i < 4)
	{
		temp_matrix[0][i] = input[2][i];
		i++;
	}
	ft_rev_int_tab(temp_matrix[0], 4);
	i = 0;
	while (i < 4)
	{
		temp_matrix[1][i] = input[3][i];
		i++;
	}
	ft_rev_int_tab(temp_matrix[1], 4);
	i = 0;
	while (i < 4)
	{
		temp_matrix[2][i] = input[1][i];
		i++;
	}
	i = 0;
	while (i < 4)
	{
		temp_matrix[3][i] = input[0][i];
		i++;
	}
}

void	ft_rotate_left_input(int temp_matrix[4][4], int input[4][4], int i)
{
	while (i < 4)
	{
		temp_matrix[0][i] = input[3][i];
		i++;
	}
	i = 0;
	while (i < 4)
	{
		temp_matrix[1][i] = input[2][i];
		i++;
	}
	i = 0;
	while (i < 4)
	{
		temp_matrix[2][i] = input[0][i];
		i++;
	}
	ft_rev_int_tab(temp_matrix[2], 4);
	i = 0;
	while (i < 4)
	{
		temp_matrix[3][i] = input[1][i];
		i++;
	}
	ft_rev_int_tab(temp_matrix[3], 4);
}

void	ft_rotate_input(char direccion, int mtx[3][4][4])
{
	int	temp_matrix[4][4];

	ft_init_matrix_2d(temp_matrix);
	if (direccion == 'L')
	{
		ft_rotate_left_input(temp_matrix, mtx[2], 0);
	}
	else if (direccion == 'R')
	{
		ft_rotate_right_input(temp_matrix, mtx[2], 0);
	}
	ft_cp_matrix_4_4(temp_matrix, mtx[2]);
}
