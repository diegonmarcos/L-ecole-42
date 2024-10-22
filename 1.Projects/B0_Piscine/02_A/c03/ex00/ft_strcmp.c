/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinepomu <dinepomu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 18:58:41 by dnepomuc          #+#    #+#             */
/*   Updated: 2024/10/22 17:49:36 by dinepomu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i]|| s2[i]))
	{
		i++;
	}
	if (s1[i] > s2[i])
		i = 1;
	else if (s1[i] < s2[i])
		i = -1;
	else
		i = 0;
	return (i);
}


#include <stdio.h>
#include <string.h>

int	main(void)
{
	printf("Mine:%d\n", ft_strcmp("A", "D"));
	printf("Sys:%d\n", strcmp("A", "D"));

	printf("Mine:%d\n", ft_strcmp("AAD", "AAA"));
	printf("Sys:%d\n", strcmp("AAD", "AAA"));

	printf("Mine:%d\n", ft_strcmp("AA", "AA"));
	printf("Sys:%d\n", strcmp("AA", "AA"));

	return 0;
}
