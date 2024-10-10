/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinepomu <dinepomu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 18:58:41 by dnepomuc          #+#    #+#             */
/*   Updated: 2024/10/10 20:24:59 by dinepomu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int neg;
	int num;
	int i;

	i = 0;
	neg = 1;
	num = 0;
	while (str[i] <= ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			neg *= -1;
		}
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + (str[i] - 48);
		i++;
	}
	return (num * neg);
}

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
int main(void)
{
    char s[] = "   ---+--+01234506789ab567";
	char s1[] = "-13245b6a";
    printf("%s\n", s1);
	printf("%d\n", ft_atoi(s1));
	printf("%d\n", atoi(s1));
    return (0);
}