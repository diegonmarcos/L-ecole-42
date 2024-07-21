/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnepomuc <dnepomuc@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 19:27:55 by dnepomuc          #+#    #+#             */
/*   Updated: 2024/07/21 20:06:15 by dnepomuc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_countdigits(int nb)
{
	size_t	len;

	len = 1;
	if (nb < 0)
		len++;
	while (nb / 10 != 0)
	{
		len++;
		nb /= 10;
	}
	return (len);
}

char	*ft_itoa(int nb)
{
	long	nb_long;
	size_t	digits;
	char	*str;

	nb_long = nb;
	digits = ft_countdigits(nb_long);
	str = (char *)ft_calloc(digits + 1, sizeof(char));
	if (!str)
		return (NULL);
	if (nb_long < 0)
		nb_long *= -1;
	while (digits--)
	{
		str[digits] = nb_long % 10 + '0';
		nb_long /= 10;
	}
	if (nb < 0)
		str[0] = '-';
	return (str);
}
