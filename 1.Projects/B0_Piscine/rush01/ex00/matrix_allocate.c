/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix_allocate.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinepomu <dinepomu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 21:32:22 by dinepomu          #+#    #+#             */
/*   Updated: 2024/10/13 21:43:41 by dinepomu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	matrix_initializer(int **matrix_solution);

int	**matrix_allocate(int rows, int cols)
{
	int	**matrix;
	int	i;

	matrix = (int **)malloc(rows * sizeof(int *));
	if (!matrix)
		return (NULL);
	i = 0;
	while (i < rows)
	{
		matrix[i] = (int *)malloc(cols * sizeof(int));
		if (!matrix[i])
		{
			while (--i >= 0)
				free(matrix[i]);
			free(matrix);
			return (NULL);
		}
		i++;
	}
	return (matrix);
}
