/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinepomu <dinepomu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 13:22:48 by dinepomu          #+#    #+#             */
/*   Updated: 2024/11/07 17:50:55 by dinepomu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ABS_H
# define FT_ABS_H

int	ft_abs(int x)
{
	if (x < 0)
		return (-x);
	else
		return (x);
}

#endif
/*
#ifndef FT_ABS_H
# define FT_ABS_H

# define ABS(x) ((x) < 0 ? -(x) : (x))

#endif
*/