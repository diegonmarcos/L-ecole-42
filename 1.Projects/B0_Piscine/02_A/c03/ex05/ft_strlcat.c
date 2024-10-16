/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinepomu <dinepomu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 18:58:41 by dnepomuc          #+#    #+#             */
/*   Updated: 2024/10/16 19:57:32 by dinepomu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	dlen;
	unsigned int	slen;

	i = 0;
	j = 0;
	while (dest[j] != '\0')
	{
		j++;
	}
	dlen = j;
	slen = ft_strlen(src);
	if (size == 0 || size <= dlen)
		return (slen + size);
	while (src [i] && i < size - dlen - 1)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dlen + slen);
}
/*
#include <stdio.h>
#include <bsd/string.h> 	// cc *.c -lbsd
int main (void)
{
	char src[] = "5678";

    char dest [100] = "1234";
    printf("%u \n", ft_strlcat(dest, src, 7));
	printf("%s \n", dest);
    char dest1 [100] = "1234";
	printf("%zu \n", strlcat(dest1, src, 7));
    printf("%s \n", dest1);
	
    char dest3 [100] = "1234";
    printf("%u \n", ft_strlcat(dest3, src, 3));
	printf("%s \n", dest3);
    char dest4 [100] = "1234";
	printf("%zu \n", strlcat(dest4, src, 3));
    printf("%s \n", dest4);
}*/