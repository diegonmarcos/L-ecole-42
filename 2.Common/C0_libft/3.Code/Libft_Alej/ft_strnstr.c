/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejhern <alejhern@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 00:41:10 by alejhern          #+#    #+#             */
/*   Updated: 2024/06/18 23:01:30 by alejhern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char const *big, char const *little, size_t len)
{
	char	*str;
	size_t	index_str;
	size_t	index_lt;

	str = (char *) big;
	if (!*little)
		return (str);
	index_str = 0;
	while (str[index_str] && index_str < len)
	{
		index_lt = 0;
		while
		(
			little[index_lt] &&
			str[index_str + index_lt] &&
			str[index_str + index_lt] == little[index_lt] &&
			(index_str + index_lt) < len
		)
			index_lt++;
		if (!little[index_lt])
			return (&str[index_str]);
		index_str++;
	}
	return (NULL);
}
