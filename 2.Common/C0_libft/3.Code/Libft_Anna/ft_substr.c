/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akreise <akreise@student.42barcelona.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 18:05:15 by akreise           #+#    #+#             */
/*   Updated: 2024/07/06 18:58:31 by akreise          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*sub;

	i = 0;
	if (s == NULL)
		return (NULL);
	while (s[i])
		i++;
	if (start > i)
		len = 0;
	if (len > (i - start))
		len = i - start;
	sub = (char *)malloc(sizeof(char) * (len + 1));
	if (sub == NULL)
		return (NULL);
	i = 0;
	while (i < len && s[start + i] != '\0')
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}

/*#include <stdio.h>

int	main(void)
{
	char s[] = "abcdefg";
	char *s = NULL;
	char *sub;

	sub = ft_substr(s, 3,10);
	printf("%s\n", sub);
	free(sub);
	return(0);
}*/
