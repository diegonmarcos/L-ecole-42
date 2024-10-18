/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix_initializer.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinepomu <dinepomu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 20:43:38 by dinepomu          #+#    #+#             */
/*   Updated: 2024/10/13 21:17:57 by dinepomu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	matrix_initializer(int **matrix_solution)
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			matrix_solution[i][j] = 0;
			j++;
		}
		i++;
	}
}
