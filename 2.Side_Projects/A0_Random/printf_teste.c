#include <stdio.h>

int main (void)
{
	int i = 5;
	int j = 0;
	while (i > 0)
	{
		printf("i = %d\n", i, j);
		printf("j = %d\n", j);
		i--;
	}
	i = 5;
	while (i-- > 0)
		printf("j = %d\n", i + 1);
}