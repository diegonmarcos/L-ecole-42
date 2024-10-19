#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "rush02.h"

extern int	error_status;

int	parse_number_and_colon(int *index, char *str, char **number) //Omit the number at the beginning of a line and skip the part of the line up to the : character.
{
	*index = 0;
	if (extract_number(index, str, number) != 0)
		return (1);
	while (str[*index] == ' ')
		*index = *index + 1;
	if (str[*index] != ':')
		return (1);
	*index = *index + 1;
	while (str[*index] == ' ')
		*index = *index + 1;
	return (0);
}

int	parse_value_from_line(char *str, char **number, char **value) //Extracting the number and its corresponding value in a given row. After extracting the number, it parses the value part.
{
	int	index;
	int	value_index;

	if (parse_number_and_colon(&index, str, number) != 0)
		return (1);
	*value = (char *)malloc(sizeof(char) * (calculate_value_size(index, str) + 2));
	value_index = 0;
	while (str[index] >= 32 && str[index] <= 126)
	{
		if (is_only_space(index, str) == 1)
			break ;
		if (str[index] != ' ' || (str[index] == ' ' && str[index - 1] != ' '))
		{
			(*value)[value_index] = str[index];
			value_index++;
		}
		index++;
	}
	(*value)[value_index] = 0;
	return (0);
}

int	parse_dictionary_lines(char **strs, char ***nums, char ***vals) //Parse a given set of rows into numbers and values.
{
	int	index;

	index = 0;
	while (strs[index] != 0)
		index++;
	*nums = (char **)malloc(sizeof(char *) * (index + 1));
	*vals = (char **)malloc(sizeof(char *) * (index + 1));
	index = 0;
	while (strs[index] != 0)
	{
		if (parse_value_from_line(strs[index], &(*nums)[index], &(*vals)[index]) != 0)
		{
			error_status = 1;
			return (1);
		}
		index++;
	}
	(*nums)[index] = 0;
	(*vals)[index] = 0;
	return (0);
}
