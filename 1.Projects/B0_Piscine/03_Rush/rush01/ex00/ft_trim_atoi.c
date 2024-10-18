/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_trim_atoi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinepomu <dinepomu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 10:42:20 by ahugi             #+#    #+#             */
/*   Updated: 2024/10/13 22:42:32 by dinepomu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*Splits the string ’s’ using the character ’c’ as a delimiter.
*Returns an array of INTEGERS obtained by splitting ’s’ using ’c’ as a delimiter.
*/

#include <stdlib.h>

int	ft_count_words(char const *s, char c);

int	*ft_trim_atoi(char *s, char c)
{
	int	*strs;
	int	i;
	int	j;
	int	num;

	i = 0;
	j = 0;
	strs = (int *)malloc(sizeof(int) * (ft_count_words(s, c) + 1));
	if (!strs)
		return (NULL);
	while (s[i])
	{
		if (s[i] != c)
		{
			num = 0;
			num = num * 10 + (s[i] - '0');
			strs[j++] = num;
		}
		i++;
	}
	return (strs);
}
/*
#include <stdio.h>
int main()
{
    char *str = "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2";
    int *arr = ft_split(str, ' ');
    int i = 0;

    while (arr[i])
    {
		printf("%d ", arr[i]); 
        i++;
    }
    return 0;
}*/
