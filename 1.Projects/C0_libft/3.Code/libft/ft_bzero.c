/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinepomu <dinepomu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 14:34:04 by diegonmarco       #+#    #+#             */
/*   Updated: 2024/11/05 19:55:10 by dinepomu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*tmp_ptr;

	tmp_ptr = (char *) s;
	while (n > 0)
	{
		*(tmp_ptr++) = 0;
		n--;
	}
	//ft_memset(s, 0, n);
}

/*
int main ()
{
	// Char Test
	char str[50] = "GeeksForGeeks is for programming geeks.";
	printf("\nBefore bzero(): %s\n", str);
	ft_bzero(str + 13, 8 * sizeof(char));
	printf("After bzero():  %s\n", str);

	//Int Test
		
		//before bzero
	int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	printf("\nBefore bzero(): ");
	for (int i = 0; i < 10; i++)
		printf("%d ", arr[i]);
		
		//after bzero
	ft_bzero(arr, 10 * sizeof(int));
	printf("\nAfter bzero():  ");
	for (int i = 0; i < 10; i++)
		printf("%d ", arr[i]);
	return 0;
}
*/