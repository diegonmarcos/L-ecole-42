/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinepomu <dinepomu@42.de>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 18:51:39 by dinepomu          #+#    #+#             */
/*   Updated: 2024/10/19 18:00:54 by dinepomu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
•Create a function that splits a string of character depending on another string 
of characters.
•You’ll have to use each character from the string charset as a separator.
•The function returns an array where each element of the array contains 
the address
of a string wrapped between two separators. The last element of that array should
equal to 0 to indicate the end of the array.
•There cannot be any empty strings in your array. Get your own conclusions ac-
cordingly.
•The string given as argument won’t be modifiable.
•Here’s how it should be prototyped :
char **ft_split(char *str, char *charset);

*/

/*
** LIBRARY: N/A
** SYNOPSIS: split string, with specified character as delimiter, into an array
**			of strings
**
** DESCRIPTION:
** 		Allocates (with malloc(3)) and returns an array of strings obtained by
**	splitting ’s’ using the character ’c’ as a delimiter. The array must be
**	ended by a NULL pointer.
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char	*word_dup(char *str, int start, int finish)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc((finish - start + 1) * sizeof(char));
	while (start < finish)
		word[i++] = str[start++];
	word[i] = '\0';
	return (word);
}

int	is_delim(char c, char *charset);

int	count_words(char *str, char *charset)
{
	int	i;
	int	trigger;

	i = 0;
	trigger = 0;
	while (*str)
	{
		if (!is_delim(*str, charset) && !trigger)
		{
			trigger = 1;
			i++;
		}
		else if (is_delim(*str, charset))
			trigger = 0;
		str++;
	}
	return (i);
}

int	is_delim(char c, char *charset)
{
	while (*charset)
	{
		if (c == *charset)
			return (1);
		charset++;
	}
	return (0);
}

char	**ft_split(char *str, char *charset)
{
	size_t	i;
	size_t	j;
	int		index;
	char	**split;

	split = malloc((count_words(str, charset) + 1) * sizeof(char *));
	if (!str || !split)
		return (0);
	i = 0;
	j = 0;
	index = -1;
	while (i <= strlen(str))
	{
		if (!is_delim(str[i], charset) && index < 0)
			index = i;
		else if ((is_delim(str[i], charset) || i == strlen(str)) && index >= 0)
		{
			split[j++] = word_dup(str, index, i);
			index = -1;
		}
		i++;
	}
	split[j] = 0;
	return (split);
}

int	main(void)
{
	char	*str = "Hello, world! This is a test split.";
//	char	*charset = " ,!.";
	char	*charset = " ";
	char	**split = ft_split(str, charset);
	int 	i = 0;
	
	while (split[i])
	{
		printf("%s\n", split[i]);
		i++;
	}
	return 0;
}