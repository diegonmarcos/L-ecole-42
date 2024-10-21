/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinepomu <dinepomu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 17:29:23 by dinepomu          #+#    #+#             */
/*   Updated: 2024/10/21 09:57:00 by dinepomu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
•Create a function that returns 1 if the number given as a parameter is a prime
number, and 0 if it isn’t.
•Here’s how it should be prototyped :
int ft_is_prime(int nb);
0 and 1 are not prime numbers.
*/

int	is_prime_recursive(int nb, int i)
{
	if (i * i > nb)
		return (1);
	if (nb % i == 0)
		return (0);
	return (is_prime_recursive(nb, i + 1));
}

int	ft_is_prime(int nb)
{
	if (nb < 2)
		return (0);
	return (is_prime_recursive(nb, 2));
}

/*
#include <stdio.h>
int	main(void)
{
	int	i;

	i = 0;
	while (i < 25)
	{
		printf("is_prime(%d) : %d\n", i, ft_is_prime(i));
		i++;
	}
	return (0);
}
*/