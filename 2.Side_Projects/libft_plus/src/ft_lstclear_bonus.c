/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinepomu <dinepomu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 10:56:58 by dinepomu          #+#    #+#             */
/*   Updated: 2024/11/15 22:27:22 by dinepomu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * ************************************************************************** *
 * @syntax: void ft_lstclear(t_list **lst, void (*del)(void*));
 * @brief: Deletes and frees the given element and every successor of that 
 * 			element, using the function ’del’ and free(3).
 * @param: #1. The adress of a pointer to an element.
 * @return: None.
 * 
 * @note:
 * 
 * @file: ft_lstclear.c
 * @author: Diego <dinepomu@student.42>
 * @created: 10/Nov/2024 08:57
 * @updated: 10/Nov/2024 11:50
 * ************************************************************************** *
 */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;

	if (!lst || !*lst || !del)
		return ;
	while (*lst)
	{
		tmp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = tmp;
	}
	*lst = NULL;
}
