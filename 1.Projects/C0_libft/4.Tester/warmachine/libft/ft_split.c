/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinepomu <dinepomu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 10:59:11 by dinepomu          #+#    #+#             */
/*   Updated: 2024/11/11 16:50:29 by dinepomu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * ************************************************************************** *
 * @syntax: char **ft_split(char const *s, char c);
 * @brief: Allocates (with malloc(3)) and returns an array of strings 
 * 			obtained by splitting ’s’ using the character ’c’ as a delimiter.
 * 			The array must be ended by a NULL pointer.
 * @param: #1. The string to be split.
 * @return: The array of new strings resulting from the split. NULL if the 
 * 			allocation fails.
 * 
 * @note:
 * 
 * @file: ft_split.c
 * @author: Diego <dinepomu@student.42>
 * @created: 03/Aug/2024 12:07
 * @updated: 10/Nov/2024 11:58
 * ************************************************************************** *
 */

#include "libft.h"

static int	ft_countwords(char const *s, char c)
{
	int	counter;
	int	i;

	counter = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			counter++;
		}
		while (s[i] && s[i] != c)
		{
			i++;
			if (s[i] == '\0')
				return (counter);
		}
		i++;
	}
	return (counter);
}

static void	ft_free(char **farray, int failed)
{
	while (failed > 0)
	{
		free(farray[failed - 1]);
		failed--;
	}
	free(farray);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	int		num_words;
	int		i;
	int		j;

	array = (char **)ft_calloc(ft_countwords(s, c) + 1, sizeof(char *));
	if (!array)
		return (NULL);
	i = 0;
	j = 0;
	num_words = 0;
	while (num_words < ft_countwords(s, c))
	{
		while (s[i] && s[i] == c)
			i++;
		j = i;
		while (s[i] && s[i] != c)
			i++;
		array[num_words] = ft_substr(s, j, i - j);
		if (!array[num_words++])
			return (ft_free(array, num_words), NULL);
	}
	array[num_words] = NULL;
	return (array);
}
/*
#include "../../4.Tester/Tester/libdnm.h"

int main()
{
	char *s = "   Born to Code in  42  ";
	char c = ' ';
	char **array = ft_split(s, c);
	int i = 0;
	while (array[i])
	{
		printf("%s\n", array[i]);
		i++;
	}
	return 0;
}
*/