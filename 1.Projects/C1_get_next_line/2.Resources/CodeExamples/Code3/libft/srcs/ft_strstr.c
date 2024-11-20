/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thomkim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/26 17:03:58 by thomkim           #+#    #+#             */
/*   Updated: 2018/03/08 17:45:12 by thomkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int		i;
	int		j;
	int		k;
	int		flag;

	if (!ft_strlen(needle))
		return ((char *)haystack);
	i = -1;
	flag = 0;
	while (*(haystack + ++i) && !flag)
	{
		if (*(haystack + i) == *(needle + 0))
		{
			j = 0;
			k = i;
			flag = 1;
			while (*(needle + j))
				if (*(needle + j++) != *(haystack + k++))
					flag = 0;
			if (flag)
				return ((char *)haystack + i);
		}
	}
	return (NULL);
}
