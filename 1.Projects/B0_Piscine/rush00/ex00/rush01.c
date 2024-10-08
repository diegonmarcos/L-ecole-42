/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elristow <elristow@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 11:36:44 by elristow          #+#    #+#             */
/*   Updated: 2024/10/05 13:44:04 by elristow         ###   ########.fr       */
/*   Updated: 2024/10/05 12:46:15 by elristow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int	g_x;

void	draw_row(int i, char first, char middle, char last)
{
	int	x;

	x = g_x;
	if (i == 0)
		ft_putchar(first);
	else if (i == x - 1)
		ft_putchar(last);
	else
		ft_putchar(middle);
}

void	rush(int x, int y)
{
	int	i;
	int	j;

	g_x = x;
	if (x <= 0 || y <= 0)
		return ;
	j = 0;
	while (j < y)
	{
		i = 0;
		while (i < x)
		{
			if (j == 0)
				draw_row(i, '/', '*', '\\');
			else if (j == y - 1)
				draw_row(i, '\\', '*', '/');
			else
				draw_row(i, '*', ' ', '*');
			i++;
		}
		ft_putchar('\n');
		j++;
	}
}
