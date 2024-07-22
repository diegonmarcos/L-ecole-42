/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akreise <akreise@student.42barcelona.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 19:10:17 by akreise           #+#    #+#             */
/*   Updated: 2024/07/09 19:39:03 by akreise          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	len_int(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char		*s;
	int			len;
	long int	longn;

	longn = n;
	len = len_int(n);
	s = malloc(sizeof(char) * (len + 1));
	if (!s)
		return (NULL);
	s[len] = '\0';
	if (longn == 0)
		s[0] = '0';
	if (longn < 0)
	{
		s[0] = '-';
		longn = -longn;
	}
	while (longn > 0)
	{
		s[len - 1] = longn % 10 + '0';
		len--;
		longn = longn / 10;
	}
	return (s);
}

/*#include <stdio.h>

int	main(void)
{
	printf("%s\n", ft_itoa(-2147483648));
	return (0);
}*/
