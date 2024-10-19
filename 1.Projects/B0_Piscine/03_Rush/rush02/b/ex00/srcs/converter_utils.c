#include <stdlib.h>
#include "rush02.h"

extern int	error_status;

char	*get_value_from_dict(char *key, char **numbers, char **values) //Used to find the value corresponding to a specific key.
{
	int	i;
	char *empty_str;

	i = 0;
	while (numbers[i])
	{
		if (ft_strcmp(numbers[i], key) == 0)
			return (values[i]);
		i++;
	}
	error_status = 1;
	empty_str = (char *)malloc(1 * sizeof(char));
	empty_str[0] = 0;
	return (empty_str);
}

char	*calculate_magnitude(char *str) //Used to determine the magnitude of a given number (e.g. 1,000, 10,000).
{
	int		n;
	int		len;
	char	*magnitude;

	n = ft_strlen(str);
	len = ft_strlen(str);
	if (len >= 4)
		while ((n - 1) % 3 != 0)
			n--;
	else
		n = len;
	magnitude = malloc(n + 1);
	magnitude[0] = '1';
	magnitude[n] = '\0';
	while (--n > 0)
		magnitude[n] = '0';
	return (magnitude);
}

char	*extract_magnitude_number(char *str) //Creates an array to determine the magnitude of a given number.
{
	int		n;
	int		i;
	int		len;
	char	*number;

	len = ft_strlen(str);
	if (len >= 4)
	{
		n = (ft_strlen(str) - 1) % 3 + 1;
		number = malloc(n + 1);
		i = 0;
		while (i < n)
		{
			number[i] = str[i];
			i++;
		}
	}
	if (len <= 3)
	{
		n = 2;
		number = malloc(n);
		number[0] = str[0];
	}
	number[n] = '\0';
	return (number);
}

int	is_only_zeros(char *str) //Checks if a given string consists of only zeros.
{
	int	index;

	index = -1;
	while (index++, str[index] != 0)
		if (str[index] != '0')
			return (1);
	return (0);
}
