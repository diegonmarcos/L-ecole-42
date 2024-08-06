/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   structs.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnepomuc <dnepomuc@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 15:28:13 by lde-sous          #+#    #+#             */
/*   Updated: 2024/06/25 11:27:35 by dnepomuc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCTS_H
# define STRUCTS_H

# include "macros.h"

typedef struct s_pars
{
	char	**pars_arr;
	int		nb_tokenst;
}			t_pars;

typedef struct s_attr
{
	int		i;
	char	**beforet;
	char	**aftert;
	int		o_dquotes;
	int		o_quotes;
	int		tok_arr_i;
	int		nb_tokens;
	int		pipeindex;
	int		index;
	int		len_d_env;
	int		len_g_env;
	char	**tok_arr;
	char	**g_env;
	char	*last_path;
	char	**d_env;
	char	**exp_env;
	int		len_exp_env;
	char	**d_exp_env;
	int		len_d_exp_env;
	char	**commands_arr;
	int		write_to_pipe;
	int		read_from_pipe;
	int		read_from_file;
	int		redir;
	int		create_file;
	int		only_create;
	int		heredoc;
	int		skip;
	int		inside_single_quotes;
	int		number_of_pipes;
	int		number_of_redir;
	int		number_of_read;
	int		number_of_append;
	int		**pipesfd;
	int		redir_fd;
	int		first_flag;
	int		already_dealt;
	int		has_path;
	t_pars	pars_data;
}			t_attr;

typedef struct s_exec
{
	int		i;
	int		nb_of_paths;
	char	*command;
	char	*path_srt;
	char	**all_paths;
	char	**path_command;
	char	curr_path[PATH_MAX];
	int		ret;
	pid_t	pid;
}			t_exec;

typedef struct s_exp
{
	char	*var_name;
	char	*value;
	size_t	expanded_length;
	size_t	token_length;
	char	*expanded_token;
	int		j;
	int		i;
	int		has_quote;
}			t_exp;

typedef struct s_toki
{
	char	*token;
	int		flag;
	int		pos;
	int		j;
	int		i;
}			t_toki;

#endif