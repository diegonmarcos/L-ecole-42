/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejhern <alejhern@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 22:46:30 by alejhern          #+#    #+#             */
/*   Updated: 2024/07/05 23:56:56 by alejhern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	t_size;
	char	*arr;

	if (!s1 && !s2)
		return (NULL);
	if (!s1)
		return (ft_strdup(s2));
	if (!s2)
		return (ft_strdup(s1));
	t_size = ft_strlen(s1) + ft_strlen(s2) + 1;
	arr = (char *)ft_calloc(t_size, sizeof(char));
	if (!arr)
		return (NULL);
	ft_strlcpy(arr, s1, t_size);
	ft_strlcat(arr, s2, t_size);
	return (arr);
}
