/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinepomu <dinepomu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 16:16:39 by dinepomu          #+#    #+#             */
/*   Updated: 2024/11/08 17:11:07 by dinepomu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

Function name : ft_lstnew
Prototype : t_list *ft_lstnew(void *content);
Parameters : content: The content to create the node with. 
Return value : The new node 
External functs : malloc
Description : Allocates (with malloc(3)) and returns a new node. 
				The member variable ’content’ is initialized with the value 
				of the parameter ’content’. The variable ’next’ is initialized 
				to NULL.

*/

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_lst;

	new_lst = (t_list *)malloc(sizeof(t_list));
	if (!new_lst)
		return (NULL);
	new_lst->content = content;
	new_lst->next = NULL;
	return (new_lst);
}