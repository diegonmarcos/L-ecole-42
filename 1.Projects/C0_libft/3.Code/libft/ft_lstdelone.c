/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinepomu <dinepomu@student.42>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 10:57:07 by dinepomu          #+#    #+#             */
/*   Updated: 2024/11/10 11:01:16 by dinepomu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Function name : ft_lstdelone
Prototype : void ft_lstdelone(t_list *lst, void (*del)(void*));
Parameters : lst: The node to free. del: The address of the function 
				used to delete the content.
Return value : 
External functs : free
Description : Takes as a parameter a node and frees the memory of
				the node’s content using the function ’del’ given
				as a parameter and free the node. The memory of
				’next’ must not be freed.
Obs : 
*/

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (lst)
	{
		del(lst->content);
		free(lst);
	}
}
