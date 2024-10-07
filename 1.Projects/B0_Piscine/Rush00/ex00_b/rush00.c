/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akreise <akreise@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 17:17:08 by akreise           #+#    #+#             */
/*   Updated: 2024/03/23 21:37:30 by akreise          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_symbols(int x, int y, int line, int column)
{
	if (line == 1)
	{
		if (column == 1)
			ft_putchar('/');
		else if (column == x)
			ft_putchar('\\');
		else
			ft_putchar('*');
	}
	if (line > 1 && line < y)
	{
		if (column == 1 || column == x)
			ft_putchar('*');
		else
			ft_putchar(' ');
	}
	if (line == y)
	{
		if (column == 1)
			ft_putchar('\\');
		else if (column == x)
			ft_putchar('/');
		else
			ft_putchar('*');
	}
}

void	rush(int x, int y)
{
	int	line;
	int	column;

	line = 1;
	if (x <= 0 || y <= 0)
	{
		write(1, "Negative numbers and zero are not allowed\n", 43);
		return ;
	}
	while (line <= y)
	{
		column = 1;
		while (column <= x)
		{
			ft_symbols(x, y, line, column);
			column++;
		}
		ft_putchar('\n');
		line++;
	}
}
/*loop for jumping lines until y1*/
