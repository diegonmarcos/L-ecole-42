/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejhern <alejhern@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 17:30:53 by alejhern          #+#    #+#             */
/*   Updated: 2024/06/24 20:05:40 by alejhern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*map;
	t_list	*node;
	void	*content;

	if (!lst || !f || !del)
		return (NULL);
	map = NULL;
	while (lst)
	{
		content = f(lst-> content);
		node = ft_lstnew(content);
		if (!node)
		{
			del(content);
			ft_lstclear(&map, *del);
			return (NULL);
		}
		ft_lstadd_back(&map, node);
		lst = lst-> next;
	}
	return (map);
}
