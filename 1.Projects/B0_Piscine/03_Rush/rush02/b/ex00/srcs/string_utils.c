#include <stdlib.h>

int	ft_strlen(char *str) //Returning the length of a given string
{
	int	index;

	index = 0;
	while (str[index] != 0)
		index++;
	return (index);
}

void	ft_strcat_space(char *dest, char *src) //When appending the src array to the dest array, add a space character between them.
{
	int	src_index;
	int	dest_index;

	src_index = 0;
	dest_index = ft_strlen(dest);
	dest[dest_index] = ' ';
	dest_index++;
	while (src[src_index] != 0)
	{
		dest[dest_index] = src[src_index];
		src_index++;
		dest_index++;
	}
	dest[dest_index] = 0;
}

char	*ft_strdup(char *src) //Creating a copy of a given string.
{
	char	*dup; //Pointer to the duplicate array
	int		index;

	dup = (char *)malloc(ft_strlen(src) + 1);
	index = 0;
	while (src[index] != 0)
		dup[index] = src[index], index++;
	dup[index] = 0;
	return (dup);
}

int	ft_strcmp(char *s1, char *s2) //Comparing two character arrays (strings).
{
	int	index;

	index = 0;
	while (s1[index] != 0 && s2[index] != 0)
	{
		if (s1[index] != s2[index])
		{
			return ((unsigned char)s1[index] - (unsigned char)s2[index]);
		}
		index++;
	}
	return ((unsigned char)s1[index] - (unsigned char)s2[index]);
}

int	ft_atoi(char *str) //Converting a string to an integer
{
	int	nb;
	int	index;
	int	is_negative;

	index = 0;
	nb = 0;
	is_negative = 1;
	while ((str[index] >= 9 && str[index] <= 13) || str[index] == ' ')
		index++;
	while (str[index] == '+' || str[index] == '-')
	{
		if (str[index] == '-')
			is_negative *= -1;
		index++;
	}
	while (str[index] >= 48 && str[index] <= 57)
	{
		nb = nb * 10 + str[index] - '0';
		index++;
	}
	return (nb * is_negative);
}
