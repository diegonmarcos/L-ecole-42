/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix_solution_checker                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinepomu <dinepomu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 11:09:13 by ahugi             #+#    #+#             */
/*   Updated: 2024/10/13 21:15:47 by dinepomu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Input will be a pointer to a 2D array of integers.
it will check if this array is a valid solution for the skyscraper puzzle.
it will return 0 if the solution is valid.
"col1up col2up col3up col4up col1down col2down col3down col4down 
row1left row2left, row3left row4left row1right row2right row3right row4right"
{[a00, a01, a02, a03] [a10, a11, a12, a13] [a20, a21, a22, a23] 
[a30, a31, a32, a33] }
{	[a00, a01, a02, a03]
 	[a10, a11, a12, a13] 
	[a20, a21, a22, a23] 
	[a30, a31, a32, a33] }

	a00 <-> a20
	a10 <-> a30

flags
"4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2" 
int matrix [4][4] = {
{4, 3, 2, 1}, {1, 2, 2, 2}, {4, 3, 2, 1}, {1, 2, 2, 2}
};
4 3 2 1
1 2 2 2
4 3 2 1
1 2 2 2 

solution
1 2 3 4
2 3 4 1
3 4 1 2
4 1 2 3

*/

int	matrix_solution_checker(int **matrix_solution, int **matrix_flags)
{
	int	i;

	i = 0;
	if (matrix_solution[0][0] < matrix_flags[0][0])
		i++;
	else if (matrix_solution[1][0] < matrix_flags[0][0]
			&& matrix_solution[1][0] < matrix_solution[0][0])
		i++;
	else if (matrix_solution[2][0] < matrix_flags[0][0]
			&& matrix_solution[2][0] < matrix_solution[1][0]
			&& matrix_solution[2][0] < matrix_solution[0][0])
		i++;
	else if (matrix_solution[3][0] < matrix_flags[0][0]
			&& matrix_solution[3][0] < matrix_solution[2][0]
			&& matrix_solution[3][0] < matrix_solution[1][0]
			&& matrix_solution[3][0] < matrix_solution[0][0])
		i++;
	if (i == matrix_flags[0][0])
		return (0);
	else
		return (1);
}
