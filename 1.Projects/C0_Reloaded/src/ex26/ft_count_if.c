/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinepomu <dinepomu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 13:22:48 by dinepomu          #+#    #+#             */
/*   Updated: 2024/11/07 20:19:04 by dinepomu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (tab[i])
	{
		if (f(tab[i]) == 1)
			count++;
		i++;
	}
	return (count);
}
/*
// tester
#include <stdio.h>

void ft_print_arrays_of_strings(char **tab) 
{
  int i = 0;
  while (tab[i]) 
  {
	printf("%s, ", tab[i]);
	i++;
  }
}


int starts_with_a(char *str) 
{
  if (str[0] == 'a') 
    return 1;
  else 
    return 0;
}

int main() {
  char *words[] = {"apple", "banana", "avocado", "grape", "apricot", NULL};

  // Use ft_count_if to count strings starting with 'a'
  int count = ft_count_if(words, starts_with_a);
  printf("Words: ");
  ft_print_arrays_of_strings(words);
  printf("\nNumber of words starting with 'a': %d\n", count); 

  return 0;
}
*/