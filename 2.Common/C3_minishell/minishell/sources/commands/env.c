/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   env.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnepomuc <dnepomuc@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 15:57:28 by alexandre         #+#    #+#             */
/*   Updated: 2024/06/25 11:27:35 by dnepomuc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/minishell.h"

int	env_print_err(t_attr *att, int i)
{
	printf("env: ‘%s’: No such file or directory\n", att->tok_arr[i]);
	return (127);
}

int	env(t_attr *att)
{
	int	i;

	i = 1;
	while (att->tok_arr[i])
	{
		if (!check_equal(att->tok_arr[i]))
			return (env_print_err(att, i));
		i++;
	}
	i = 0;
	while (i < att->len_g_env)
	{
		printf("%s\n", att->g_env[i]);
		i++;
	}
	i = 1;
	while (att->tok_arr[i])
	{
		if (check_equal(att->tok_arr[i]))
			printf("%s\n", att->tok_arr[i]);
		i++;
	}
	return (0);
}
