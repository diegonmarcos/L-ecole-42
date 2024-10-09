/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinepomu <dinepomu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 18:58:41 by dnepomuc          #+#    #+#             */
/*   Updated: 2024/10/09 22:48:01 by dinepomu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (*(src + i) != '\0' && i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	while (i < n)
	{
		*(dest + i) = '\0';
		i++;
	}
	return (dest);
}

/*
#include <stdio.h>
#include <string.h>
#include <bsd/string.h>
int main(void)
{
	char a[] = "Born here";
	char b[] = "to Code";
	printf("a=%s\nb=\%s\n", a, b);
	ft_strncpy(a, b, 5);
	printf("%s\n", a);

	char a1[] = "Born here";
	char b1[] = "to Code";
	printf("a1=%s\nb1=\%s\n", a1, b1);
	strncpy(a1, b1, 5);
	printf("%s\n", a1);

	if(strcmp(a1, a) == 0)
		printf("=)__OK__=)\n");
	else
	{
		printf("=(**NOT OK**=(\n");
		printf("%d", strcmp(a1, a));
	}
	return (0);
}*/