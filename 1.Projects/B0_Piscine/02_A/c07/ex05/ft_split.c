/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinepomu <dinepomu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 18:51:39 by dinepomu          #+#    #+#             */
/*   Updated: 2024/10/20 17:48:30 by dinepomu         ###   ########.fr       */
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

char	*ft_strchr(char *s, char c)
{
	while (*s) 
	{
		if (*s == c) 
			return (s);
		s++;
	}
	if (c == '\0')
		return (s);
	return (0);
}

size_t	ft_strlen (char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (*(src + i) && i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	while (i < n)
	{
		*(dest + i) = '\0';
		i++;
	}
	return (dest);
}

char	*word_dup(char *str, int start, int finish)
{
	char	*word;
	int		len;

	len = finish - start;
	word = malloc((len + 1) * sizeof(char));
	ft_strncpy(word, str + start, len); 
	word[len] = '\0';
	return (word);
}

int	is_delim(char c, char *charset)
{
	return (ft_strchr(charset, c) != NULL);
}

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

void	*ft_malloc(char *str, char *charset)
{
	char	*mall;

	mall = malloc((count_words(str, charset) + 1) * sizeof(char *));
	if (!mall)
		return (0);
	return (mall);
}

char	**ft_split(char *str, char *charset)
{
	size_t	i;
	size_t	j;
	int		index;
	char	**split;

	i = 0;
	j = 0;
	index = -1;
	split = ft_malloc(str, charset);
	while (str[i])
	{
		if (!is_delim(str[i], charset) && index < 0)
			index = i;
		else if ((is_delim(str[i], charset) || i == ft_strlen(str))
			&& index >= 0)
		{
			split[j++] = word_dup(str, index, i);
			index = -1;
		}
		i++;
	}
	split[j] = 0;
	return (split);
}

#include <stdio.h>

void print (char **str)
{
	int i;

	i = 0;
	while (str[i])
	{
		printf("%s\n", str[i]);
		i++;
	}
}
int	main(void)
{
	char	*str = "Hello, world! This is a split test.";

//	char	*charset = " ,!.";
	char	*charset = " ";

	print(ft_split(str, charset));
	return 0;
}