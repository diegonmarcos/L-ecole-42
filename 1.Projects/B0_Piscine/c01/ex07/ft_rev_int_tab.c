/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinepomu <dinepomu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 20:53:37 by dnepomuc          #+#    #+#             */
/*   Updated: 2024/10/09 15:55:26 by dinepomu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int		i;
	int		numb;

	i = 0;
	while (i < size / 2)
	{
		numb = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = numb;
		i++;
	}
}

/*
#include <unistd.h>
#include <stdio.h>
int main(void)
{
	int str[] = {1, 2, 3, 4, 5};
	ft_rev_int_tab(str, 5);
	for(int i = 0; str[i]; i++)
		printf("%d", str[i]);
	return 0;

}*/