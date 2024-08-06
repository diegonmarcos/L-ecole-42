/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: despanad <despanad@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 21:04:11 by despanad          #+#    #+#             */
/*   Updated: 2024/07/04 22:13:34 by despanad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_is_whitespace(char c)
{
	return (c == ' ' || c == '\t' || c == '\n' || \
	c == '\v' || c == '\f' || c == '\r');
}

int	ft_atoi(char *nptr)
{
	int					sign;
	unsigned long int	result;

	sign = 1;
	result = 0;
	while (ft_is_whitespace(*nptr))
		nptr++;
	if (*nptr == '-')
		sign = -1;
	if (*nptr == '-' || *nptr == '+')
		nptr++;
	while ((*nptr != '\0' && ft_isdigit(*nptr)))
	{
		result = (result * 10) + (*nptr - '0');
		nptr++;
	}
	return ((int)(result * sign));
}
