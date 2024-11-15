/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinepomu <dinepomu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 20:13:55 by dinepomu          #+#    #+#             */
/*   Updated: 2024/11/15 20:15:07 by dinepomu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

static void	ft_move_back(unsigned char *d, const unsigned char *s, size_t n)
{
	d += n;
	s += n;
	while (n > 0)
	{
		d--;
		s--;
		*d = *s;
		n--;
	}
}

static void	ft_move_fwd(unsigned char *d, const unsigned char *s, size_t n)
{
	while (n > 0)
	{
		*d = *s;
		d++;
		s++;
		n--;
	}
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	if (!dest && !src)
		return (NULL);
	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (s < d && d < s + n)
		ft_move_back(d, s, n);
	else 
		ft_move_fwd(d, s, n);
	return (dest);
}
