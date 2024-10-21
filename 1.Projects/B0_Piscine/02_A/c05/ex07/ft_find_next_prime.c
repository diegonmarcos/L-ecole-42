/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinepomu <dinepomu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 17:29:27 by dinepomu          #+#    #+#             */
/*   Updated: 2024/10/21 10:07:31 by dinepomu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
•Create a function that returns the next prime number greater or
 equal to the number
given as argument.
•Here’s how it should be prototyped :
int ft_find_next_prime(int nb);
*/

int	ft_is_prime(int nb)
{
	int	i;

	if (nb < 2)
		return (0);
	i = 2;
	while (i * i <= nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (!ft_is_prime(nb))
		nb++;
	return (nb);
}

/*
#include <stdio.h>

int main(void)
{
	int	i;

	i = 0;
	while (i < 25)
	{
		printf("next_prime(%d):%d\n", i, ft_find_next_prime(i));
		i++;
	}
	return (0);
}
*/