/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinepomu <dinepomu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 10:39:59 by ahugi             #+#    #+#             */
/*   Updated: 2024/10/13 13:38:12 by dinepomu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*Frees the memory allocated for the strings in the array ’strs’.
*/

#include <stdlib.h>

int	ft_free(int **strs)
{
	int	i;

	i = 0;
	while (strs[i])
		free(strs[i++]);
	free(strs);
	return (0);
}
