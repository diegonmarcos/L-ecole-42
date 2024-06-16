/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnepomuc <dnepomuc@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 20:53:37 by dnepomuc          #+#    #+#             */
/*   Updated: 2024/03/23 19:28:40 by dnepomuc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	swap(int *a, int *b)
{
	int	buffer;

	buffer = *a;
	*a = *b;
	*b = buffer;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 1;
	while (i < size)
	{
		j = i;
		while (j > 0 && *(tab + j - 1) > *(tab + j))
		{
			swap(tab + j, tab + j - 1);
			j--;
		}
		i++;
	}
}

/*int main(void)
{
	int input[] = {5, 2, 6, 7, 1, 4, 3};
	int len = 7;

	ft_sort_int_tab(&input[0], len);
	return 0;
}*/
