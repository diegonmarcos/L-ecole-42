


#include <stdio.h>
#include <stdlib.h>

#define TRUE 42
#define FALSE 0

// malloc

int *ft_wtf(void)
{
	int *i;

	i = malloc(sizeof(int) * 1);
	if (i != 0)
		*i = TRUE;
	return (i);
}

int main()
{
	int *n;

	n = ft_wtf();
	if (!n)
		return (14);
	printf("%p\n", n);
	free (n);
	return (42);
}
