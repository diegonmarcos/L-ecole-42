/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinepomu <dinepomu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 18:58:41 by dnepomuc          #+#    #+#             */
/*   Updated: 2024/10/09 22:45:47 by dinepomu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len;

	i = 0;
	len = 0;
	while (src[len])
		len++;
	if (size < 1)
		return (len);
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (len);
}
/*
#include <stdio.h>
#include <string.h>
#include <bsd/string.h>
int main(void)
{
	char a[] = "Born";
	char b[] = "to Code";
	printf("a=%s\nb=\%s\n", a, b);
	printf("%u\n",ft_strlcpy(a, b, 5));

	char a1[] = "Born";
	char b1[] = "to Code";
	printf("a1=%s\nb=\%s\n", a1, b1);
	printf("%zu\n",strlcpy(a1, b1, 5));

	if(strcmp(a1, a) == 0)
		printf("=)__OK__=)\n");
	else
	{
		printf("=(**NOT OK**=(\n");
		printf("%d", strcmp(a1, a));
	}
	return (0);
}*/