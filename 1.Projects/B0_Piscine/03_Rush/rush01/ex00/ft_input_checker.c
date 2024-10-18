/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_input_checker.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinepomu <dinepomu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 10:35:30 by ahugi             #+#    #+#             */
/*   Updated: 2024/10/13 22:57:18 by dinepomu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
input will be a string a *char.

This will check if the input is valid.
example :"4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2"

1) Check if the number of arguments is 2.
2) Check if the length of the input is 32.
3) Check if numbers are separated by a space.
	3.1) Atoi first character is a number.
	3.2) second character is a space.
	...
	3.3) 31th character is a number.
*/
#include <unistd.h>

int	ft_len(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int	ft_num_space(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= '1' && str[i] <= '4')
		{
			i++;
			if (str[i] == '\0')
				return (0);
			if (str[i] == ' ')
				i++;
			else
				return (1);
		}
		else
			return (1);
	}
	return (0);
}

int	ft_input_checker(char *argum)
{
	if (ft_len(argum) == 31 && ft_num_space(argum) == 0)
	{
		return (0);
	}
	else
	{
		write(1, "Error\n", 6);
		return (1);
	}
}
/*
#include <stdio.h>
int main(void)
{
	char *str = "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2";
	printf("%d\n", ft_checker(2, str));
	return 0;
}*/
