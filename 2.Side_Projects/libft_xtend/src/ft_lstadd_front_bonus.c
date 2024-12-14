/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinepomu <dinepomu@student.42>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 10:56:30 by dinepomu          #+#    #+#             */
/*   Updated: 2024/11/10 11:50:36 by dinepomu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * ************************************************************************** *
 * @syntax: void ft_lstadd_front(t_list **lst, t_list *new);
 * @brief: Adds the element ’new’ at the beginning of the list.
 * @param: #1. The address of a pointer to the first link of a list.
 * @return: None.
 * 
 * @note:
 * 
 * @file: ft_lstadd_front.c
 * @author: Diego <dinepomu@student.42>
 * @created: 10/Nov/2024 08:57
 * @updated: 10/Nov/2024 11:50
 * ************************************************************************** *
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
