/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_study.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinepomu <dinepomu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 15:22:57 by dinepomu          #+#    #+#             */
/*   Updated: 2024/10/21 17:47:07 by dinepomu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strchr(char *str, char charset)
{
	while (*str)
	{
		if (*str == charset)
			return (1);
		str++;
	}
	if (charset == '\0')
		return (1);
	return (0);
}

int	count_words(char *str, char *charset)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (str[i])
	{
		if (strchr(str[i], charset) == 0)
			i++;
		else
		{
			j++;
			while (str[i] != charset[0] && str[i] != ',' 
				&& str[i] != '!' && str[i] != '.')
				i++;
		}
	}
	return (j);
}

#include <stdio.h>

void print (char **str)
{
	int i;

	i = 0;
	while (str[i])
	{
		printf("%s\n", str[i]);
		i++;
	}
}

int	main(void)
{
	char	*str = "Hello, world! This is a split test.";

	char	*charset = " ,!.";

	printf("%d\n", count_words(str, charset));

//	char **str2 = ft_split(str, charset);
//	print(str2);
//	ft_free(str2);

	return (0);
}