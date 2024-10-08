/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinepomu <dinepomu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 18:58:41 by dnepomuc          #+#    #+#             */
/*   Updated: 2024/10/08 14:34:55 by dinepomu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[j] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		while (str[i + j] == to_find[j] && str[i + j] != '\0')
			j++;
		if (to_find[j] == '\0')
			return (str + i);
		i++;
		j = 0;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>
int	main()
{
	char str1[] = "Duck 42 Piscine Duck piscine 2021 piscine Born to Code";
	char find1[] = "piscine";
	printf("%s\n", ft_strstr(str1, find1));
	printf("%s\n", strstr(str1, find1));
	char str2[] = "";
	char find2[] = "piscine";
	printf("%s\n", ft_strstr(str2, find2));
	printf("%s\n", strstr(str2, find2));
	char str3[] = "Abc ab bc";
	char find3[] = "";
	printf("%s\n", ft_strstr(str3, find3));
	printf("%s\n", strstr(str3, find3));
	char str4[] = "";
	char find4[] = "";
	printf("%s\n", ft_strstr(str4, find4));
	printf("%s\n", strstr(str4, find4));
	char str5[] = "Duck 42 Piscine Duck 1p1iscine 2021 piscineBorntoCode 42 24 21 12";
	char find5[] = "piscine";
	printf("%s\n", ft_strstr(str5, find5));
	printf("%s\n", strstr(str5, find5));
	return 0;
}*/
