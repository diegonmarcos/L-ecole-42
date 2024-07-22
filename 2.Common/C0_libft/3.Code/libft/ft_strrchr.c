/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matomas <matomas@student.42barcelona.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 11:10:23 by matomas           #+#    #+#             */
/*   Updated: 2024/07/13 17:13:54 by matomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char			*res;
	char			cc;

	cc = (char)c;
	res = NULL;
	while (*s)
	{
		if (*s == cc)
			res = (char *)s;
		s++;
	}
	if (*s == cc)
		res = (char *)s;
	return (res);
}
