/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinepomu <dinepomu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 16:25:57 by dinepomu          #+#    #+#             */
/*   Updated: 2024/11/08 17:11:07 by dinepomu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Function name : ft_lstiter
Prototype : void ft_lstiter(t_list *lst, void (*f)(void *));
Parameters : lst: The address of a pointer to a node.
				f: The address of the function used to iterate on
				the list.
Return value : -
External functs : -
Description : Iterates the list ’lst’ and applies the function
				’f’ on the content of each node.
Obs : 
*/

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst)
	{
		while (lst)
		{
			f(lst->content);
			lst = lst->next;
		}
	}
}