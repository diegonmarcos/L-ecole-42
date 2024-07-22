/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: despanad <despanad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 20:07:48 by despanad          #+#    #+#             */
/*   Updated: 2024/07/04 23:58:13 by despanad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dl;
	size_t	sl;

	sl = ft_strlen(src);
	if (dstsize == 0 && dst == NULL)
		return (sl);
	dl = ft_strlen(dst);
	if (dl < dstsize)
		dstsize -= dl;
	else
		return (sl + dstsize);
	ft_strlcpy(dst + dl, src, dstsize);
	return (dl + sl);
}
