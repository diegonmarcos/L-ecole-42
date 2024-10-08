/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinepomu <dinepomu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 20:53:37 by dnepomuc          #+#    #+#             */
/*   Updated: 2024/10/08 18:47:04 by dinepomu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

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

/*int main(void)
{
	ft_rev_int_tab();
	return 0;

}*/

/*
	char	numb2;

	i = 0;
	while (i < size)
	{
		numb2 = tab[i] + '0';
		write(1, &numb2, 1);
		i++;
	}*/