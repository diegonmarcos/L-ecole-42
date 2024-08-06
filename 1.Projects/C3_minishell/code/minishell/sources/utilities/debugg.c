/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   debugg.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnepomuc <dnepomuc@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 15:38:30 by lde-sous          #+#    #+#             */
/*   Updated: 2024/06/25 11:27:35 by dnepomuc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/minishell.h"

void	see_flags_and_pipes(t_attr att)
{
	printf("----------------------\n");
	printf("nb of pipes: %d\n", att.number_of_pipes);
	printf("token: %s, index: %d\n", att.commands_arr[att.i], att.i);
	printf("read from pipe: %d\n", att.read_from_pipe);
	printf("write to pipe: %d\n", att.write_to_pipe);
	printf("redir: %d\n", att.redir);
	printf("read from file: %d\n", att.read_from_file);
	printf("----------------------\n");
}

void	ft_print_array(char **array)
{
	int		i;

	i = 0;
	while (array[i])
	{
		printf ("%d - %s\n", i, array[i]);
		i++;
	}
	printf("end of array\n\n");
}
