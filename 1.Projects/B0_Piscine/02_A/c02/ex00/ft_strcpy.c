/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinepomu <dinepomu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 18:58:41 by dnepomuc          #+#    #+#             */
/*   Updated: 2024/10/09 22:38:15 by dinepomu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	unsigned int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
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
	ft_strcpy(a, b);
	printf("%s\n", a);

	char a1[] = "Born here";
	char b1[] = "to Code";
	printf("a1=%s\nb1=\%s\n", a1, b1);
	strcpy(a1, b1);
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