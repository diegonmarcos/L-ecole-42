/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnepomuc <dnepomuc@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 15:28:13 by lde-sous          #+#    #+#             */
/*   Updated: 2024/06/25 11:27:35 by dnepomuc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSER_H
# define PARSER_H

# include "minishell.h"

// check.c
int		check_the_arr(char **search, char *str);
int		check_the_arr_without_equal(char **search, char *str);
int		check_the_arr_with_equal(char **search, char *to_find, int length);
int		check_equal(char *str);

// expander.c
char	*custom_getenv(const char *var_name, t_attr *att);
char	**expand_tokens(char **tokens, t_attr *att);
void	expand_tokens2(char **tokens, t_exp *info, int j);
char	*correct_name(char *str);

// lexer.c
void	command(t_attr *att, int index);

// parser.c
int		is_symbol(char *s);
int		check_next_step(t_attr *att);

// signals.c
void	handle_interrupt(int sig);
void	handler_exec(int sig);
void	set_signals(void);
void	set_signals2(void);
void	heredoc_handler(int sig);

#endif