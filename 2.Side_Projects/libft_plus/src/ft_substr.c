/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinepomu <dinepomu@student.42>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 11:00:43 by dinepomu          #+#    #+#             */
/*   Updated: 2024/11/17 17:12:29 by dinepomu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * ************************************************************************** *
 * @syntax: char *ft_substr(const char *s, unsigned int start, size_t len);
 * @brief: Allocates (malloc(3)) and returns a substring from the string ’s’.
 * @param: #1. The string from which to create the substring.
 * @return: The substring. NULL if the allocation fails.
 * 
 * @note:
 * 
 * @file: ft_substr.c
 * @author: Diego <dinepomu@student.42>
 * @created: 03/Aug/2024 12:07
 * @updated: 10/Nov/2024 12:04
 * ************************************************************************** *
 */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char		*str;
	size_t		s_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start > s_len)
		return (ft_strdup(""));
	if (len > (s_len - (size_t)start))
		len = (s_len - (size_t)start);
	str = ft_calloc(len + 1, sizeof(char));
	if (!str)
		return (NULL);
	ft_strlcpy(str, s + start, len + 1);
	return (str);
}

/*
#include <stdio.h>

int main ()
{
	char str[] = "Born to code 42";
	printf("%s", ft_substr(str, 5, 7));
	return 0;
}
*/