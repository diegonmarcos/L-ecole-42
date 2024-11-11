/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinepomu <dinepomu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 11:00:43 by dinepomu          #+#    #+#             */
/*   Updated: 2024/11/11 19:59:35 by dinepomu         ###   ########.fr       */
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
	size_t		i;
	char		*str;

	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	str = ft_calloc(len + 1, sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (i < len)
	{
		str[i] = s[start + i];
		i++;
	}
	return (str);
}

/*
int main()
{
	char *s = "Hello World!";
	char *sub = ft_substr(s, 6, 5);
	printf("%s\n", sub);
	free(sub);
	return 0;
}
*/