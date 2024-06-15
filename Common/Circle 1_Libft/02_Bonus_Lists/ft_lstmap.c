/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnepomuc <dnepomuc@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 03:12:22 by dnepomuc          #+#    #+#             */
/*   Updated: 2024/06/09 03:22:41 by dnepomuc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_elem;
	t_list	*new_list;

	if (!lst || !f)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		new_elem = ft_lstnew(f(lst->content));
		if (!new_elem)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_elem);
		lst = lst->next;
	}
	return (new_list);
}
