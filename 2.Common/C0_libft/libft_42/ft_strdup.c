/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnepomuc <dnepomuc@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 02:41:28 by dnepomuc          #+#    #+#             */
/*   Updated: 2024/06/19 22:37:13 by dnepomuc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	size_t	size;
	char	*dup;

	size = ft_strlen(str) + 1;
	dup = (char *)ft_calloc(size, sizeof(char));
	if (!dup)
		return (NULL);
	ft_strlcpy(dup, str, size);
	return (dup);
}
