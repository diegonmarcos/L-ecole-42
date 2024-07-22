/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejhern <alejhern@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 14:41:57 by alejhern          #+#    #+#             */
/*   Updated: 2024/07/06 03:36:44 by alejhern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_counter(char const *s, char c)
{
	size_t	count;
	int		in_substring;

	count = 0;
	in_substring = 0;
	while (*s)
	{
		if (*s != c && !in_substring)
		{
			in_substring = 1;
			count++;
		}
		else if (*s == c)
			in_substring = 0;
		s++;
	}
	return (count);
}

static char	*ft_addsubsplit(char const *s, char c)
{
	char	*start;
	size_t	len;
	char	*subsplit;

	start = (char *)s;
	while (*s && *s != c)
		s++;
	len = (size_t)(s - start);
	subsplit = (char *)ft_calloc(len + 1, sizeof(char));
	if (!subsplit)
		return (NULL);
	ft_strlcpy(subsplit, start, len + 1);
	return (subsplit);
}

static void	ft_checkmem(char **splited, size_t index_split)
{
	if (!splited[index_split])
	{
		while (index_split > 0)
			free(splited[--index_split]);
		free(splited);
		splited = NULL;
	}
}

char	**ft_split(char const *s, char c)
{
	char	**splited;
	size_t	index_split;

	if (!s)
		return (NULL);
	splited = (char **)ft_calloc((ft_counter(s, c) + 1), sizeof(char *));
	if (!splited)
		return (NULL);
	index_split = 0;
	while (*s)
	{
		if (*s != c)
		{
			splited[index_split] = ft_addsubsplit(s, c);
			ft_checkmem(splited, index_split++);
			while (*s && *s != c)
				s++;
		}
		else
			s++;
	}
	if (index_split > 0 && !splited[index_split - 1][0])
		splited[index_split - 1] = NULL;
	return (splited);
}
