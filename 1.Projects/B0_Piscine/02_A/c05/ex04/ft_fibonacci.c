/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinepomu <dinepomu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 17:12:35 by dinepomu          #+#    #+#             */
/*   Updated: 2024/10/17 11:40:25 by dinepomu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
•Create a function ft_fibonacci that returns the n-th element of the Fibonacci
sequence, the first element being at the 0 index. We’ll consider that 
the Fibonacci
sequence starts like this: 0, 1, 1, 2.
•Overflows must not be handled, the function return will be undefined.
•Here’s how it should be prototyped :
•Obviously, ft_fibonacci has to be recursive.
•If the index is less than 0, the function should return -1.
*/

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
/*
#include <stdio.h>
int main(void)
{
	printf("f(0):%d\n", ft_fibonacci(0));
	printf("f(1):%d\n", ft_fibonacci(1));
	printf("f(2):%d\n", ft_fibonacci(2));
	printf("f(3):%d\n", ft_fibonacci(3));
	printf("f(5):%d\n", ft_fibonacci(5));
	printf("f(8):%d\n", ft_fibonacci(8));
	printf("f(13):%d\n", ft_fibonacci(13));
	return (0);
}
*/