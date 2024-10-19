#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "rush02.h"

int	print_num(char *str, int print_o, char *str_num);

char		**g_numbers;
char		**g_values;
extern int	error_status;

int	print_num_inf100(char *str, int print_o, char *str_num) //Writing a given number (as a string) for numbers less than 100
{
	char	*str_copy;
	int		num;
	int		sum;

	num = ft_atoi(str);
	if (num <= 20 || num % 10 == 0)
	{
		if (print_o)
			ft_strcat_space(str_num, get_value_from_dict(str, g_numbers, g_values));
		return (ft_strlen(get_value_from_dict(str, g_numbers, g_values)) + 1);
	}
	else if (num <= 100)
	{
		sum = 0;
		str_copy = ft_strdup(str);
		str_copy[1] = '0';
		sum += print_num(str_copy, print_o, str_num);
		sum += print_num(str + 1, print_o, str_num);
		free(str_copy);
		return (sum);
	}
	return (0);
}

int	print_num_sup100(char *str, int print_o, char *str_num) //To write a given number for numbers greater than 100.
{
	int		sum;
	char	*magnitude_str;
	char	*rest;

	sum = 0;
	magnitude_str = extract_magnitude_number(str);
	sum += print_num(magnitude_str, print_o, str_num);
	rest = get_value_from_dict(calculate_magnitude(str), g_numbers, g_values);
	if (print_o)
		ft_strcat_space(str_num, rest);
	sum += print_num(str + ft_strlen(magnitude_str), print_o, str_num);
	sum += ft_strlen(rest) + 1;
	return (sum);
}

int	print_num(char *str, int print_o, char *str_num) //A generic function to print a given number (as a string).
{
	int		len;

	while (str[0] == '0')
		str++;
	if (str[0] == 0)
		return (0);
	len = ft_strlen(str);
	if (len <= 2)
		return (print_num_inf100(str, print_o, str_num));
	else
		return (print_num_sup100(str, print_o, str_num));
	return (0);
}

char	*get_converted_number(char *str, const char *dict_path) //Converting the given number (as a string) to its word equivalent.
{
	char	*str_num;
	int		str_size;
	int		index;
	char	**dict_file_content;

	if (ft_get_lines(dict_path, &dict_file_content) != 0
		|| parse_dictionary_lines(dict_file_content, &g_numbers, &g_values) != 0)
	{
		error_status = 1;
		return (0);
	}
	index = 0;
	if (is_only_zeros(str) == 0)
		str_size = ft_strlen(get_value_from_dict("0", g_numbers, g_values));
	else
		str_size = print_num(str, 0, "");
	str_num = malloc(sizeof(char) * (str_size + 1));
	index = -1;
	while (index++ < str_size)
		str_num[index] = 0;
	if (is_only_zeros(str) == 0)
		ft_strcat_space(str_num, get_value_from_dict("0", g_numbers, g_values));
	else
		print_num(str, 1, str_num);
	return (str_num);
}
