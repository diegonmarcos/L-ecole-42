/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnepomuc <dnepomuc@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 18:58:41 by dnepomuc          #+#    #+#             */
/*   Updated: 2024/03/25 00:36:34 by dnepomuc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h> 
//#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int		i;
	int		new_word;
	char	c;

	i = 0;
	new_word = 1;
	while (str[i] != '\0')
	{
		c = str[i];
		if (new_word == 1 && c >= 'a' && c <= 'z')
			str[i] = str[i] - 32;
		else
			if (new_word == 0 && c >= 'A' && c <= 'Z')
				str[i] = str[i] + 32;
		if (c < '0' || (c > '9' && c < 'A') || (c > 'Z' && c < 'a') || c > 'z')
			new_word = 1;
		else
			new_word = 0;
		i++;
	}
	return (str);
}

/*int main(void)
{
//	char message1[]= "salut, comment tu vas ? 42mots quarante-deux;";
	char *message = message1;
	ft_strcapitalize(message);
//	printf("%s",ft_strcapitalize(message));
	return(0);
}*/
