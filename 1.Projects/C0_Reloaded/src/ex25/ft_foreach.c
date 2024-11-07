/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinepomu <dinepomu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 13:22:48 by dinepomu          #+#    #+#             */
/*   Updated: 2024/11/07 17:24:03 by dinepomu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
		f(tab[i++]);
}
/*
#include <stdio.h>

void ft_printf_d(int num) 
{
  printf("%d ", num);
}

int main() 
{
  int numbers[] = {1, 2, 3, 4, 5, 21};
  int length = sizeof(numbers) / sizeof(numbers[0]);

  ft_foreach(numbers, length, ft_printf_d); 
  printf("\n");

  return 0;
}
*/