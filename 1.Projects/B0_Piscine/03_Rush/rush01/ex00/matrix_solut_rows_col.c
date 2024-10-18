/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix_solut_rows_col.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinepomu <dinepomu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 23:17:59 by dinepomu          #+#    #+#             */
/*   Updated: 2024/10/13 23:36:00 by dinepomu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*   int matrix[4][4] = {
        {0, 0, 4, 0},
        {0, 0, 0, 4},
        {0, 0, 0, 0},
        {4, 0, 1, 0}
    };
*/
int	check_row_col(int **matrix, int i, int j, int n)
{
	int	k;

	k = 0;
	while (k < 4)
	{
		if (matrix[i][k] == n || matrix[k][j] == n)
			return (1);
		k++;
	}
	return (0);
}

void	fill_matrix(int **matrix, int n, int *total_count)
{
	int	i;
	int	j;

	i = 0;
	if (*total_count < 4)
	{
		while (i < 4)
		{
			j = 0;
			while (j < 4)
			{
				if (matrix[i][j] == 0 && !check_row_col(matrix, i, j, n))
				{
					matrix[i][j] = n;
					(*total_count)++;
					break ;
				}
				j++;
			}
			if (*total_count == 4)
				break ;
			i++;
		}
	}
}

void	matrix_solut_rows_col(int **matrix, int n)
{
	int	total_count;
	int	i;
	int	j;

	total_count = 0;
	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			if (matrix[i][j] == n)
				total_count++;
			j++;
		}
		i++;
	}
	fill_matrix(matrix, n, &total_count);
}
