/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnepomuc <dnepomuc@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 20:04:27 by dnepomuc          #+#    #+#             */
/*   Updated: 2024/06/20 03:45:22 by dnepomuc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*last_ocurrence;

	last_ocurrence = NULL;
	while (*str)
	{
		if (*str == (char) c)
			last_ocurrence = (char *) str;
		str++;
	}
	if (*str == (char) c)
		return ((char *) str);
	return (last_ocurrence);
}
