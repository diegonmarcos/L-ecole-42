/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinepomu <dinepomu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 11:00:08 by dinepomu          #+#    #+#             */
/*   Updated: 2024/11/11 19:56:47 by dinepomu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * ************************************************************************** *
 * @syntax: char *ft_strmapi(const char *s, char (*f)(unsigned int, char));
 * @brief: Applies the function f to each character of the string passed as 
 * 			argument by giving its index as first argument to create a new 
 * 			string resulting from the successive applications of f.
 * @param: 1. The string on which to iterate.
 * @return: The string created from the successive applications of f.
 * 
 * @note:
 * 
 * @file: ft_strmapi.c
 * @author: Diego <dinepomu@student.42>
 * @created: 03/Aug/2024 12:07
 * @updated: 10/Nov/2024 12:01
 * ************************************************************************** *
 */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*res;

	res = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!res)
		return (NULL);
	i = 0;
	while (i < ft_strlen(s))
	{
		res[i] = (*f)(i, s[i]);
		i++;
	}
	res[i] = 0;
	return (res);
}
/*
int main()
{
	char *s = "Hello";
	char *res = ft_strmapi(s, &ft_toupper);
	printf("%s\n", res);
	free(res);
	return (0);
}
*/