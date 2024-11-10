/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinepomu <dinepomu@42.de>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 16:19:26 by dinepomu          #+#    #+#             */
/*   Updated: 2024/11/10 09:02:12 by dinepomu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

Function name : ft_lstadd_front
Prototype : void ft_lstadd_front(t_list **lst, t_list *new);
Parameters : lst: The address of a pointer to the first link of a list.
			new: The address of a pointer to the node to be added to the list.
Return value : None
External functs : None
Description : Adds the element ’new’ at the beginning of the list.

*/

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst && new)
	{
		new->next = *lst;
		*lst = new;
	}
}
