/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinepomu <dinepomu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 16:21:58 by dinepomu          #+#    #+#             */
/*   Updated: 2024/11/08 17:09:30 by dinepomu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Function name : ft_lstsize 
Prototype : int ft_lstsize(t_list *lst);
Parameters : lst: The beginning of the list.
Return value : The length of the list
External functs : -
Description : Counts the number of nodes in a list.

*/

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		count;

	count = 0;
	while (lst)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}