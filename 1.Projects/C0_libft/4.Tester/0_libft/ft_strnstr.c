/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinepomu <dinepomu@student.42>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 11:00:22 by dinepomu          #+#    #+#             */
/*   Updated: 2024/11/16 13:10:31 by dinepomu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * ************************************************************************** *
 * @syntax: char *ft_strnstr(const char *haystack, const char *needle, 
 * 								size_t len);
 * @brief: Locates the first occurrence of the null-terminated string needle 
 * 			in the string haystack, where not more than len characters are 
 * 			searched.
 * @param: haystack: The string to be searched.
 * @return: The function returns a pointer to the first occurrence in haystack
 * 			of any of the entire sequence of characters specified in needle, 
 * 			or a null pointer if the sequence is not present in haystack.
 * 
 * @note:
 * 
 * @file: ft_strnstr.c
 * @author: Diego <dinepomu@student.42>
 * @created: 03/Aug/2024 12:07
 * @updated: 10/Nov/2024 12:02
 * ************************************************************************** *
 */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needle_len;

	if (!haystack && len == 0)
		return (NULL);
	if (*needle == '\0')
	{
		return ((char *)haystack);
	}
	needle_len = ft_strlen(needle);
	while (*haystack && len >= needle_len)
	{
		if (!ft_strncmp(haystack, needle, needle_len))
		{
			return ((char *)haystack);
		}
		haystack++;
		len--;
	}
	return (NULL);
}

/*
#include <stdio.h>

int main(void)
{
	const char *haystack = "Hello, world!";
	const char *needle = "world";
	char *result;

	result = ft_strnstr(haystack, needle, 13);
	if (result)
		printf("Found: %s\n", result);
	else
		printf("Not found\n");
	return 0;
}
*/