/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinepomu <dinepomu@42.de>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 18:58:41 by dnepomuc          #+#    #+#             */
/*   Updated: 2024/10/16 17:57:29 by dinepomu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	neg;
	int	num;
	int	i;

	i = 0;
	neg = 1;
	num = 0;
	while (str[i] <= ' ' || str[i] >= '\t' || str[i] <= '\r')
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
		num = num * 10 + (str[i] - '0');
		i++;
	}
	return (num * neg);
}

/*
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <limits.h>

int main(void)
{
//	char s[12];
//	snprintf(s, sizeof(s), "%d", INT_MIN);

//	char s[] = "---+--+01234506789ab567";
//	char s[] = "  	    01234506789ab567";
//	char s[] = "01234506789ab567";
//	char s[] = "-1\3245b6a12334";
//	char s[] = "-+13245b6a12334"

    printf("%s\n", s);
	printf("%d\n", ft_atoi(s));
	printf("%d\n", atoi(s));
    return (0);
}*/