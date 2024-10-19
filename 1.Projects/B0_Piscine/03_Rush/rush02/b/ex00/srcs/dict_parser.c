/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict_parser.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinepomu <dinepomu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 16:33:46 by sabozdem          #+#    #+#             */
/*   Updated: 2024/10/19 17:02:09 by dinepomu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*duplicate_substring(char *str, int s_index, int e_index)
{
	int		index;
	char	*result;

	result = (char *)malloc(sizeof(char) * (e_index - s_index + 2));
	index = 0;
	while (s_index <= e_index)
	{
		result[index] = str[s_index];
		s_index++;
		index++;
	}
	result[index] = 0;
	return (result);
}

int	extract_number(int *index, char *str, char **number)
{
	int	start_index;

	if (str[*index] == '+' || str[*index] == '-')
		*index = *index + 1;
	else if (str[*index] < '0' || str[*index] > '9')
		return (1);
	start_index = *index;
	while (str[*index] >= '0' && str[*index] <= '9')
		*index = *index + 1;
	*number = duplicate_substring(str, start_index, *index - 1);
	return (0);
}

int	is_only_space(int index, char *str)
{
	while (str[index] != 0)
	{
		if (str[index] != ' ')
			return (0);
		index++;
	}
	return (1);
}

int	calculate_value_size(int index, char *str)
{
	int	value_size;

	value_size = 0;
	while (str[index] >= 32 && str[index] <= 126)
	{
		if (is_only_space(index, str) == 1)
			break ;
		if (str[index] != ' ')
			value_size++;
		else if (str[index] == ' ' && str[index - 1] != ' ' && str[index - 1] != ':')
			value_size++;
		index++;
	}
	return (value_size);
}
