/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnepomuc <dnepomuc@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 15:57:28 by alexandre         #+#    #+#             */
/*   Updated: 2024/06/25 11:27:35 by dnepomuc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minishell.h"

int	g_value = 0;

int	main(int ac, char **av, char **envp)
{
	t_attr	att;
	t_toki	tok;
	char	*str;

	rl_clear_history();
	set_signals();
	init_params(ac, av, &att, envp);
	init_toki(&tok);
	while (1)
	{
		att.i = 0;
		str = prompt(&att);
		if (str == NULL)
		{
			rl_clear_history();
			break ;
		}
		reinit_attributes(&att);
		if (str)
		{
			add_history(str);
			att.commands_arr = get_tokens2(str, &att);
			//ft_print_array(att.commands_arr);
			init_pipes(&att);
			while (att.commands_arr[att.i] && !verify_readline(str)
				&& att.commands_arr[att.i][0] != '\0')
			{
				check_next_step(&att);
				att.tok_arr = get_tokens(att.commands_arr[att.i], &att, tok);
				//printf("tok_arr: ");
				//ft_print_array(att.tok_arr);
				command(&att, att.i);
				free_tokens(att.tok_arr, &att);
				att.i = att.i + 2;
			}
			ft_delete_matrix(att.pipesfd);
			free_arr(att.commands_arr);
			free(str);
		}
	}
	free_g_env(&att);
	free_exp_env(&att);
	return (0);
}
