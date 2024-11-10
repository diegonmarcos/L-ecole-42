/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinepomu <dinepomu@student.42>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 10:58:33 by dinepomu          #+#    #+#             */
/*   Updated: 2024/11/10 11:56:29 by dinepomu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * ************************************************************************** *
 * @syntax: void *ft_memset(void *b, int c, size_t len);
 * @brief: fills the first len bytes of the memory area pointed to by b with
 * @param: 1. b - pointer to the memory area to be filled.
 * @return: pointer to the memory area b.
 * 
 * @note:
 * 
 * @file: ft_memset.c
 * @author: Diego <dinepomu@student.42>
 * @created: 10/Nov/2024 08:57
 * @updated: 10/Nov/2024 11:56
 * ************************************************************************** *
 */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*tmp_ptr;

	tmp_ptr = (unsigned char *) b;
	while (len > 0)
	{
		*(tmp_ptr++) = (unsigned char) c;
		len--;
	}
	return (b);
}
/*
#include <stdio.h>
int main ()
{
	// Char Test
	char str[50] = "GeeksForGeeks is for programming geeks.";
	printf("\nBefore memset(): %s\n", str);
	ft_memset(str + 13, '.', 8 * sizeof(char));
	printf("After memset():  %s\n", str);

	//Int Test
		
		//before memset
	int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	printf("\nBefore memset(): ");
	for (int i = 0; i < 10; i++)
		printf("%d ", arr[i]);
		
		//after memset
	ft_memset(arr, 0, 10 * sizeof(int));
	printf("\nAfter memset():  ");
	for (int i = 0; i < 10; i++)
		printf("%d ", arr[i]);
	return 0;
}
*/