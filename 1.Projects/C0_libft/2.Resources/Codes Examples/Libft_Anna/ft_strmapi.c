/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akreise <akreise@student.42barcelona.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 21:13:07 by akreise           #+#    #+#             */
/*   Updated: 2024/07/07 21:45:44 by akreise          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*result;

	if (s == NULL)
		return (NULL);
	i = 0;
	result = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (result == NULL)
		return (NULL);
	while (s[i])
	{
		result[i] = (f)(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}

/*char	to_upi(unsigned int i, char c)
{
	i = 0;

	if (c >= 'a' && c <= 'z')
		c = c - 32 + i;
	return (c);
}

#include <stdio.h>

int	main(void)
{
	char	s[] = "hello anna";

	ft_strmapi(s, to_upi);
	printf("%s\n", s);
	return (0);
}*/
