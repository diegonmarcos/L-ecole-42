/*header*/

#include <stdio.h>
#include <string.h>
#include <bsd/string.h>

int	str_len(char *str)
{
	int i;

	i = 0;
	while(*str)
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	int				des_l;
	int				src_l;

	i = 0;
	des_l = 0;
	src_l = 0;
	while (dest[i] && des_l < size)
	{
		des_l++;
		i++;
	}
	i = 0;
	while (src[i])
	{
		src_l++;
		i++;
	}
	i = 0;
	while (src[i] && i > (size - des_l - 1))
	{
		dest[des_l + i] = src[i];
		i++;
	}
	dest[des_l + i] = '\0';
	return (des_l + src_l);
}

int	main(void)
{
	char c[] = "This ";//strlen is 5
	char d[] = "is a test!"; //strlen is 10
	char c1[] = "This ";//strlen is 5
	char d1[] = "is a test!"; //strlen is 10

	unsigned long res = 0;
	unsigned int res1 = 0;
	int i = strlen(c) - 1;

	printf("System:\n");
	res = strlcat(c, d, i);
	printf("%d: %zu %s\n", i, res, c);
	
	printf("Mine:\n");
	res1 = ft_strlcat(c1, d1, i);
	printf("%d: %d %s\n", i, res1, c1);
	return (0);
}