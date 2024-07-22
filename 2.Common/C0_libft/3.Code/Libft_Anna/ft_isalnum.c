/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akreise <akreise@student.42barcelona.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 19:29:18 by akreise           #+#    #+#             */
/*   Updated: 2024/06/28 15:12:57 by akreise          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (((c > 64 && c < 91) || (c > 96 && c < 123)) || (c > 47 && c < 58))
		return (1);
	return (0);
}

/*#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_isalnum(48));
	return (0);
}*/
