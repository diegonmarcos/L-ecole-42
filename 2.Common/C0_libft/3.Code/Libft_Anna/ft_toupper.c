/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akreise <akreise@student.42barcelona.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 18:25:48 by akreise           #+#    #+#             */
/*   Updated: 2024/06/28 18:32:44 by akreise          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c > 96 && c < 123)
		c = c - 32;
	return (c);
}

/*#include <stdio.h>

int	main(void)
{
	int	c = 77;

	printf("%d\n", ft_toupper(c));
	return (0);
}*/
