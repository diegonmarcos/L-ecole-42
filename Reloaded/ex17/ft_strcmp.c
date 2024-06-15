/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnepomuc <dnepomuc@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 18:47:27 by dnepomuc          #+#    #+#             */
/*   Updated: 2024/06/09 18:49:00 by dnepomuc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	rzlt;
	int	i;

	rzlt = 0;
	i = 0;
	while (rzlt == 0)
	{
		if (s1[i] != s2[i])
			rzlt = s1[i] - s2[i];
		else if ((s1[i] == '\0') && (s2[i] == '\0'))
			return (0);
		else
			i++;
	}
	return (rzlt);
}
