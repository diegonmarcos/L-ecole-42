/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akreise <akreise@student.42barcelona.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 18:58:54 by akreise           #+#    #+#             */
/*   Updated: 2024/07/15 18:48:35 by akreise          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	int		len1;
	int		len2;
	int		len;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	len = len1 + len2;
	new = (char *)malloc(sizeof(char) * (len + 1));
	if (new == NULL)
		return (NULL);
	ft_strlcpy(new, s1, len + 1);
	ft_strlcat(new, s2, len + 1);
	return (new);
}

/*#include <stdio.h>

int	main(void)
{
	char s1[] = "Hey";
	char s2[] = " Anna!";
	char *new;

	new = ft_strjoin(s1, s2);
	printf("%s\n", new);
	//free(new);
	return (0);
}*/
