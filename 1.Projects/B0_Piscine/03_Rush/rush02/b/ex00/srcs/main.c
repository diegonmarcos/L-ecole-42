/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinepomu <dinepomu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 16:31:47 by sabozdem          #+#    #+#             */
/*   Updated: 2024/10/19 16:41:55 by dinepomu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "rush02.h"

int	error_status;

void	ft_print_error(void)
{
	if (error_status == 1)
		write(2, "Dict Error\n", 11);
	if (error_status == 2)
		write(2, "Error\n", 6);
}

int	check_arg(char *arg)
{
	int	index;

	index = 0;
	while (arg[index])
	{
		if (arg[index] < '0' || arg[index] > '9')
			return (-1);
		index++;
	}
	return (0);
}

char	*determine_number_to_convert(int argc, char **argv, char **dict_path)
{
	if (argc == 2)
	{
		*dict_path = NULL;
		if (check_arg(argv[1]) == 0)
			return (argv[1]);
	}
	if (argc == 3)
	{
		*dict_path = argv[1];
		if (check_arg(argv[2]) == 0)
			return (argv[2]);
	}
	error_status = 2;
	return (NULL);
}

int	main(int argc, char **argv)
{
	char	*converted_number;
	char	*input_number;
	char	*dict_path;
	int		index;

	error_status = 0;
	input_number = determine_number_to_convert(argc, argv, &dict_path);
	if (input_number != NULL)
		converted_number = get_converted_number(input_number, dict_path);
	if (error_status != 0)
	{
		ft_print_error();
		free(converted_number);
		return (-1);
	}
	index = 1;
	while (converted_number[index])
	{
		write(1, & converted_number[index], 1);
		index++;
	}
	write(1, "\n", 1);
	free(converted_number);
	return (0);
}
