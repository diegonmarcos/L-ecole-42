/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnepomuc <dnepomuc@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 17:19:11 by dnepomuc          #+#    #+#             */
/*   Updated: 2024/06/09 17:19:50 by dnepomuc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	s_root;
	int	i;

	i = 1;
	s_root = 1;
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (0);
	while (i * i < nb)
		i++;
	if ((nb % i) == 0)
		return (i);
	else
		return (0);
}
