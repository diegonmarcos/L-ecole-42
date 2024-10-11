/* count_words.c */

/* 
Count the number of words in a string
A word is a sequence of characters separated by whitespaces
*/

#include <stdio.h>

int			ft_isspace(char c)
{
	return (c == ' ' || c == '\n' || c == '\t');
}

int		count_words(char *str)
{
	int	count;

	count = 0;
	while (*str)
	{
		while (*str && ft_isspace(*str)) // move to the beggining of a new word
			str++;
		if (*str && !ft_isspace(*str)) // if not at the end of the string and not a whitespace
		{
			count++;
			while (*str && !ft_isspace(*str))	// move to the next whitespace
				str++; // move to the next whitespace
		}
	}
	return (count);
}

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		printf("%d\n", count_words(argv[1]));
	}
	return (0);
}