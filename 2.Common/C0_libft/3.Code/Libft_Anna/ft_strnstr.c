/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akreise <akreise@student.42barcelona.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 23:31:05 by akreise           #+#    #+#             */
/*   Updated: 2024/07/09 18:24:23 by akreise          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!big)
		return (0);
	if (little[0] == '\0')
		return ((char *)big);
	while (big[i])
	{
		j = 0;
		while (big[i + j] == little[j] && (i + j) < len)
		{
			if (little[j + 1] == '\0')
				return ((char *)big + i);
			j++;
		}
		i++;
	}
	return (0);
}

/*#include <stdio.h>

int	main(void)
{
	char	str[] = "Hello world!";
	char	little[] = "wo";

	char	*result = ft_strnstr(str, little, 9);
	if (result)
		printf("to find '%s'is found on str\n", little);
	else
		printf("not find\n");
	return (0);
}*/
