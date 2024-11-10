/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinepomu <dinepomu@student.42>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 10:57:07 by dinepomu          #+#    #+#             */
/*   Updated: 2024/11/10 14:10:13 by dinepomu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * ************************************************************************** *
 * @syntax: void ft_lstdelone(t_list *lst, void (*del)(void*));
 * @brief: Takes as a parameter an element and frees the memory of the 
 * 			element’s
 * @param: #1. The element to free.
 * @return: None.
 * 
 * @note:
 * 
 * @file: ft_lstdelone.c
 * @author: Diego <dinepomu@student.42>
 * @created: 10/Nov/2024 08:57
 * @updated: 10/Nov/2024 11:51
 * ************************************************************************** *
 */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}
