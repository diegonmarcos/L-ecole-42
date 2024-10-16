#include <unistd.h>

int	process_sign(char *str, int *idx)
{
	int	sign_factor;
	int	j;

	j = 0;
	sign_factor = 1;
	while ((str[j] >= 9 && str[j] <= 13) || str[j] == 32)
		j++;
	while (str[j] == '+' || str[j] == '-')
	{
		if (str[j] == '-')
			sign_factor = -sign_factor;
		j++;
	}
	*idx = j;
	return (sign_factor);
}

int	ft_atoi(char *str)
{
	int	sign;
	int	num;
	int	j;

	num = 0;
	j = 0;
	sign = process_sign(str, &j);
	while (str[j] && str[j] >= '0' && str[j] <= '9')
	{
		num = num * 10 + (str[j] - '0');
		j++;
	}
	return (num * sign);
}
/*
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <limits.h>

int main(void)
{
//	char s[12];
//	snprintf(s, sizeof(s), "%d", INT_MIN);

	char s[] = "---+--+01234506789ab567"; //will be negative
//	char s[] = "  	    01234506789ab567";
//	char s[] = "01234506789ab567";
//	char s[] = "-1\3245b6a12334";
//	char s[] = "-+13245b6a12334"

    printf("%s\n", s);
	printf("%d\n", ft_atoi(s));
	printf("%d\n", atoi(s));
    return (0);
}
*/