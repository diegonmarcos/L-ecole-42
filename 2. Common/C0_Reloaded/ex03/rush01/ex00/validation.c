/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofarina <ofarina@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 17:12:20 by ofarina           #+#    #+#             */
/*   Updated: 2024/03/31 23:34:12 by ofarina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_check_char(int i, char c)
{
	if (i % 2 == 0 && (c < '0' || c > '9'))
	{
		write(1, "Error\n", 6);
		return (0);
	}
	if (i % 2 == 1 && (c != ' '))
	{
		write(1, "Error\n", 6);
		return (0);
	}
	return (1);
}

int	ft_validate_input(int argc, char **argv)
{
	int		i;
	char	*str;

	if (argc != 2)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	str = argv[1];
	i = 0;
	while (str[i] != '\0')
	{
		if (ft_check_char(i, str[i]) == 0)
		{
			return (0);
		}
		i++;
	}
	if (i != 31)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	return (1);
}
