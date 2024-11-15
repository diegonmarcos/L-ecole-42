/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinepomu <dinepomu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 18:49:08 by dinepomu          #+#    #+#             */
/*   Updated: 2024/11/14 19:58:18 by dinepomu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
•Create a function that returns the result of the conversion of the string nbr from a
base base_from to a base base_to.
•nbr, base_from, base_to may be not writable.
•nbr will follow the same rules as ft_atoi_base (from an other module). Beware of
’+’, ’-’ and whitespaces.
•The number represented by nbr must fit inside an int.
•If a base is wrong, NULL should be returned.
•The returned number must be prefix only by a single and uniq ’-’ if necessary, no
whitespaces, no ’+’.
•Here’s how it should be prototyped :
char *ft_convert_base(char *nbr, char *base_from, char *base_to);
*/
#include <stdlib.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strchr(char *str, char c)
{
	while (*str)
	{
		if (*str == c)
			return (str);
		str++;
	}
	return (0);
}

void	ft_strcat(char *dest, char *src)
{
	while (*dest)
		dest++;
	while (*src)
		*dest++ = *src++;
	*dest = '\0';
}

void	ft_strncat(char *dest, char *src, int n)
{
	while (*dest)
		dest++;
	while (*src && n--)
		*dest++ = *src++;
	*dest = '\0';
}

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int		ft_atoi_base(char *str, char *base)
{
	int		i;
	int		nbr;
	int		sign;
	int		lbase;

	i = 0;
	nbr = 0;
	sign = 1;
	lbase = ft_strlen(base);
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (ft_strchr(base, str[i]))
	{
		nbr = nbr * lbase + (ft_strchr(base, str[i]) - base);
		i++;
	}
	return (nbr * sign);
}

void	ft_nbr_base_str(int nbr, char *base, char *str) 
{
	int	lbase;
	lbase = ft_strlen(base);

	if (nbr < 0)
	{
		ft_strcat(str, "-");
		nbr *= -1;
	}

	if (nbr > lbase - 1)
	{
		ft_nbr_base_str(nbr/lbase, base, str);
		ft_nbr_base_str(nbr%lbase, base, str);
	}
	else
		ft_strncat(str, &base[nbr], 1);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*str;
	int		dec;
	int		max;
	int		base_to_length;
	int		count;

	dec = ft_atoi_base(nbr, base_from);
	base_to_length = ft_strlen(base_to);
	max = 1;
	count = 1;
	while (max <= dec)
	{
		max = max * base_to_length;
		count++;
	}
	str = malloc(sizeof(char) * (count + 1));
	if (str == NULL)
		return (0);
	ft_nbr_base_str(dec, base_to, &(*str));
	ft_putstr(str);
	return (nbr);
}

int main() {
	char *s = "42";
	char *s2 = "0123456789";
	char *s3 = "0123456789ABCDEF";
	ft_convert_base(s, s2, s3);
	return 0;
}