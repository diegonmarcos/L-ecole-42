/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix_solution.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinepomu <dinepomu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 11:08:13 by ahugi             #+#    #+#             */
/*   Updated: 2024/10/13 23:38:17 by dinepomu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Populate matrix initial solution for the skyscraper problem
1) Edges
	1.1) 4 with 1
	1.2) 1 with 4
{	
		col1up1, col2up, col3up, col4up 
row1left[a00, 	a01, 	a02, 	a03]row1right
row2left[a10, 	a11,	a12, 	a13]row2right	
row3left[a20, 	a21, 	a22, 	a23]row3right
row4left[a30, 	a31, 	a32, 	a33]row4right
}		col1down col2down col3down col4down

	
0,j = ColUp 	- >	0,j
1,j = Coldown	- > 3,j
2,j = RowLeft	- > i,0
3,j = RowRight	- > i,3

*/
#include <stdlib.h>

void	matrix_initializer(int **matrix_solution);
int		**matrix_allocate(int rows, int cols);
void	matrix_solut_rows_col(int **matrix, int n);

void	matrix_pop_1(int **matrix_solution, int **matrix_flags)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (matrix_flags[0][i] == 1)
			matrix_solution[0][i] = 4;
		else if (matrix_flags[0][i] == 4)
			matrix_solution[0][i] = 1;
		if (matrix_flags[1][i] == 1)
			matrix_solution[3][i] = 4;
		else if (matrix_flags[1][i] == 4)
			matrix_solution[3][i] = 1;
		if (matrix_flags[2][i] == 1)
			matrix_solution[i][0] = 4;
		else if (matrix_flags[2][i] == 4)
			matrix_solution[i][0] = 1;
		if (matrix_flags[3][i] == 1)
			matrix_solution[i][3] = 4;
		else if (matrix_flags[3][i] == 4)
			matrix_solution[i][3] = 1;
		i++;
	}
}

int	**ft_matrix_solution(int **matrix_flags)
{
	int	**matrix_solution;

	matrix_solution = matrix_allocate(4, 4);
	matrix_initializer(matrix_solution);
	matrix_pop_1(matrix_solution, matrix_flags);
	matrix_solut_rows_col(matrix_solution, 4);
	matrix_solut_rows_col(matrix_solution, 1);
	return (matrix_solution);
}
