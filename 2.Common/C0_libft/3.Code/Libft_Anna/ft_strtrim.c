/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akreise <akreise@student.42barcelona.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 22:33:30 by akreise           #+#    #+#             */
/*   Updated: 2024/07/07 00:44:41 by akreise          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		start;
	int		end;
	int		len;

	start = 0;
	if (!s1 || !set)
		return (NULL);
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1);
	while (s1[end -1] && ft_strchr(set, s1[end -1]) && end > start)
		end --;
	len = end - start + 1;
	str = (char *)malloc(sizeof(char) * len);
	if (str)
		ft_strlcpy(str, &s1[start], len);
	return (str);
}

/*#include <stdio.h>

int	main(void)
{
	char const	s1[] = "lohola annalo";
	char const	set[] = "lo";

	printf("%s\n", ft_strtrim(s1, set));
	return (0);
}*/
