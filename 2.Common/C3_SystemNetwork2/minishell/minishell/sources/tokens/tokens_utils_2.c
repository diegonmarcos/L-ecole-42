/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tokens_utils_2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnepomuc <dnepomuc@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 18:52:47 by joaoalme          #+#    #+#             */
/*   Updated: 2024/06/25 11:27:35 by dnepomuc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/minishell.h"

int	check_if_pipe(char **token, int j, char *s)
{
	if (s[j] == '|' && s[j + 1] != '|')
	{
		*token = malloc(sizeof(char) * 2);
		(*token)[0] = s[j];
		(*token)[1] = 0;
		return (1);
	}
	else if (s[j] == '|' && s[j + 1] == '|')
	{
		*token = malloc(sizeof(char) * 3);
		(*token)[0] = s[j];
		(*token)[1] = s[j + 1];
		(*token)[2] = 0;
		return (1);
	}
	return (0);
}

int	check_if_redir(char **token, int j, char *s)
{
	if (s[j] == '>' && s[j + 1] != '>')
	{
		*token = malloc(sizeof(char) * 2);
		(*token)[0] = s[j];
		(*token)[1] = 0;
		return (1);
	}
	else if (s[j] == '>' && s[j + 1] == '>')
	{
		*token = malloc(sizeof(char) * 3);
		(*token)[0] = s[j];
		(*token)[1] = s[j + 1];
		(*token)[2] = 0;
		return (1);
	}
	return (0);
}

int	check_if_read(char **token, int j, char *s)
{
	if (s[j] == '<' && s[j + 1] != '<')
	{
		*token = malloc(sizeof(char) * 2);
		(*token)[0] = s[j];
		(*token)[1] = 0;
		return (1);
	}
	else if (s[j] == '<' && s[j + 1] == '<')
	{
		*token = malloc(sizeof(char) * 3);
		(*token)[0] = s[j];
		(*token)[1] = s[j + 1];
		(*token)[2] = 0;
		return (1);
	}
	return (0);
}

void	process_next_check(char *s, int j, t_attr *att, char **token)
{
	if (check_if_pipe(token, j, s))
		att->number_of_pipes++;
	else if (check_if_redir(token, j, s))
		att->number_of_redir++;
	else if (check_if_read(token, j, s))
		att->number_of_read++;
}

void	count_d_s_quotes(char *s, t_attr *att)
{
	int	i;
	int	single;

	i = 0;
	single = 0;
	while (s[i])
	{
		if (s[i] == '"')
		{
			if (single == 0)
				single = 2;
			att->o_dquotes++;
		}
		else if (s[i] == '\'')
		{
			if (single == 0)
				single = 1;
			att->o_quotes++;
		}
		i++;
	}
	if (single == 1)
		att->inside_single_quotes = 1;
	else if (single == 2 || single == 0)
		att->inside_single_quotes = 0;
}
