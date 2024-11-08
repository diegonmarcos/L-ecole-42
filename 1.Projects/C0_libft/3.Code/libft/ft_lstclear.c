/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinepomu <dinepomu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 16:25:42 by dinepomu          #+#    #+#             */
/*   Updated: 2024/11/08 17:11:07 by dinepomu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Function name : ft_lstclear
Prototype : void ft_lstclear(t_list **lst, void (*del)(void*));
Parameters : lst: The address of a pointer to a node.
				del: The address of the function used to delete
				the content of the node.
Return value : -
External functs : free
Description : Deletes and frees the given node and every
				successor of that node, using the function ’del’
				and free(3).
				Finally, the pointer to the list must be set to
NULL.
Obs : 
*/

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;

	if (lst && *lst)
	{
		while (*lst)
		{
			tmp = (*lst)->next;
			ft_lstdelone(*lst, del);
			*lst = tmp;
		}
	}
}