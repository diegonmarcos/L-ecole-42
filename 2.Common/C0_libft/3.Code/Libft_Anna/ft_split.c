/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akreise <akreise@student.42barcelona.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 18:42:57 by akreise           #+#    #+#             */
/*   Updated: 2024/07/11 20:30:33 by akreise          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	count_str(char const *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
		else
			i++;
	}
	return (count);
}

static char	*next_str(char const *s, char c, int *start)
{
	int		i;
	char	*str;

	i = *start;
	while (s[i] && s[i] == c)
		i++;
	*start = i;
	while (s[i] && s[i] != c)
		i++;
	str = ft_substr(s, *start, i - *start);
	*start = i;
	return (str);
}

static void	free_res(char **result)
{
	int	i;

	i = 0;
	while (result[i])
	{
		free(result[i]);
		i++;
	}
	free(result);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		str_num;
	int		i;
	int		start;

	if (!s)
		return (NULL);
	str_num = count_str(s, c);
	result = (char **)malloc((str_num + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	i = 0;
	start = 0;
	while (i < str_num)
	{
		result[i] = next_str(s, c, &start);
		if (!result)
		{
			free_res(result);
			return (NULL);
		}
		i++;
	}
	result[i] = NULL;
	return (result);
}

/*#include  <stdio.h>

int	main(void)
{
	char	**result;
	char	str[] = "hello world how are you?";
	char	delim = ' ';
	size_t	i;

	i = 0;
	result = ft_split(str, delim);
	if (result)
	{
		while (result[i] != NULL)
		{
			printf("%s\n", result[i]);
			free(result[i]);
			i++;
		}
		free(result);
	}
	return (0);
}*/
