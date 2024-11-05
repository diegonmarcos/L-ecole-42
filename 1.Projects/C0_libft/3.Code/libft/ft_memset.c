/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinepomu <dinepomu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 14:34:04 by diegonmarco       #+#    #+#             */
/*   Updated: 2024/11/05 19:38:01 by dinepomu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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