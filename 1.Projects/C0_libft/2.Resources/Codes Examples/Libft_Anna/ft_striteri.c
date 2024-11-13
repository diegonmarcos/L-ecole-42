/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akreise <akreise@student.42barcelona.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 21:01:10 by akreise           #+#    #+#             */
/*   Updated: 2024/07/07 21:12:32 by akreise          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

/*void	to_up(unsigned int i, char *c)
{
	i = 0;
	if (c[i] >= 'a' && c[i] <= 'z')
		c[i] = c[i] - 32;
}

#include <stdio.h>

int	main(void)
{
	char	s[] = "hello anna!";

	ft_striteri(s, to_up);
	printf("%s\n", s);
	return (0);
}*/
