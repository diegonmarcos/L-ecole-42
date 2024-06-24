/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_lines.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofarina <ofarina@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 22:58:21 by ofarina           #+#    #+#             */
/*   Updated: 2024/03/31 23:06:30 by ofarina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	swap_line_1(int i, int *j, int mtx[4][4])
{
	int	temp;

	temp = mtx[i][*j];
	mtx[i][*j] = mtx[*j][i];
	mtx[*j][i] = temp;
	*j = *j + 1;
}

void	swap_line_2(int i, int *j, int mtx[4][4])
{
	int	temp;

	temp = mtx[i][*j];
	mtx[i][*j] = mtx[4 - 1 - i][*j];
	mtx[4 - 1 - i][*j] = temp;
	*j = *j + 1;
}

void	swap_line_3(int i, int *j, int mtx[4][4])
{
	int	temp;

	temp = mtx[i][*j];
	mtx[i][*j] = mtx[i][4 - 1 - *j];
	mtx[i][4 - 1 - *j] = temp;
	*j = *j + 1;
}
