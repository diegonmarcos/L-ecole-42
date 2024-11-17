/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinepomu <dinepomu@student.42>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 10:59:11 by dinepomu          #+#    #+#             */
/*   Updated: 2024/11/18 00:45:48 by dinepomu         ###   ########.fr       */
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
//	ft_memcpy(tmp, ptr, (nmemb - 1) * size);

#include "include/libft.h"

static void	ft_free(char **farray, int i)
{
	while (i >= 0)
	{
		free(farray[i]);
		i--;
	}
	free(farray);
}

static void	*ft_realloc(char **ptr, size_t nmemb, size_t size)
{
	char	**tmp;

	tmp = (char **)ft_calloc(nmemb, size);
	if (!tmp)
		return (NULL);
	while (nmemb--)
		tmp[nmemb] = ptr[nmemb];
	ft_free(ptr, nmemb - 1);
	return (tmp);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	int		num_words;
	int		i;
	int		j;

	array = (char **)ft_calloc(2, sizeof(char *));
	if (!array || !s)
		return (NULL);
	i = 0;
	j = 0;
	num_words = 1;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		j = i;
		while (s[i] && s[i] != c)
			i++;
		if (i > j)
		{
			array[num_words - 1] = ft_substr(s, j, i - j);
			array = (char **)ft_realloc(array, (num_words + 1) ,sizeof(char *));
			if (!array || !num_words++)
				return (ft_free(array, num_words - 1), NULL);
		}
	}
	array[num_words - 1] = NULL;
	return (array);
}

#include "include/libdnm.h"

int main()
{
	char *s = "   Born to Code in 42 *  ";
	char c = ' ';
	char **array = ft_split(s, c);
	int i = 0;
	(void) g_r;
	while (array[i++])
		printf("%s\n", array[i - 1]);
	 i = 0;
    while (array[i]) {
        free(array[i++]);
    }
    free(array);
    return 0;
}
