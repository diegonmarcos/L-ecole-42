/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thomkim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 17:38:49 by thomkim           #+#    #+#             */
/*   Updated: 2018/02/22 17:41:04 by thomkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t		i;

	i = 0;
	while (i < len)
	{
		if (*(src + i))
			*(dst + i) = *(src + i);
		else
			while (i < len)
			{
				*(dst + i) = '\0';
				i++;
			}
		i++;
	}
	return (dst);
}
