/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix_filler.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinepomu <dinepomu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 11:06:34 by ahugi             #+#    #+#             */
/*   Updated: 2024/10/13 22:42:44 by dinepomu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Will receive a pointer to a matrix and fill it with the values 
from the input string.
Will receive as input a string of 16 char(numbers) 
without spaces. "4321122243211222"
It will creat a 2D array of integers and fill it with 
the values from the input string.
Each array will have 4 integers.
*col up, row right, col down, row left - each line - clockwise*/

#include <stdlib.h>

void	matrix_initializer(int **matrix_solution);
int		**matrix_allocate(int rows, int cols);

void	ft_line_swap(int *tab)
{
	int	temp;
	int	i;

	i = 0;
	while (i < 4 / 2)
	{
		temp = tab[4 - 1 - i];
		tab[4 - 1 - i] = tab[i];
		tab[i] = temp;
		i++;
	}
}

int	**ft_matrix_filler(int *str)
{
	int	**matrix;
	int	i;
	int	j;
	int	k;

	matrix = matrix_allocate(4, 4);
	i = 0;
	j = 0;
	k = 0;
	while (i < 4)
	{
		if (!matrix[i])
			return (NULL);
		j = 0;
		while (j < 4)
		{
			matrix[i][j] = str[k];
			j++;
			k++;
		}
		i++;
	}
	j = 0;
	return (matrix);
}

/*
#include <stdio.h>
int main()
{
	char *str = "4321122243211222";
	int **matrix = matrix_filler(str);
	int i = 0;
	int j = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			printf("%d ", matrix[i][j]);
			j++;
		}
		printf("\n");
		i++;
	}
	return 0;
}*/
