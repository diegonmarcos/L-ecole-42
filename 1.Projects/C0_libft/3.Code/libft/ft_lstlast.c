/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinepomu <dinepomu@42.de>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 16:23:19 by dinepomu          #+#    #+#             */
/*   Updated: 2024/11/10 08:59:50 by dinepomu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

Function name : ft_lstlast
Prototype : t_list *ft_lstlast(t_list *lst);
Parameters : -
Return value : The last node of the list
External functs : -
Description : Returns the last node of the list.

*/

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst)
	{
		while (lst->next)
			lst = lst->next;
	}
	return (lst);
}
