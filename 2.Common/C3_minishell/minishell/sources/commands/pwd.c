/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pwd.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnepomuc <dnepomuc@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 16:51:22 by alexfern          #+#    #+#             */
/*   Updated: 2024/06/25 11:27:35 by dnepomuc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/minishell.h"

int	pwd(void)
{
	char	pwd[PATH_MAX];

	if (getcwd(pwd, PATH_MAX) == NULL)
		return (EXIT_FAILURE);
	printf("%s\n", pwd);
	return (EXIT_SUCCESS);
}

void	update_oldpwd(t_attr *att, const char *current_path)
{
	char	*str_pwd;

	str_pwd = ft_strjoin("OLDPWD=", current_path);
	cd_rm_add_path(att, "OLDPWD", str_pwd);
	free(str_pwd);
	att->last_path = search_var_in_g_env(att, "OLDPWD");
}

void	update_pwd(t_attr *att)
{
	char	*current_path;
	char	*str_pwd;

	current_path = getcwd(NULL, 0);
	str_pwd = ft_strjoin("PWD=", current_path);
	cd_rm_add_path(att, "PWD", str_pwd);
	free(str_pwd);
	free(current_path);
}
