/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnepomuc <dnepomuc@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 18:58:41 by dnepomuc          #+#    #+#             */
/*   Updated: 2024/03/24 19:02:08 by dnepomuc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

/*int	main(void)
{
	printf("%d", ft_strcmp("Hello", "Hello1"));
	printf("\n%d", ft_strcmp("Hello", "He"));
	printf("\n%d", ft_strcmp("He", "Hello"));
	printf("\n%d", ft_strcmp("Hello", "Hello"));

	return 0;
}*/
