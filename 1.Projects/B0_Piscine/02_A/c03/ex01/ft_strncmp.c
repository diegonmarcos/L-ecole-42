/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinepomu <dinepomu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 18:58:41 by dnepomuc          #+#    #+#             */
/*   Updated: 2024/10/22 17:51:54 by dinepomu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	if (n == 0)
		return (0);
	i = 0;
	while (i < n - 1 && s1[i] == s2[i] && s1[i])
		i++;
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
	printf("Mine:%d\n", ft_strncmp("A", "D", 1));
	printf("Sys:%d\n", strncmp("A", "D", 1));

	printf("Mine:%d\n", ft_strncmp("AAD", "AAA", 2));
	printf("Sys:%d\n", strncmp("AAD", "AAA", 2));

	printf("Mine:%d\n", ft_strncmp("AAD", "AAD", 3));
	printf("Sys:%d\n", strncmp("AAD", "AAD", 3));

	return 0;
}
