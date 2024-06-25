/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnepomuc <dnepomuc@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 15:28:13 by lde-sous          #+#    #+#             */
/*   Updated: 2024/06/25 11:27:35 by dnepomuc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ERROR_H
# define ERROR_H

# include "macros.h"

// error messages
# define ERROR_CD "minishell: cd: %s: No such file or directory\n"
# define ERROR_EXPORT "minishell: export: '%s': not a valid identifier\n"
# define ERROR_NLINE "minishell: syntax error near unexpected token 'newline'\n"
# define ERROR_SIMPLE_2 "minishell: parse error near '%c%c'\n"
# define ERROR_SIMPLE_1 "minishell: parse error near '%c'\n"
# define ERROR_PIPE2 "minishel: syntax error near unexpected token '||'\n"
# define ERROR_PIPE1 "minishel: syntax error near unexpected token '|'\n"
# define ERROR_TWO "minishell: syntax error near unexpected token '%c%c'\n"
# define ERROR_ONE "minishell: syntax error near unexpected token '%c'\n"
# define ERROR_UNCLOSED "minishell : syntax error unclosed quotes\n"

// error_1.c
int	error_last(char *str, char c);
int	error_simple(char *str, char c);
int	especialcase(char *str, int i);
int	especialcase_two(char *str, int i);

// error_2.c
int	error_pipes(char *str);
int	error_simple_dirdoc(char *str, char c);
int	error_single(char *str, char c);
int	error_double(char *str, char c);
int	error_mixed(char *str, char c, char r);

// error_3.c
int	error_dirdoc(char *str);
int	double_quote(char *str, char c);
int	single_quote(char *str, char c);
int	error_quotes(char *str);
int	verify_readline(char *str);

// error_4.c
int	print_error_pipe(char *str, int i);
int	error_onepipe(char *str);
int	print_mixed_error(char *str, char r, int i);
int	error_mixed(char *str, char c, char r);

#endif