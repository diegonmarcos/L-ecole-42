/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinepomu <dinepomu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 18:58:41 by dnepomuc          #+#    #+#             */
/*   Updated: 2024/10/17 12:10:08 by dinepomu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
•Create a program that displays its given arguments sorted by ascii order.
•It should display all arguments, except for argv[0].
•One argument per line.
*/

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

void	swap(char **a, char **b)
{
	char	*buffer;

	buffer = *a;
	*a = *b;
	*b = buffer;
}

void	ft_sort_str_tab(char **tab, int size)
{
	int	i;
	int	j;

	i = 1;
	while (i < size)
	{
		j = i;
		while (j > 0 && tab[j - 1][0] > tab[j][0])
		{
			swap(&tab[j], &tab[j - 1]);
			j--;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	j;

	ft_sort_str_tab(argv + 1, argc - 1);
	j = 1;
	while (j < argc)
	{
		ft_putstr(argv[j]);
		ft_putchar('\n');
		j++;
	}
	return (0);
}
