/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lexer.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnepomuc <dnepomuc@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 18:15:45 by lde-sous          #+#    #+#             */
/*   Updated: 2024/06/26 11:45:14 by dnepomuc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/minishell.h"

/*
    The command function handles basic command recognition
    and execution based on the input string, providing
    feedback or return values accordingly.
*/

void	command(t_attr *att, int index)
{
	if (att->inside_single_quotes == 0)
		expand_tokens(&att->tok_arr[0], att);
	if (!att->tok_arr[0])
		return ;
	else if (ft_strcmp(att->tok_arr[0], "cd") == 0)
		g_value = cd(att);
	else if (ft_strcmp(att->tok_arr[0], "unset") == 0)
		g_value = unset(att);
	else if ((ft_strcmp(att->tok_arr[0], "exit") == 0))
		return (ft_exit(att));
	else if (ft_strcmp(att->tok_arr[0], "export") == 0 && att->tok_arr[1])
		g_value = export(att);
	else
		execute(att, index);
}
