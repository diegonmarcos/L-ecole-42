/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejhern <alejhern@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 23:25:43 by alejhern          #+#    #+#             */
/*   Updated: 2024/06/20 03:47:33 by alejhern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t nb)
{
	size_t	len_dest;
	size_t	len_src;
	size_t	index;

	len_dest = ft_strlen(dest);
	len_src = ft_strlen(src);
	index = 0;
	if (nb == 0 || len_dest >= nb)
		return (nb + len_src);
	while (src[index] && len_dest + index + 1 < nb)
	{
		dest[len_dest + index] = src[index];
		index++;
	}
	dest[len_dest + index] = '\0';
	return (len_dest + len_src);
}
