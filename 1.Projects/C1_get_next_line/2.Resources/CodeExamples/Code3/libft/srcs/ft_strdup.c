/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thomkim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/03 15:43:00 by thomkim           #+#    #+#             */
/*   Updated: 2018/03/03 16:54:49 by thomkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*tmp;

	if (!(tmp = ft_strnew(ft_strlen(s1))))
		return (NULL);
	ft_strcpy(tmp, s1);
	return (tmp);
}
