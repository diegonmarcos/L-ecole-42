/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinepomu <dinepomu@42.de>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 18:51:39 by dinepomu          #+#    #+#             */
<<<<<<< HEAD
<<<<<<< HEAD
/*   Updated: 2024/10/19 17:28:34 by dinepomu         ###   ########.fr       */
=======
/*   Updated: 2024/10/19 17:35:56 by dinepomu         ###   ########.fr       */
>>>>>>> 40333d1afe53834912e2386a1249be0c3f9ab6dc
=======
/*   Updated: 2024/10/19 17:36:15 by dinepomu         ###   ########.fr       */
>>>>>>> f825603 (u)
/*                                                                            */
/* ************************************************************************** */

/*
•Create a function that splits a string of character depending on another string 
of characters.
•You’ll have to use each character from the string charset as a separator.
•The function returns an array where each element of the array contains the address
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

<<<<<<< HEAD
static int	count_words(char *str, char c)
=======
#include <stdlib.h>
#include <string.h>

static int	is_delimiter(char c, char *charset)
{
	while (*charset)
	{
		if (c == *charset)
			return (1);
		charset++;
	}
	return (0);
}

static int	count_words(char *str, char *charset)
{
	int	i;
	int	trigger;

	i = 0;
	trigger = 0;
	while (*str)
	{
		if (!is_delimiter(*str, charset) && trigger == 0)
		{
			trigger = 1;
			i++;
		}
		else if (is_delimiter(*str, charset))
			trigger = 0;
		str++;
	}
	return (i);
}

static char	*word_dup(char *str, int start, int finish)
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

char	**ft_split(char *str, char *charset)
{
	size_t	i;
	size_t	j;
	int		index;
	char	**split;

	if (!str || !(split = malloc((count_words(str, charset) + 1) * sizeof(char *))))
		return (0);
	i = 0;
	j = 0;
	index = -1;
	while (i <= strlen(str))
	{
		if (!is_delimiter(str[i], charset) && index < 0)
			index = i;
		else if ((is_delimiter(str[i], charset) || i == strlen(str)) && index >= 0)
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

int main (int ac, char **av)
{
	char str[] = "Hola 42 How Estas You?";
	char chr[] = " ";
	printf("%s",ft_split(str, chr))
	return 0;
}
