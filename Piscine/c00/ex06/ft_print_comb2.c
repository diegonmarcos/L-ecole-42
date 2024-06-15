/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnepomuc <dnepomuc@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 20:53:37 by dnepomuc          #+#    #+#             */
/*   Updated: 2024/03/22 23:34:10 by dnepomuc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_char(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb3(int x)
{
	int	dec;
	int	uni;

	if (x < 10)
	{
		print_char('0');
		print_char(x + '0');
	}
	else
	{
		dec = x / 10;
		uni = x % 10;
		print_char(dec + '0');
		print_char(uni + '0');
	}
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i <= 99)
	{
		j = i + 1;
		while (j <= 99)
		{
			ft_print_comb3(i);
			print_char(' ');
			ft_print_comb3(j);
			if (i < 98)
			{
				print_char(',');
				print_char(' ');
			}
			j++;
		}
		i++;
	}
}

/*int main ()
{
	ft_print_comb2();
}*/
