/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuzmin <akuzmin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 14:08:10 by akuzmin           #+#    #+#             */
/*   Updated: 2024/10/06 14:56:26 by akuzmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rush(int x, int y);

int	ft_atoi(char *str)
{
	int			i;
	long long	number;

	i = 0;
	number = 0;
	while (str[i])
	{
		if (str[i] > 57 || str[i] < 48)
			return (0);
		number = number * 10 + str[i] - '0';
		i++;
		if (number > 2147483647) 
			return (0);
	}
	return ((int)number);
}

int	main(int argc, char *argv[])
{
	if (argc != 3 || ft_atoi(argv[1]) == 0 || ft_atoi(argv[2]) == 0)
	{
		write(1, "Try Again", 9);
		return (1);
	}
	rush(ft_atoi(argv[1]), ft_atoi(argv[2]));
	return (0);
}
