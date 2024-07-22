/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akreise <akreise@student.42barcelona.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 18:41:44 by akreise           #+#    #+#             */
/*   Updated: 2024/07/15 17:56:47 by akreise          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)s + i);
		i++;
	}
	if (c == '\0')
		return ((char *)s + i);
	return (NULL);
}
/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	str[] = "anna want to drink";
	char	str1[] = "anna want to drink";

	printf("%s\n", strchr(str1, 'a'+256));
	printf("%s\n", ft_strchr(str, 'a'+256));
	printf("%c\n", 'a' + 256);
	return (0);
}*/
