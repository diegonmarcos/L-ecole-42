/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_tester.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinepomu <dinepomu@student.42>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/28 15:16:21 by jtoty             #+#    #+#             */
/*   Updated: 2024/11/10 18:08:37 by dinepomu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include "libft.h"

void	ft_print_result(t_list *elem)
{
	int		len;

	len = 0;
	while (((char *)elem->content)[len])
		len++;
	write(1, ((char *)elem->content), len);
	write(1, "\n", 1);
}

void	ft_map(void *ct)
{
	int i;
	void	*c;
	char	*pouet;

	c = ct;
	i = -1;
	pouet = (char *)c;
	while (pouet[++i])
		if (pouet[i] == 'o')
			pouet[i] = 'a';
		else if(pouet[i] == 'm')
			pouet[i] = 'z';
	return;
}

void    ft_del(void *content)
{
	free(content);
}

int main(void)
{
	t_list		*elem;
	t_list		*elem2;
	t_list		*elem3;
	t_list		*elem4;
	t_list		*list;
	char		*str = strdup("lorem");
	char		*str2 = strdup("ipsum");
	char		*str3 = strdup("dolor");
	char		*str4 = strdup("sit");

	elem = ft_lstnew(str);
	elem2 = ft_lstnew(str2);
	elem3 = ft_lstnew(str3);
	elem4 = ft_lstnew(str4);

	elem->next = elem2;
	elem2->next = elem3;
	elem3->next = elem4;
	elem4->next = NULL;

	ft_lstiter(elem, &ft_map);
	list = elem;
	ft_print_result(list);
	while (list->next)
	{
		list = list->next;
		ft_print_result(list);
	}
	return (0);
}