/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnepomuc <dnepomuc@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 17:12:07 by dnepomuc          #+#    #+#             */
/*   Updated: 2024/06/09 17:13:55 by dnepomuc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	fact;

	i = 1;
	fact = 1;
	if ((nb < 0) || (nb > 12))
		return (0);
	if (nb == 0)
		return (1);
	while (i <= nb)
	{
		fact = fact * i;
		i++;
	}
	return (fact);
}
