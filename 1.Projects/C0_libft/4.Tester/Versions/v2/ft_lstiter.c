/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinepomu <dinepomu@student.42>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 10:57:17 by dinepomu          #+#    #+#             */
/*   Updated: 2024/11/10 18:19:33 by dinepomu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * ************************************************************************** *
 * @syntax: void ft_lstiter(t_list *lst, void (*f)(void *));
 * @brief: Iterates the list 'lst' and applies the function 'f' to the 
 * 			content of each element.
 * @param: #1. The address of a pointer to an element.
 * @return: None.
 * 
 * @note:
 * 
 * @file: ft_lstiter.c
 * @author: Diego <dinepomu@student.42>
 * @created: 10/Nov/2024 08:57
 * @updated: 10/Nov/2024 11:52
 * ************************************************************************** *
 */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
