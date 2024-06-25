/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prompt.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnepomuc <dnepomuc@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 15:38:30 by lde-sous          #+#    #+#             */
/*   Updated: 2024/06/25 11:27:35 by dnepomuc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/minishell.h"

/*
    get the current user and pwd variables at g_env
    and print a custom prompt.
*/

char	*prompt(t_attr *att)
{
	char	*str;
	char	*user;
	char	*pwd;

	user = custom_getenv("USER", att);
	pwd = custom_getenv("PWD", att);
	if (pwd != NULL && user != NULL)
	{
		printf("┏━" GREEN_BOLD " %s@:" GREEN_BOLD, user);
		printf(CYAN_BOLD "%s\n" CYAN_BOLD, pwd);
	}
	str = readline(RESET "┗━" RED_BOLD " minihell🦆" RED_BOLD " " RESET "");
	return (str);
}
