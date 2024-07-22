/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: despanad <despanad@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 13:28:52 by despanad          #+#    #+#             */
/*   Updated: 2024/07/05 11:11:53 by despanad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s1, char *set)
{
	size_t	start;
	size_t	end;
	char	*str;

	str = 0;
	if (s1 && set)
	{
		start = 0;
		end = ft_strlen(s1);
		while (*(s1 + start) && ft_strchr(set, *(s1 + start)))
			start++;
		if (end <= start)
			return (ft_strdup(""));
		while (*(s1 + end - 1) && ft_strchr(set, *(s1 + end - 1))
			&& end > start)
			end--;
		str = malloc(sizeof(char) * ((end - start) + 1));
		if (str)
			ft_strlcpy(str, s1 + start, (end - start) + 1);
	}
	return (str);
}
